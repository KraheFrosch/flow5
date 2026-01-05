/****************************************************************************

    flow5 application
    Copyright (C) 2025 André Deperrois 
    
    This file is part of flow5.

    flow5 is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License,
    or (at your option) any later version.

    flow5 is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty
    of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
    See the GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with flow5.
    If not, see <https://www.gnu.org/licenses/>.


*****************************************************************************/

// CRITICAL: pybind11 must be included FIRST, before ANY Qt headers
// This is because Qt defines 'slots' as a macro which conflicts with 
// Python's PyType_Spec.slots member. By including pybind11 first,
// the Python headers are processed before Qt's macro definitions.
//
// Also define QT_NO_KEYWORDS to prevent Qt from defining slots and signals macros
#ifndef QT_NO_KEYWORDS
#define QT_NO_KEYWORDS
#endif

#include <pybind11/embed.h>
#include <pybind11/stl.h>

// Now we can safely include the rest
#include <neuralfoiltask.h>
#include <foil.h>
#include <polar.h>

#include <iostream>

namespace py = pybind11;

bool NeuralFoilTask::s_bPythonInitialized = false;

NeuralFoilTask::NeuralFoilTask()
    : m_pPolar(nullptr)
    , m_NCrit(9.0)
    , m_XTrTop(1.0)
    , m_XTrBot(1.0)
{
}


NeuralFoilTask::~NeuralFoilTask()
{
}


bool NeuralFoilTask::initializePython(std::string const &venvPath)
{
    if (s_bPythonInitialized) return true;
    
    try {
        // Set environment to use the venv
        std::string sitePackages = venvPath + "/lib/python3.12/site-packages";
        
        // Also set the flow5 python bridge path
        // The bridge is in flow5/fl5-lib/python relative to venv which is in Loftimizer-V2/
        std::string bridgePath = venvPath + "/../flow5/fl5-lib/python";
        
        std::string pythonPath = bridgePath + ":" + sitePackages;
        setenv("PYTHONPATH", pythonPath.c_str(), 1);
        
        std::cerr << "[NeuralFoil] Initializing Python with PYTHONPATH=" << pythonPath << std::endl;
        
        py::initialize_interpreter();
        s_bPythonInitialized = true;
        
        // Verify the path is correct
        py::exec(R"(
import sys
print(f"[NeuralFoil] Python path: {sys.path[:3]}", flush=True)
)");
        
        return true;
    }
    catch (const py::error_already_set &e) {
        std::cerr << "[NeuralFoil] Python init error: " << e.what() << std::endl;
        return false;
    }
    catch (...) {
        std::cerr << "[NeuralFoil] Unknown error during Python init" << std::endl;
        return false;
    }
}


void NeuralFoilTask::finalizePython()
{
    if (s_bPythonInitialized) {
        py::finalize_interpreter();
        s_bPythonInitialized = false;
    }
}


bool NeuralFoilTask::initialize(Foil const &foil, Polar *pPolar)
{
    m_pPolar = pPolar;
    
    if (!pPolar) return false;
    
    m_NCrit = pPolar->NCrit();
    m_XTrTop = pPolar->XTripTop();
    m_XTrBot = pPolar->XTripBot();
    
    // Copy foil coordinates
    m_x.clear();
    m_y.clear();
    
    int n = foil.nNodes();
    m_x.reserve(n);
    m_y.reserve(n);
    
    for (int i = 0; i < n; i++) {
        m_x.push_back(foil.x(i));
        m_y.push_back(foil.y(i));
    }
    
    return true;
}


bool NeuralFoilTask::processClList()
{
    if (!s_bPythonInitialized) {
        // Try to initialize with default path
        std::string defaultVenv = std::string(getenv("HOME")) + "/Loftimizer-V2/venv";
        if (!initializePython(defaultVenv)) {
            std::cerr << "[NeuralFoil] Failed to initialize Python" << std::endl;
            return false;
        }
    }
    
    if (!m_pPolar) {
        std::cerr << "[NeuralFoil] No polar set" << std::endl;
        return false;
    }
    
    try {
        // Import the bridge module
        py::module_ bridge = py::module_::import("neuralfoil_bridge");
        
        // Build lists of Cl and Re values from the polar
        std::vector<double> clValues;
        std::vector<double> reValues;
        
        int n = m_pPolar->dataSize();
        for (int i = 0; i < n; i++) {
            clValues.push_back(m_pPolar->m_Cl.at(i));
            reValues.push_back(m_pPolar->m_Re.at(i));
        }
        
        // Call the Python function
        py::dict result = bridge.attr("analyze_foil_at_cls")(
            m_x, m_y, clValues, reValues,
            m_NCrit, m_XTrTop, m_XTrBot, 0.0  // mach=0
        );
        
        // Extract results
        bool success = result["success"].cast<bool>();
        std::vector<double> cdValues = result["cd"].cast<std::vector<double>>();
        std::vector<double> clResults = result["cl"].cast<std::vector<double>>();
        std::vector<double> xtrTopValues = result["xtr_top"].cast<std::vector<double>>();
        std::vector<double> xtrBotValues = result["xtr_bot"].cast<std::vector<double>>();
        
        // Update the polar with results
        for (int i = 0; i < n && i < static_cast<int>(cdValues.size()); i++) {
            m_pPolar->m_Cd[i] = cdValues[i];
            m_pPolar->m_Cl[i] = clResults[i];  // Actual achieved Cl (should be very close)
            m_pPolar->m_XTrTop[i] = xtrTopValues[i];
            m_pPolar->m_XTrBot[i] = xtrBotValues[i];
            
            // Mark as converged (NeuralFoil always converges)
            m_pPolar->m_Control[i] = 1.0;  // Repurposed field for convergence flag
        }
        
        return success;
    }
    catch (const py::error_already_set &e) {
        std::cerr << "[NeuralFoil] Python error: " << e.what() << std::endl;
        return false;
    }
    catch (const std::exception &e) {
        std::cerr << "[NeuralFoil] C++ error: " << e.what() << std::endl;
        return false;
    }
    catch (...) {
        std::cerr << "[NeuralFoil] Unknown error during processing" << std::endl;
        return false;
    }
}
