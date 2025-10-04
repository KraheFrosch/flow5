
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

VERSION = 7.53

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

CONFIG += c++17

# The path to the libraries' header files required by the code at compile time
INCLUDEPATH += $$PWD/../XFoil-lib/
# Forces re-build if a library header or source file has been modified
DEPENDPATH += $$PWD/../XFoil-lib/



linux-g++ {
    CONFIG += thread

    # VARIABLES
    isEmpty(PREFIX):PREFIX = /usr/local
    BINDIR = $$PREFIX/bin
    DATADIR = $$PREFIX/share/flow5

    desktop.path = $$DATADIR
    desktop.files += meta/linux/$${TARGET}.desktop

    icon128.path = $$DATADIR
    icon128.files += meta/res/$${TARGET}.png

    target.path = $$BINDIR

    # MAKE INSTALL
    INSTALLS += target desktop icon128


#comment out to use OpenBLAS
CONFIG += INTEL_MKL

    INTEL_MKL {
        #------------ MKL --------------------
        #    MKL can use the c++ matrices in row major order order
        DEFINES += INTEL_MKL

        #   Ensure that the paths to the include files and to the binary libraries
        #   are set either by defining them in the environment variables
        #   or by setting them explicitely in the following two lines
        #
          INCLUDEPATH += /opt/intel/oneapi/mkl/latest/include/
          LIBS += -L/opt/intel/oneapi/mkl/latest/lib/intel64/

            LIBS += -lmkl_intel_lp64  -lmkl_core -lmkl_gnu_thread
            LIBS += -lgomp
        ##    LIBS += -lmkl_intel_thread -lmkl_sequential
    } else {
        # ---------------- system LAPACK/LAPACKE + CBLAS/OpenBLAS-----------------------------
        DEFINES += OPENBLAS

        #    LIBS += -L/etc/alternatives  #distro dependent
            LIBS += -llapack -llapacke

            #link to either the cblas (slow) or openblas (fast) library
#            LIBS += -lcblas
            LIBS += -lopenblas

    }


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
QMAKE_CXXFLAGS_WARN_ON += -Wno-deprecated-declarations


}



win32-msvc {
    CONFIG += console
    CONFIG -= debug_and_release debug_and_release_target
    CONFIG += c++11
    CONFIG += no_batch

#   Prevent duplicate math DEFINES in OCC libs
    DEFINES -= _MATH_DEFINES_DEFINED
    DEFINES -= MATH_DEFINES_DEFINED

    RC_ICONS = meta/win64/flow5.ico

#----------------------- MKL  ---------------------
    DEFINES += INTEL_MKL
    INCLUDEPATH += "C:\Program Files (x86)\Intel\oneAPI\mkl\latest\include"

    LIBS += -L"C:\Program Files (x86)\Intel\oneAPI\mkl\latest\bin"
    LIBS += -L"C:\Program Files (x86)\Intel\oneAPI\mkl\latest\lib"
    LIBS += -L"C:\Program Files (x86)\Intel\oneAPI\compiler\latest\bin"
    LIBS += -L"C:\Program Files (x86)\Intel\oneAPI\compiler\latest\lib"
    LIBS += -lmkl_intel_lp64_dll
    LIBS += -lmkl_core_dll
    LIBS += -lmkl_intel_thread_dll -llibiomp5md  # for multithreading
    #    LIBS += -lmkl_sequential_dll



#------------ OPEN CASCADE --------------------------
    INCLUDEPATH += D:\bin\OpenCASCADE-7.7.0-vc14-64\opencascade-7.7.0\inc
    LIBS += -LD:\bin\OpenCASCADE-7.7.0-vc14-64\opencascade-7.7.0\win64\vc14\lib
    LIBS += -LD:\bin\OpenCASCADE-7.7.0-vc14-64\opencascade-7.7.0\win64\vc14\bin




#---------------- OTHER WIN LIBS -------------------
    DEFINES += _UNICODE WIN64 QT_DLL QT_WIDGETS_LIB
    LIBS += -lopengl32

    #hide the console
    LIBS += -lKernel32 -lUser32
}



macx {
    TEMPLATE = app
    QMAKE_MAC_SDK = macosx
    QMAKE_APPLE_DEVICE_ARCHS = x86_64 arm64

    # Add variables that will be used to build the info.plist file
    QMAKE_TARGET_BUNDLE_PREFIX = cere-aero.tech

    QMAKE_INFO_PLIST = ./meta/mac/info.plist
    ICON = ./meta/mac/flow5.icns

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
    INCLUDEPATH += /Users/techwinder/bin/opencascade-7.3.0/inc
    LIBS += -L/Users/techwinder/bin/opencascade-7.3.0/build_fat/mac64/clang/lib

    #-------------vecLib -----------------
    DEFINES += ACCELERATE
    #    QMAKE_LFLAGS += -framework Accelerate
    LIBS += -llapack -lcblas
}


#CONFIG += warn_on
#QMAKE_CFLAGS_WARN_ON += -W3
#QMAKE_CFLAGS_WARN_ON += -W4



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
    -lTKIGES \
    -lTKSTEP \
    -lTKSTEPAttr \
    -lTKSTEPBase \
    -lTKSTEP209 \
    -lTKShHealing \
    -lTKTopAlgo \
    -lTKXSBase \
    -lTKernel \
    -lTKBool \
    -lTKG2d \
    -lTKCDF \
    -lTKFillet \


DISTFILES += \
        meta/doc/next_dev.txt \
        meta/doc/releasenotes.html \


include(xfl/xfl.pri)
include(xfl3d/xfl3d.pri)
include(xflcore/xflcore.pri)
include(xflfoil/xflfoil.pri)
include(xflgeom/xflgeom.pri)
include(xflgraph/xflgraph.pri)
include(xflmath/xflmath.pri)
include(xflobjects/xflobjects.pri)
include(xflocc/xflocc.pri)
include(xfloptim/xfloptim.pri)
include(xflpanels/xflpanels.pri)
include(xflscript/xflscript.pri)
include(xflwidgets/xflwidgets.pri)

#-----XFoil----
LIBS += -L../XFoil-lib -lXFoil

