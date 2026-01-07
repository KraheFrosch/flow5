# Flow5 Python Bindings - Standalone pybind11 Module
#
# This builds a Python extension module (.so) that links against fl5-lib.
# The fl5-lib MUST be built and installed first.
#
# Build instructions:
#   1. Build and install fl5-lib first (from parent directory)
#   2. qmake flow5py.pro
#   3. make
#   4. Test: python3 -c "import flow5py; print(flow5py.__doc__)"
#
# CRITICAL LESSONS FROM NEURALFOIL:
#   - Python.h must be included FIRST in source files
#   - QT_NO_KEYWORDS avoids 'slots' conflict
#   - Library link order matters: Qt before fl5-lib
#   - Never Py_Finalize() - crashes on reuse

TEMPLATE = lib
TARGET = flow5py

CONFIG += plugin c++17
CONFIG -= app_bundle

# This creates a Python extension module (.so), not a Qt plugin
CONFIG += no_plugin_name_prefix

QT -= gui
QT += core

# Result is flow5py.so (or flow5py.cpython-312-x86_64-linux-gnu.so)
# Python extensions need specific suffix
QMAKE_EXTENSION_SHLIB = so

# Prevent Qt 'slots' macro from conflicting with Python
DEFINES += QT_NO_KEYWORDS

# Python configuration (Python 3.13)
INCLUDEPATH += /usr/include/python3.13
# Path: fl5-lib/pybind -> fl5-lib -> flow5 -> Loftimizer-V2/venv
INCLUDEPATH += $$PWD/../../../venv/lib/python3.13/site-packages/pybind11/include
LIBS += -lpython3.13

# Flow5 headers (from installed location or local)
INCLUDEPATH += /usr/local/include/fl5-lib
INCLUDEPATH += /usr/local/include/fl5-lib/api
INCLUDEPATH += /usr/local/include/XFoil
INCLUDEPATH += /usr/local/include/opencascade
INCLUDEPATH += /usr/include/opencascade

# Flow5 headers (local, for development before install)
INCLUDEPATH += $$PWD/../api
INCLUDEPATH += $$PWD/../
INCLUDEPATH += $$PWD/../../XFoil-lib

# Library paths - system install and build directories
LIBS += -L/usr/local/lib
LIBS += -L$$PWD/../../../build/fl5-lib
LIBS += -L$$PWD/../

# CRITICAL: Link order matters! Qt before fl5-lib
LIBS += -lfl5-lib
LIBS += -lXFoil

# System dependencies (same as fl5-lib uses)
LIBS += -lopenblas
LIBS += -llapack
LIBS += -llapacke

# OCC libs (subset needed for plane geometry)
LIBS += -lTKBRep -lTKernel -lTKMath -lTKG3d

SOURCES += flow5_bindings.cpp

# Install target
target.path = $$PWD/../../venv/lib/python3.13/site-packages
INSTALLS += target

