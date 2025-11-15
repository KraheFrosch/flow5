
# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
#DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

TEMPLATE = app
TARGET = flow5

VERSION = 7.54

QT += opengl widgets xml

greaterThan(QT_VERSION, 6)  {
   QT += openglwidgets
}

OBJECTS_DIR = ./objects
MOC_DIR     = ./moc
RCC_DIR     = ./rcc
DESTDIR     = .



CONFIG(release, debug|release) {
    CONFIG += optimize_full
}

CONFIG += c++20

# The path to the libraries' header files required by the code at compile time
INCLUDEPATH += $$PWD/../XFoil-lib/


#The path to the libraries' header files required by the code at compile time
INCLUDEPATH += $$PWD/../fl5-lib/



linux-g++ {
    CONFIG += thread

    # VARIABLES
    isEmpty(PREFIX):PREFIX = /usr/local
    BINDIR = $$PREFIX/bin
    DATADIR = $$PREFIX/share/flow5

    desktop.path = $$DATADIR
    desktop.files += ../meta/linux/$${TARGET}.desktop

    icon128.path = $$DATADIR
    icon128.files += ../meta/res/$${TARGET}.png

    target.path = $$BINDIR

    # MAKE INSTALL
    INSTALLS += target desktop icon128



#--------------------- GMSH ------------------------
    INCLUDEPATH += /opt/gmsh-4.14.1-Linux64-sdk/include/
    LIBS += -L/opt/gmsh-4.14.1-Linux64-sdk/lib
    LIBS += -lgmsh


    #----------- OPENCASCADE -------------
    #   Ensure that the paths to the binary libraries
    #   are known either by defining them at system level
    #   or by setting them explicitely in this section
    #   The include paths to the development headers must be set explicitely
        INCLUDEPATH += /usr/local/include/opencascade/
        LIBS += -L/usr/local/lib/


    #   To analyze with gprof - Debug config only
    #QMAKE_CXXFLAGS+=-pg
    #QMAKE_LFLAGS+=-pg
    # .../build/debug> gprof -pb flow5 gmon.out > ./analysis_flat.txt
    # .../build/debug> gprof -q flow5 gmon.out > ./analysis_callgraph.txt


# issues with OpenCascade
#QMAKE_CXXFLAGS_WARN_ON += -Wno-deprecated-declarations


}



win32-msvc {
    CONFIG += console
    CONFIG -= debug_and_release debug_and_release_target
    CONFIG += c++11
    CONFIG += no_batch

#   Prevent duplicate math DEFINES in OCC libs
    DEFINES -= _MATH_DEFINES_DEFINED

    RC_ICONS = ../meta/win64/flow5.ico

q

#--------------------- GMSH ------------------------
    INCLUDEPATH += D:\bin\gmsh-4.14.1-Windows64-sdk/include/
    LIBS += -L"D:\bin\gmsh-4.14.1-Windows64-sdk/lib"
    LIBS += -lgmsh.dll  # the default install name is gmsh.dll.lib


#------------ OPEN CASCADE --------------------------
    INCLUDEPATH += D:\bin\OCCT-7_9_2\build\inc
    LIBS += -LD:\bin\OCCT-7_9_2\build\win64\vc14\lib
    LIBS += -LD:\bin\OCCT-7_9_2\build\win64\vc14\bin



#---------------- OTHER WIN LIBS -------------------
    DEFINES += _UNICODE WIN64 QT_DLL QT_WIDGETS_LIB
    LIBS += -lopengl32

    #hide the console
    LIBS += -lKernel32 -lUser32
}



macx {
    TEMPLATE = app
    QMAKE_MAC_SDK = macosx
    QMAKE_APPLE_DEVICE_ARCHS = arm64


    # Add variables that will be used to build the info.plist file
    QMAKE_TARGET_BUNDLE_PREFIX = cere-aero.tech

    QMAKE_INFO_PLIST = ../meta/mac/info.plist
    ICON = ../meta/mac/flow5.icns

    DEFINES += GL_SILENCE_DEPRECATION   #Shame

    #-------XFoil
    # link to the lib:
    LIBS += -L$$OUT_PWD/../XFoil-lib -lXFoil
    # deploy the libs:
    XFoil.files = $$OUT_PWD/../XFoil-lib/libXFoil.1.dylib
    XFoil.path = Contents/Frameworks
    QMAKE_BUNDLE_DATA += XFoil

    #-------------OPENCASCADE -----------------
    # set the paths to the OpenCascade header and lib directories
    INCLUDEPATH += /usr/local/include/opencascade/
    LIBS += -L/usr/local/lib/

    #_____________GMSH__________________
    INCLUDEPATH += /Users/techwinder/bin/gmsh-4.14.1-MacOSARM-sdk/include
    LIBS += -L/Users/techwinder/bin/gmsh-4.14.1-MacOSARM-sdk/lib
    LIBS += -lgmsh

}


#CONFIG += warn_on
#QMAKE_CFLAGS_WARN_ON += -W3
#QMAKE_CFLAGS_WARN_ON += -W4



include(fl5.pri)



RESOURCES += \
    resources/qss.qrc \
    resources/icons.qrc \
    resources/images.qrc \
    resources/sailimages.qrc


#-----XFoil----
LIBS += -L../XFoil-lib -lXFoil


LIBS += -L../fl5-lib -lfl5-lib

LIBS += \
    -lTKBRep \
    -lTKBO \
    -lTKG3d \
    -lTKGeomAlgo \
    -lTKGeomBase \
    -lTKLCAF \
    -lTKMath \
    -lTKMesh \
    -lTKOffset \
    -lTKPrim \
    -lTKDESTEP \
    -lTKShHealing \
    -lTKTopAlgo \
    -lTKXSBase \
    -lTKernel \
    -lTKBool \
    -lTKG2d \
    -lTKCDF \
    -lTKFillet \
