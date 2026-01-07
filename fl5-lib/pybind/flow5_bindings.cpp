/**
 * Flow5 Python Bindings via pybind11
 * 
 * This module exposes Flow5's C++ classes to Python for use in
 * optimization workflows like Loftimizer.
 * 
 * CRITICAL LESSONS FROM NEURALFOIL IMPLEMENTATION:
 * 1. Python.h MUST be included FIRST before any Qt/other headers
 * 2. Define QT_NO_KEYWORDS to avoid 'slots' macro conflict with Python
 * 3. GIL management is critical for multi-call stability
 * 4. Never Py_Finalize() - keep interpreter alive for app lifetime
 * 
 * License: GPL-3.0 (same as Flow5)
 */

// CRITICAL: Python.h must be included FIRST before any other headers
// This is required by the Python C API documentation
#define PY_SSIZE_T_CLEAN
#include <Python.h>

// Define QT_NO_KEYWORDS before Qt headers to avoid 'slots' macro conflict
#ifndef QT_NO_KEYWORDS
#define QT_NO_KEYWORDS
#endif

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/operators.h>

// Flow5 headers
#include <api.h>
#include <foil.h>
#include <objects2d.h>
#include <objects3d.h>
#include <planexfl.h>
#include <planepolar.h>
#include <planeopp.h>
#include <planetask.h>
#include <wingxfl.h>
#include <wingsection.h>
#include <vector3d.h>
#include <aeroforces.h>
#include <inertia.h>

namespace py = pybind11;

PYBIND11_MODULE(flow5py, m) {
    m.doc() = "Flow5 Python bindings for aerodynamic analysis";

    //==========================================================================
    // Vector3d - Basic 3D vector class
    //==========================================================================
    py::class_<Vector3d>(m, "Vector3d")
        .def(py::init<>())
        .def(py::init<double, double, double>())
        .def_readwrite("x", &Vector3d::x)
        .def_readwrite("y", &Vector3d::y)
        .def_readwrite("z", &Vector3d::z)
        .def("__repr__", [](const Vector3d &v) {
            return "Vector3d(" + std::to_string(v.x) + ", " + 
                   std::to_string(v.y) + ", " + std::to_string(v.z) + ")";
        });

    //==========================================================================
    // Foil - 2D airfoil geometry
    //==========================================================================
    py::class_<Foil>(m, "Foil")
        .def("name", &Foil::name)
        .def("set_name", &Foil::setName)
        .def("max_thickness", &Foil::maxThickness)
        .def("max_camber", &Foil::maxCamber)
        .def("repanel", &Foil::rePanel, py::arg("n_panels"), py::arg("amplitude") = 0.7)
        .def("set_te_flap", &Foil::setTEFlapData, 
             py::arg("enable"), py::arg("x_hinge"), py::arg("y_hinge"), py::arg("angle"))
        .def("__repr__", [](const Foil &f) {
            return "<Foil '" + f.name() + "'>";
        });

    //==========================================================================
    // WingSection - Single section of a wing
    //==========================================================================
    py::class_<WingSection>(m, "WingSection")
        .def(py::init<>())
        .def_property("chord", &WingSection::chord, &WingSection::setChord)
        .def_property("y_position", &WingSection::yPosition, &WingSection::setYPosition)
        .def_property("offset", &WingSection::offset, &WingSection::setXOffset)
        .def_property("dihedral", &WingSection::dihedral, &WingSection::setDihedral)
        .def_property("twist", &WingSection::twist, &WingSection::setTwist)
        .def_property("n_x_panels", &WingSection::nXPanels, &WingSection::setNX)
        .def_property("n_y_panels", &WingSection::nYPanels, &WingSection::setNY)
        .def("right_foil_name", &WingSection::rightFoilName)
        .def("left_foil_name", &WingSection::leftFoilName)
        .def("set_right_foil_name", &WingSection::setRightFoilName)
        .def("set_left_foil_name", &WingSection::setLeftFoilName);

    //==========================================================================
    // WingXfl - Complete wing with sections
    //==========================================================================
    py::class_<WingXfl>(m, "Wing")
        .def("name", &WingXfl::name)
        .def("n_sections", &WingXfl::nSections)
        .def("section", py::overload_cast<int>(&WingXfl::section), 
             py::return_value_policy::reference)
        .def("root_section", py::overload_cast<>(&WingXfl::rootSection),
             py::return_value_policy::reference)
        .def("tip_section", py::overload_cast<>(&WingXfl::tipSection),
             py::return_value_policy::reference)
        .def("insert_section", &WingXfl::insertSection)
        .def("append_section", py::overload_cast<>(&WingXfl::appendWingSection))
        .def("remove_section", &WingXfl::removeWingSection)
        .def("planform_span", &WingXfl::planformSpan)
        .def("planform_area", &WingXfl::planformArea)
        .def("projected_span", &WingXfl::projectedSpan)
        .def("projected_area", &WingXfl::projectedArea)
        .def("mac", &WingXfl::MAC)
        .def("set_position", [](WingXfl &w, double x, double y, double z) {
            w.setPosition(x, y, z);
        })
        .def("set_color", [](WingXfl &w, int r, int g, int b) {
            w.setColor({r, g, b});
        });

    //==========================================================================
    // PlaneXfl - Complete plane (wings + optional fuselage)
    //==========================================================================
    py::class_<PlaneXfl>(m, "Plane")
        .def(py::init<>())
        .def("name", &PlaneXfl::name)
        .def("set_name", &PlaneXfl::setName)
        .def("make_default_plane", &PlaneXfl::makeDefaultPlane)
        .def("main_wing", [](PlaneXfl &p) -> WingXfl* { return p.mainWing(); }, py::return_value_policy::reference)
        .def("stab", &PlaneXfl::stab, py::return_value_policy::reference)
        .def("fin", &PlaneXfl::fin, py::return_value_policy::reference)
        .def("wing", py::overload_cast<int>(&PlaneXfl::wing), 
             py::return_value_policy::reference)
        .def("n_wings", &PlaneXfl::nWings)
        .def("projected_area", &PlaneXfl::projectedArea, py::arg("other_wings") = false)
        .def("projected_span", &PlaneXfl::projectedSpan)
        .def("mac", &PlaneXfl::mac)
        .def("make_plane", &PlaneXfl::makePlane,
             py::arg("thick_surfaces") = false,
             py::arg("ignore_fuse_panels") = false,
             py::arg("make_tri_mesh") = true)
        // Inertia access
        .def("set_structural_mass", &Plane::setStructuralMass)
        .def("total_mass", &Plane::totalMass)
        .def("__repr__", [](const PlaneXfl &p) {
            return "<Plane '" + p.name() + "'>";
        });

    //==========================================================================
    // AeroForces - Aerodynamic force/moment results
    //==========================================================================
    py::class_<AeroForces>(m, "AeroForces")
        .def("cl", &AeroForces::CL)
        .def("cd", &AeroForces::CD)
        .def("cdi", &AeroForces::CDi)
        .def("cdv", &AeroForces::CDv)
        .def("cy", &AeroForces::CSide)
        .def("cm", &AeroForces::Cm)
        .def("cn", &AeroForces::Cn)
        .def("cli", &AeroForces::Cli)
        .def("cni", &AeroForces::Cni)
        .def("centre_of_pressure", &AeroForces::centreOfPressure)
        .def("fff", &AeroForces::Fff)
        .def("fsum", &AeroForces::Fsum);

    //==========================================================================
    // PlaneOpp - Single operating point result
    //==========================================================================
    py::class_<PlaneOpp>(m, "PlaneOpp")
        .def("alpha", &PlaneOpp::alpha)
        .def("beta", &PlaneOpp::beta)
        .def("phi", &PlaneOpp::phi)
        .def("q_inf", &PlaneOpp::QInf)
        .def("mass", &PlaneOpp::mass)
        .def("aero_forces", [](PlaneOpp const &o) -> AeroForces const& { return o.aeroForces(); }, py::return_value_policy::reference)
        .def("__repr__", [](const PlaneOpp &o) {
            return "<PlaneOpp alpha=" + std::to_string(o.alpha()) + ">";
        });

    //==========================================================================
    // PlanePolar - 3D analysis configuration
    //==========================================================================
    py::class_<PlanePolar>(m, "PlanePolar")
        .def(py::init<>())
        .def("name", &PlanePolar::name)
        .def("set_name", &PlanePolar::setName)
        .def("plane_name", &PlanePolar::planeName)
        .def("set_plane_name", &PlanePolar::setPlaneName)
        // Type configuration
        .def("set_type", &PlanePolar::setType)
        .def("set_analysis_method", &PlanePolar::setAnalysisMethod)
        // Reference values
        .def("set_reference_area", &PlanePolar::setReferenceArea)
        .def("set_reference_span", &PlanePolar::setReferenceSpanLength)
        .def("set_reference_chord", &PlanePolar::setReferenceChordLength)
        // Analysis options
        .def("set_thin_surfaces", &PlanePolar::setThinSurfaces)
        .def("set_viscous", &PlanePolar::setViscous)
        .def("set_viscous_otf", &PlanePolar::setViscOnTheFly)
        // Inertia
        .def("velocity", &PlanePolar::velocity)
        .def("set_velocity", &PlanePolar::setVelocity)
        // Results access
        .def("data_size", &PlanePolar::dataSize)
        .def("export_to_string", &PlanePolar::exportToString)
        .def("__repr__", [](const PlanePolar &p) {
            return "<PlanePolar '" + p.name() + "'>";
        });

    //==========================================================================
    // PlaneTask - Analysis execution engine
    //==========================================================================
    py::class_<PlaneTask>(m, "PlaneTask")
        .def(py::init<>())
        .def("set_objects", &PlaneTask::setObjects)
        .def("set_opp_list", &PlaneTask::setOppList)
        .def("set_keep_opps", &PlaneTask::setKeepOpps)
        .def("set_compute_derivatives", &PlaneTask::setComputeDerivatives)
        .def("output_to_stdio", &PlaneTask::outputToStdIO)
        .def("run", &PlaneTask::run)
        .def("initialize_task", &PlaneTask::initializeTask)
        .def("plane_opp_list", &PlaneTask::planeOppList, 
             py::return_value_policy::reference);

    //==========================================================================
    // Enums
    //==========================================================================
    py::enum_<xfl::enumPolarType>(m, "PolarType")
        .value("T1POLAR", xfl::T1POLAR)
        .value("T2POLAR", xfl::T2POLAR)
        .value("T3POLAR", xfl::T3POLAR)
        .value("T4POLAR", xfl::T4POLAR)
        .value("T5POLAR", xfl::T5POLAR)
        .value("T6POLAR", xfl::T6POLAR)
        .value("T7POLAR", xfl::T7POLAR)
        .value("T8POLAR", xfl::T8POLAR)
        .value("FIXED_SPEED", xfl::T1POLAR)
        .value("FIXED_LIFT", xfl::T2POLAR)
        .export_values();

    py::enum_<xfl::enumAnalysisMethod>(m, "AnalysisMethod")
        .value("LLT", xfl::LLT)
        .value("VLM1", xfl::VLM1)
        .value("VLM2", xfl::VLM2)
        .value("QUADS", xfl::QUADS)
        .value("TRILINEAR", xfl::TRILINEAR)
        .value("TRIUNIFORM", xfl::TRIUNIFORM)
        .export_values();

    //==========================================================================
    // Module-level functions (from api.h)
    //==========================================================================
    m.def("make_naca_foil", &foil::makeNacaFoil,
          py::arg("digits"), py::arg("name"),
          "Create a NACA 4 or 5 digit foil");

    m.def("load_foil", &foil::loadFoil,
          py::arg("pathname"),
          "Load a foil from a .dat file");

    m.def("get_foil", &foil::foil,
          py::arg("name"),
          py::return_value_policy::reference,
          "Get a foil by name");

    m.def("make_empty_plane", &plane::makeEmptyPlane,
          py::return_value_policy::reference,
          "Create an empty plane");

    m.def("delete_objects", &globals::deleteObjects,
          "Delete all objects and free memory - MUST call on exit");

    m.def("save_project", &globals::saveFl5Project,
          py::arg("pathname"),
          "Save the project to a .fl5 file");

    m.def("clear_log", &globals::clearLog);
    m.def("pop_log", &globals::poplog);

    //==========================================================================
    // Objects2d/Objects3d direct access for advanced use
    //==========================================================================
    m.def("insert_plane", static_cast<void(*)(Plane*)>(&Objects3d::insertPlane),
          py::arg("plane"),
          "Insert a plane into the global array");

    m.def("insert_polar", &Objects3d::insertPlPolar,
          py::arg("polar"),
          "Insert a plane polar into the global array");

    m.def("foil_count", &Objects2d::nFoils);
    m.def("polar_count", &Objects2d::nPolars);
}
