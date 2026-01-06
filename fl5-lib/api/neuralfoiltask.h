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

/**
 * @file neuralfoiltask.h
 * @brief NeuralFoil on-the-fly viscous analysis task
 * 
 * This class provides a C++ interface to NeuralFoil for calculating 
 * viscous polar data during 3D analysis. It uses pybind11 to embed
 * Python, with careful GIL management to avoid crashes.
 */

#pragma once

#include <objects_global.h>
#include <vector>
#include <string>

class Foil;
class Polar;

/**
 * @brief Available NeuralFoil model sizes
 * 
 * Larger models are more accurate but slower.
 * xxsmall is fastest, xxxlarge is most accurate.
 */
enum class NeuralFoilModelSize {
    XXSMALL = 0,
    XSMALL,
    SMALL,
    MEDIUM,
    LARGE,
    XLARGE,
    XXLARGE,
    XXXLARGE
};

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
     * @brief Set the NeuralFoil model size
     * @param size Model size enum
     */
    void setModelSize(NeuralFoilModelSize size) { m_modelSize = size; }

    /**
     * @brief Get the current model size
     * @return Current model size
     */
    NeuralFoilModelSize modelSize() const { return m_modelSize; }

    /**
     * @brief Convert model size enum to string for Python bridge
     * @param size Model size enum
     * @return String representation (e.g., "xlarge")
     */
    static std::string modelSizeToString(NeuralFoilModelSize size);

    /**
     * @brief Convert string to model size enum
     * @param str String like "xlarge"
     * @return Corresponding enum value
     */
    static NeuralFoilModelSize stringToModelSize(std::string const &str);

    /**
     * @brief Ensure Python interpreter is initialized (lazy init)
     * @return true if Python is ready
     * 
     * The interpreter is never finalized to avoid segfaults.
     * This is safe - it stays alive for app lifetime.
     */
    static bool ensurePythonReady();

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
    NeuralFoilModelSize m_modelSize;

    static bool s_bPythonInitialized;
};


/**
 * @brief Cache for pre-computed NeuralFoil polars
 * 
 * Stores polars at multiple Reynolds numbers for a single foil,
 * enabling fast interpolation during 3D analysis. Polars are
 * generated once per unique foil geometry.
 */
class FL5LIB_EXPORT NeuralFoilPolarCache
{
public:
    NeuralFoilPolarCache();
    ~NeuralFoilPolarCache();

    /**
     * @brief Generate polar mesh for a foil across Re range
     * @param foil The airfoil geometry
     * @param reMin Minimum Reynolds number (with 0.5x safety factor already applied)
     * @param reMax Maximum Reynolds number (with 2.0x safety factor already applied)
     * @param alphaMin Minimum angle of attack (degrees)
     * @param alphaMax Maximum angle of attack (degrees)
     * @param nCrit Critical amplification factor
     * @param xtrTop Forced transition on top surface
     * @param xtrBot Forced transition on bottom surface
     * @param modelSize NeuralFoil model size
     * @return true if generation succeeded
     */
    bool generatePolarMesh(Foil const &foil,
                           double reMin, double reMax,
                           double alphaMin, double alphaMax,
                           double nCrit, double xtrTop, double xtrBot,
                           NeuralFoilModelSize modelSize);

    /**
     * @brief Get Cd by interpolating from cached polars
     * @param re Reynolds number
     * @param cl Lift coefficient
     * @param cd Output: drag coefficient
     * @param xtrTop Output: top transition location
     * @param xtrBot Output: bottom transition location
     * @return true if interpolation succeeded, false if out of range
     */
    bool getPlrPointFromCl(double re, double cl,
                           double &cd, double &xtrTop, double &xtrBot) const;

    /**
     * @brief Clear cached polars
     */
    void clear();

    /**
     * @brief Check if cache has data
     */
    bool hasData() const { return !m_polars.empty(); }

    /**
     * @brief Get number of cached polars
     */
    int nPolars() const { return static_cast<int>(m_polars.size()); }

    /**
     * @brief Get Re range covered
     */
    double reMin() const { return m_reMin; }
    double reMax() const { return m_reMax; }

    /**
     * @brief Number of Reynolds numbers in polar mesh
     */
    static constexpr int N_RE_VALUES = 16;

private:
    std::vector<Polar*> m_polars;  ///< Polars sorted by ascending Re
    std::vector<double> m_reValues; ///< Corresponding Re values
    double m_reMin;
    double m_reMax;
    double m_alphaMin;
    double m_alphaMax;
    std::string m_foilHash;  ///< Hash to detect foil geometry changes

    /**
     * @brief Compute a simple hash of foil coordinates
     */
    static std::string computeFoilHash(Foil const &foil);

    /**
     * @brief Generate logarithmically-spaced Re values
     */
    static std::vector<double> generateReValues(double reMin, double reMax, int nValues);
};

