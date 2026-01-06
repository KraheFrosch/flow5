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


****************************************************************************/

// CRITICAL: Python.h must be included FIRST before any other headers.
// This is required by the Python C API documentation.
#define PY_SSIZE_T_CLEAN
#include <Python.h>

// Define QT_NO_KEYWORDS before Qt headers to avoid 'slots' macro conflict
#ifndef QT_NO_KEYWORDS
#define QT_NO_KEYWORDS
#endif

#include <pybind11/embed.h>
#include <pybind11/stl.h>

#include <neuralfoiltask.h>
#include <foil.h>
#include <polar.h>

#include <iostream>
#include <mutex>
#include <algorithm>
#include <cmath>

namespace py = pybind11;

bool NeuralFoilTask::s_bPythonInitialized = false;

// Mutex to protect Python operations
static std::mutex s_pythonMutex;

NeuralFoilTask::NeuralFoilTask()
    : m_pPolar(nullptr)
    , m_NCrit(9.0)
    , m_XTrTop(1.0)
    , m_XTrBot(1.0)
    , m_modelSize(NeuralFoilModelSize::XLARGE)
{
}


NeuralFoilTask::~NeuralFoilTask()
{
}


std::string NeuralFoilTask::modelSizeToString(NeuralFoilModelSize size)
{
    switch (size) {
        case NeuralFoilModelSize::XXSMALL:  return "xxsmall";
        case NeuralFoilModelSize::XSMALL:   return "xsmall";
        case NeuralFoilModelSize::SMALL:    return "small";
        case NeuralFoilModelSize::MEDIUM:   return "medium";
        case NeuralFoilModelSize::LARGE:    return "large";
        case NeuralFoilModelSize::XLARGE:   return "xlarge";
        case NeuralFoilModelSize::XXLARGE:  return "xxlarge";
        case NeuralFoilModelSize::XXXLARGE: return "xxxlarge";
        default: return "xlarge";
    }
}


NeuralFoilModelSize NeuralFoilTask::stringToModelSize(std::string const &str)
{
    if (str == "xxsmall")  return NeuralFoilModelSize::XXSMALL;
    if (str == "xsmall")   return NeuralFoilModelSize::XSMALL;
    if (str == "small")    return NeuralFoilModelSize::SMALL;
    if (str == "medium")   return NeuralFoilModelSize::MEDIUM;
    if (str == "large")    return NeuralFoilModelSize::LARGE;
    if (str == "xlarge")   return NeuralFoilModelSize::XLARGE;
    if (str == "xxlarge")  return NeuralFoilModelSize::XXLARGE;
    if (str == "xxxlarge") return NeuralFoilModelSize::XXXLARGE;
    return NeuralFoilModelSize::XLARGE;  // default
}


bool NeuralFoilTask::ensurePythonReady()
{
    std::lock_guard<std::mutex> lock(s_pythonMutex);
    
    if (s_bPythonInitialized) return true;
    
    // Set environment to use the venv
    const char* home = std::getenv("HOME");
    if (!home) home = "/home";
    
    std::string venvPath = std::string(home) + "/Loftimizer-V2/venv";
    std::string sitePackages = venvPath + "/lib/python3.12/site-packages";
    std::string bridgePath = std::string(home) + "/Loftimizer-V2/flow5/fl5-lib/python";
    
    std::string pythonPath = bridgePath + ":" + sitePackages;
    setenv("PYTHONPATH", pythonPath.c_str(), 1);
    
    std::cerr << "[NeuralFoil] Initializing Python with PYTHONPATH=" << pythonPath << std::endl;
    
    // Initialize Python with threading support
    // The interpreter stays alive for the app's lifetime (never finalized)
    Py_Initialize();
    
    // CRITICAL: Initialize threading and release the GIL
    // This allows other threads to acquire the GIL and enables
    // multiple calls to work correctly
    PyEval_InitThreads();
    
    // Save the main thread state and release the GIL
    // This is essential - without this, subsequent GIL acquisitions will deadlock
    PyThreadState* mainThreadState = PyEval_SaveThread();
    (void)mainThreadState;  // We keep it released
    
    s_bPythonInitialized = true;
    std::cerr << "[NeuralFoil] Python initialized with GIL released" << std::endl;
    
    return true;
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
    // Ensure Python is initialized (lazy init, happens once)
    if (!ensurePythonReady()) {
        std::cerr << "[NeuralFoil] Failed to initialize Python" << std::endl;
        return false;
    }
    
    if (!m_pPolar) {
        std::cerr << "[NeuralFoil] No polar set" << std::endl;
        return false;
    }
    
    // Use PyGILState API - this properly acquires the GIL from any thread
    // and releases it when gstate goes out of scope
    PyGILState_STATE gstate = PyGILState_Ensure();
    
    bool success = false;
    
    try {
        // Build lists of Cl and Re values from the polar
        std::vector<double> clValues;
        std::vector<double> reValues;
        
        int n = m_pPolar->dataSize();
        for (int i = 0; i < n; i++) {
            clValues.push_back(m_pPolar->m_Cl.at(i));
            reValues.push_back(m_pPolar->m_Re.at(i));
        }
        
        std::string modelStr = modelSizeToString(m_modelSize);
        
        // Import the bridge module
        py::module_ bridge = py::module_::import("neuralfoil_bridge");
        
        // Call the Python function
        py::dict result = bridge.attr("analyze_foil_at_cls")(
            m_x, m_y, clValues, reValues,
            m_NCrit, m_XTrTop, m_XTrBot, 0.0,  // mach=0
            modelStr  // model size
        );
        
        // Extract results
        success = result["success"].cast<bool>();
        
        if (!success) {
            std::string error = result["error"].cast<std::string>();
            std::cerr << "[NeuralFoil] Analysis failed: " << error << std::endl;
        }
        else {
            std::vector<double> cdValues = result["cd"].cast<std::vector<double>>();
            std::vector<double> clResults = result["cl"].cast<std::vector<double>>();
            std::vector<double> xtrTopValues = result["xtr_top"].cast<std::vector<double>>();
            std::vector<double> xtrBotValues = result["xtr_bot"].cast<std::vector<double>>();
            
            // Update the polar with results
            for (int i = 0; i < n && i < static_cast<int>(cdValues.size()); i++) {
                m_pPolar->m_Cd[i] = cdValues[i];
                m_pPolar->m_Cl[i] = clResults[i];
                m_pPolar->m_XTrTop[i] = xtrTopValues[i];
                m_pPolar->m_XTrBot[i] = xtrBotValues[i];
                m_pPolar->m_Control[i] = 1.0;  // Mark as converged
            }
        }
    }
    catch (const py::error_already_set &e) {
        std::cerr << "[NeuralFoil] Python error: " << e.what() << std::endl;
        success = false;
    }
    catch (const std::exception &e) {
        std::cerr << "[NeuralFoil] C++ error: " << e.what() << std::endl;
        success = false;
    }
    catch (...) {
        std::cerr << "[NeuralFoil] Unknown error during processing" << std::endl;
        success = false;
    }
    
    // CRITICAL: Release the GIL - this allows subsequent calls to work
    PyGILState_Release(gstate);
    
    return success;
}


// ========================================================================
// NeuralFoilPolarCache implementation
// ========================================================================

NeuralFoilPolarCache::NeuralFoilPolarCache()
    : m_reMin(0.0)
    , m_reMax(0.0)
    , m_alphaMin(0.0)
    , m_alphaMax(0.0)
{
}


NeuralFoilPolarCache::~NeuralFoilPolarCache()
{
    clear();
}


void NeuralFoilPolarCache::clear()
{
    for (Polar* p : m_polars) {
        delete p;
    }
    m_polars.clear();
    m_reValues.clear();
    m_foilHash.clear();
    m_reMin = m_reMax = 0.0;
}


std::string NeuralFoilPolarCache::computeFoilHash(Foil const &foil)
{
    // Simple hash based on number of points and a few key coordinates
    std::string hash = std::to_string(foil.nNodes());
    if (foil.nNodes() > 0) {
        hash += "_" + std::to_string(int(foil.x(0) * 10000));
        hash += "_" + std::to_string(int(foil.y(0) * 10000));
        int mid = foil.nNodes() / 2;
        hash += "_" + std::to_string(int(foil.x(mid) * 10000));
        hash += "_" + std::to_string(int(foil.y(mid) * 10000));
    }
    return hash;
}


std::vector<double> NeuralFoilPolarCache::generateReValues(double reMin, double reMax, int nValues)
{
    std::vector<double> reValues;
    reValues.reserve(nValues);
    
    // Logarithmically spaced: denser at lower Re
    double logMin = std::log10(reMin);
    double logMax = std::log10(reMax);
    double step = (logMax - logMin) / (nValues - 1);
    
    for (int i = 0; i < nValues; i++) {
        double logRe = logMin + i * step;
        reValues.push_back(std::pow(10.0, logRe));
    }
    
    return reValues;
}


bool NeuralFoilPolarCache::generatePolarMesh(Foil const &foil,
                                              double reMin, double reMax,
                                              double alphaMin, double alphaMax,
                                              double nCrit, double xtrTop, double xtrBot,
                                              NeuralFoilModelSize modelSize)
{
    // Check if we already have valid data for this foil
    std::string newHash = computeFoilHash(foil);
    if (hasData() && m_foilHash == newHash && 
        m_reMin <= reMin && m_reMax >= reMax &&
        m_alphaMin <= alphaMin && m_alphaMax >= alphaMax) {
        // Cache is still valid
        return true;
    }
    
    // Clear old data
    clear();
    
    // Ensure Python is ready
    if (!NeuralFoilTask::ensurePythonReady()) {
        std::cerr << "[NeuralFoilPolarCache] Failed to initialize Python" << std::endl;
        return false;
    }
    
    // Generate Re values
    m_reValues = generateReValues(reMin, reMax, N_RE_VALUES);
    m_reMin = reMin;
    m_reMax = reMax;
    m_alphaMin = alphaMin;
    m_alphaMax = alphaMax;
    m_foilHash = newHash;
    
    // Copy foil coordinates
    std::vector<double> x, y;
    int n = foil.nNodes();
    x.reserve(n);
    y.reserve(n);
    for (int i = 0; i < n; i++) {
        x.push_back(foil.x(i));
        y.push_back(foil.y(i));
    }
    
    std::string modelStr = NeuralFoilTask::modelSizeToString(modelSize);
    
    // Acquire GIL for Python call
    PyGILState_STATE gstate = PyGILState_Ensure();
    
    bool success = false;
    
    try {
        py::module_ bridge = py::module_::import("neuralfoil_bridge");
        
        // Call vectorized polar generation
        py::dict result = bridge.attr("generate_polar_vectorized")(
            x, y, m_reValues,
            alphaMin, alphaMax, 0.25,  // alpha step
            nCrit, xtrTop, xtrBot, 0.0,  // mach
            modelStr
        );
        
        success = result["success"].cast<bool>();
        
        if (success) {
            py::dict polars = result["polars"].cast<py::dict>();
            
            // Create Polar objects from Python data
            for (auto item : polars) {
                double re = item.first.cast<double>();
                py::dict data = item.second.cast<py::dict>();
                
                std::vector<double> alphas = data["alpha"].cast<std::vector<double>>();
                std::vector<double> cls = data["cl"].cast<std::vector<double>>();
                std::vector<double> cds = data["cd"].cast<std::vector<double>>();
                std::vector<double> xtrTops = data["xtr_top"].cast<std::vector<double>>();
                std::vector<double> xtrBots = data["xtr_bot"].cast<std::vector<double>>();
                
                Polar* pPolar = new Polar();
                pPolar->setType(xfl::T1POLAR);
                pPolar->setReynolds(re);
                pPolar->setNCrit(nCrit);
                pPolar->setXTripTop(xtrTop);
                pPolar->setXTripBot(xtrBot);
                
                int nPts = static_cast<int>(alphas.size());
                pPolar->resizeData(nPts);
                
                for (int i = 0; i < nPts; i++) {
                    pPolar->m_Alpha[i] = alphas[i];
                    pPolar->m_Cl[i] = cls[i];
                    pPolar->m_Cd[i] = cds[i];
                    pPolar->m_XTrTop[i] = xtrTops[i];
                    pPolar->m_XTrBot[i] = xtrBots[i];
                    pPolar->m_Re[i] = re;
                }
                
                m_polars.push_back(pPolar);
            }
            
            // Sort polars by Re
            std::sort(m_polars.begin(), m_polars.end(), 
                      [](Polar const* a, Polar const* b) {
                          return a->Reynolds() < b->Reynolds();
                      });
            
            std::cerr << "[NeuralFoilPolarCache] Generated " << m_polars.size() 
                      << " polars, Re range [" << reMin << ", " << reMax << "]" << std::endl;
        }
        else {
            std::string error = result["error"].cast<std::string>();
            std::cerr << "[NeuralFoilPolarCache] Generation failed: " << error << std::endl;
        }
    }
    catch (const py::error_already_set &e) {
        std::cerr << "[NeuralFoilPolarCache] Python error: " << e.what() << std::endl;
        success = false;
    }
    catch (const std::exception &e) {
        std::cerr << "[NeuralFoilPolarCache] C++ error: " << e.what() << std::endl;
        success = false;
    }
    
    PyGILState_Release(gstate);
    
    return success;
}


bool NeuralFoilPolarCache::getPlrPointFromCl(double re, double cl,
                                              double &cd, double &xtrTop, double &xtrBot) const
{
    if (m_polars.empty()) return false;
    
    // Find the two polars bracketing the Re value
    Polar const* pPolar1 = nullptr;
    Polar const* pPolar2 = nullptr;
    
    for (size_t i = 0; i < m_polars.size(); i++) {
        if (m_polars[i]->Reynolds() >= re) {
            pPolar2 = m_polars[i];
            if (i > 0) pPolar1 = m_polars[i-1];
            break;
        }
        pPolar1 = m_polars[i];
    }
    
    // Handle edge cases
    if (!pPolar1 && !pPolar2) return false;
    
    if (!pPolar1) {
        // Re below minimum - use lowest polar
        bool bOutCl = false;
        cd = pPolar2->interpolateFromCl(cl, Polar::CD, bOutCl);
        xtrTop = pPolar2->interpolateFromCl(cl, Polar::XTRTOP, bOutCl);
        xtrBot = pPolar2->interpolateFromCl(cl, Polar::XTRBOT, bOutCl);
        return !bOutCl;
    }
    
    if (!pPolar2) {
        // Re above maximum - use highest polar
        bool bOutCl = false;
        cd = pPolar1->interpolateFromCl(cl, Polar::CD, bOutCl);
        xtrTop = pPolar1->interpolateFromCl(cl, Polar::XTRTOP, bOutCl);
        xtrBot = pPolar1->interpolateFromCl(cl, Polar::XTRBOT, bOutCl);
        return !bOutCl;
    }
    
    // Interpolate between the two polars
    bool bOutCl1 = false, bOutCl2 = false;
    
    double cd1 = pPolar1->interpolateFromCl(cl, Polar::CD, bOutCl1);
    double cd2 = pPolar2->interpolateFromCl(cl, Polar::CD, bOutCl2);
    
    double xtrTop1 = pPolar1->interpolateFromCl(cl, Polar::XTRTOP, bOutCl1);
    double xtrTop2 = pPolar2->interpolateFromCl(cl, Polar::XTRTOP, bOutCl2);
    
    double xtrBot1 = pPolar1->interpolateFromCl(cl, Polar::XTRBOT, bOutCl1);
    double xtrBot2 = pPolar2->interpolateFromCl(cl, Polar::XTRBOT, bOutCl2);
    
    if (bOutCl1 || bOutCl2) return false;
    
    // Linear interpolation in Re
    double t = (re - pPolar1->Reynolds()) / (pPolar2->Reynolds() - pPolar1->Reynolds());
    
    cd = cd1 + t * (cd2 - cd1);
    xtrTop = xtrTop1 + t * (xtrTop2 - xtrTop1);
    xtrBot = xtrBot1 + t * (xtrBot2 - xtrBot1);
    
    return true;
}

