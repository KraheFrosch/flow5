# PlaneRun - Flow5 API Example
# Build with: qmake6 && make

QT += core
QT -= gui

CONFIG += console c++17
CONFIG -= app_bundle

TEMPLATE = app
TARGET = PlaneRun

SOURCES += planerun.cpp

# Flow5 library paths (absolute for testing)
FLOW5_ROOT = /home/luca/Loftimizer-V2/flow5

INCLUDEPATH += $$FLOW5_ROOT/fl5-lib
INCLUDEPATH += $$FLOW5_ROOT/fl5-lib/api
INCLUDEPATH += $$FLOW5_ROOT/XFoil-lib
INCLUDEPATH += /usr/include/opencascade

LIBS += -L$$FLOW5_ROOT/fl5-lib -lfl5-lib
LIBS += -L$$FLOW5_ROOT/XFoil-lib -lXFoil

# RPATH for finding libraries at runtime
QMAKE_RPATHDIR += $$FLOW5_ROOT/fl5-lib
QMAKE_RPATHDIR += $$FLOW5_ROOT/XFoil-lib
