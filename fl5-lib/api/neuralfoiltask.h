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

/**
 * @file neuralfoiltask.h
 * @brief NeuralFoil on-the-fly viscous analysis task
 * 
 * This class provides a C++ interface to NeuralFoil for calculating 
 * viscous polar data during 3D analysis. It mirrors the XFoilTask 
 * interface but uses NeuralFoil through an embedded Python interpreter.
 */

#pragma once

#include <objects_global.h>
#include <vector>
#include <string>

class Foil;
class Polar;

/**
 * @brief Task class for NeuralFoil on-the-fly calculations
 * 
 * This class processes a list of Cl and Re values for an airfoil
 * using NeuralFoil instead of XFoil. It provides guaranteed 
 * convergence and faster execution.
 */
class FL5LIB_EXPORT NeuralFoilTask
{
public:
    NeuralFoilTask();
    ~NeuralFoilTask();

    /**
     * @brief Initialize the task with a foil and polar
     * @param foil The airfoil geometry
     * @param pPolar Pointer to polar containing Re, NCrit, and target Cl values
     * @return true if initialization succeeded
     */
    bool initialize(Foil const &foil, Polar *pPolar);

    /**
     * @brief Process the list of Cl values and compute Cd for each
     * @return true if all points were processed successfully
     */
    bool processClList();

    /**
     * @brief Get the polar object
     * @return Const pointer to the polar
     */
    Polar const* polar() const { return m_pPolar; }

    /**
     * @brief Initialize the Python interpreter (call once at app startup)
     * @param venvPath Path to the Python virtual environment
     * @return true if initialization succeeded
     */
    static bool initializePython(std::string const &venvPath);

    /**
     * @brief Finalize the Python interpreter (call once at app shutdown)
     */
    static void finalizePython();

    /**
     * @brief Check if Python is initialized
     * @return true if Python interpreter is ready
     */
    static bool isPythonInitialized() { return s_bPythonInitialized; }

private:
    Polar *m_pPolar;
    std::vector<double> m_x;    ///< Foil x coordinates
    std::vector<double> m_y;    ///< Foil y coordinates
    double m_NCrit;
    double m_XTrTop;
    double m_XTrBot;

    static bool s_bPythonInitialized;
};
