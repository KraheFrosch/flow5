/****************************************************************************
** Meta object code from reading C++ file 'mainframe.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../globals/mainframe.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN9MainFrameE_t {};
} // unnamed namespace

template <> constexpr inline auto MainFrame::qt_create_metaobjectdata<qt_meta_tag_ZN9MainFrameE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MainFrame",
        "loadFile",
        "",
        "runScript",
        "handleIOResults",
        "bError",
        "handleScriptResults",
        "onDFoil",
        "onXDirect",
        "onXPlane",
        "onXSail",
        "onExecuteScript",
        "onExportAllPolars",
        "pathName",
        "bCSV",
        "onMakePlrFiles",
        "aboutFlow5",
        "aboutQt",
        "on3dAnalysisSettings",
        "onCloseProject",
        "onCopyCurGraphData",
        "onCredits",
        "onCurGraphSettings",
        "onCurvesUpdated",
        "onExportCurGraphDataToFile",
        "onExportCurGraphToSVG",
        "onFastGraph",
        "onGraphWidgetClosed",
        "GraphWt*",
        "onInsertProject",
        "onLoadProjectFile",
        "onLoadFoilFile",
        "onLoadPlrFile",
        "onLoadLastProject",
        "onLogFile",
        "onNewProject",
        "onOpenGLInfo",
        "onOpenGraphInNewWindow",
        "Graph*",
        "pGraph",
        "onLoadRecentFile",
        "onProcessFinished",
        "onPreferences",
        "onProjectModified",
        "onOnlineDoc",
        "onReleaseNotes",
        "onResetCurGraphScales",
        "onResetGraphSplitter",
        "onResetSettings",
        "onRestoreToolbars",
        "onSaveBoatAsProject",
        "onSavePlaneAsProject",
        "onSaveProject",
        "onSaveProjectAs",
        "onSaveTimer",
        "onSaveViewToImageFile",
        "onSetNoApp",
        "onShowInGraphLegend",
        "bShow",
        "onShowGraphLegend",
        "onShowLogWindow",
        "onTraceFile",
        "onTestRun"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'loadFile'
        QtMocHelpers::SignalData<void(QString)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'runScript'
        QtMocHelpers::SignalData<void(QString)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'handleIOResults'
        QtMocHelpers::SlotData<void(bool)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 5 },
        }}),
        // Slot 'handleScriptResults'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onDFoil'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onXDirect'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onXPlane'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onXSail'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onExecuteScript'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onExportAllPolars'
        QtMocHelpers::SlotData<bool(const QString &, bool) const>(12, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 13 }, { QMetaType::Bool, 14 },
        }}),
        // Slot 'onMakePlrFiles'
        QtMocHelpers::SlotData<void(QString const &) const>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 13 },
        }}),
        // Slot 'aboutFlow5'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'aboutQt'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on3dAnalysisSettings'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onCloseProject'
        QtMocHelpers::SlotData<bool()>(19, 2, QMC::AccessPrivate, QMetaType::Bool),
        // Slot 'onCopyCurGraphData'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onCredits'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onCurGraphSettings'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onCurvesUpdated'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onExportCurGraphDataToFile'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onExportCurGraphToSVG'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onFastGraph'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onGraphWidgetClosed'
        QtMocHelpers::SlotData<void(GraphWt *)>(27, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 28, 2 },
        }}),
        // Slot 'onInsertProject'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onLoadProjectFile'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onLoadFoilFile'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onLoadPlrFile'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onLoadLastProject'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onLogFile'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onNewProject'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onOpenGLInfo'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onOpenGraphInNewWindow'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onOpenGraphInNewWindow'
        QtMocHelpers::SlotData<void(Graph *)>(37, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 38, 39 },
        }}),
        // Slot 'onLoadRecentFile'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onProcessFinished'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onPreferences'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onProjectModified'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onOnlineDoc'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onReleaseNotes'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onResetCurGraphScales'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onResetGraphSplitter'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onResetSettings'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onRestoreToolbars'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onSaveBoatAsProject'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onSavePlaneAsProject'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onSaveProject'
        QtMocHelpers::SlotData<void()>(52, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onSaveProjectAs'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onSaveTimer'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onSaveViewToImageFile'
        QtMocHelpers::SlotData<void()>(55, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onSetNoApp'
        QtMocHelpers::SlotData<void()>(56, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onShowInGraphLegend'
        QtMocHelpers::SlotData<void(bool)>(57, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 58 },
        }}),
        // Slot 'onShowGraphLegend'
        QtMocHelpers::SlotData<void()>(59, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onShowLogWindow'
        QtMocHelpers::SlotData<void(bool)>(60, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 58 },
        }}),
        // Slot 'onShowLogWindow'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'onTraceFile'
        QtMocHelpers::SlotData<void()>(61, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onTestRun'
        QtMocHelpers::SlotData<int()>(62, 2, QMC::AccessPrivate, QMetaType::Int),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MainFrame, qt_meta_tag_ZN9MainFrameE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MainFrame::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9MainFrameE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9MainFrameE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9MainFrameE_t>.metaTypes,
    nullptr
} };

void MainFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainFrame *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->loadFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->runScript((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->handleIOResults((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->handleScriptResults(); break;
        case 4: _t->onDFoil(); break;
        case 5: _t->onXDirect(); break;
        case 6: _t->onXPlane(); break;
        case 7: _t->onXSail(); break;
        case 8: _t->onExecuteScript(); break;
        case 9: { bool _r = _t->onExportAllPolars((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->onMakePlrFiles((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->aboutFlow5(); break;
        case 12: _t->aboutQt(); break;
        case 13: _t->on3dAnalysisSettings(); break;
        case 14: { bool _r = _t->onCloseProject();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->onCopyCurGraphData(); break;
        case 16: _t->onCredits(); break;
        case 17: _t->onCurGraphSettings(); break;
        case 18: _t->onCurvesUpdated(); break;
        case 19: _t->onExportCurGraphDataToFile(); break;
        case 20: _t->onExportCurGraphToSVG(); break;
        case 21: _t->onFastGraph(); break;
        case 22: _t->onGraphWidgetClosed((*reinterpret_cast< std::add_pointer_t<GraphWt*>>(_a[1]))); break;
        case 23: _t->onInsertProject(); break;
        case 24: _t->onLoadProjectFile(); break;
        case 25: _t->onLoadFoilFile(); break;
        case 26: _t->onLoadPlrFile(); break;
        case 27: _t->onLoadLastProject(); break;
        case 28: _t->onLogFile(); break;
        case 29: _t->onNewProject(); break;
        case 30: _t->onOpenGLInfo(); break;
        case 31: _t->onOpenGraphInNewWindow(); break;
        case 32: _t->onOpenGraphInNewWindow((*reinterpret_cast< std::add_pointer_t<Graph*>>(_a[1]))); break;
        case 33: _t->onLoadRecentFile(); break;
        case 34: _t->onProcessFinished(); break;
        case 35: _t->onPreferences(); break;
        case 36: _t->onProjectModified(); break;
        case 37: _t->onOnlineDoc(); break;
        case 38: _t->onReleaseNotes(); break;
        case 39: _t->onResetCurGraphScales(); break;
        case 40: _t->onResetGraphSplitter(); break;
        case 41: _t->onResetSettings(); break;
        case 42: _t->onRestoreToolbars(); break;
        case 43: _t->onSaveBoatAsProject(); break;
        case 44: _t->onSavePlaneAsProject(); break;
        case 45: _t->onSaveProject(); break;
        case 46: _t->onSaveProjectAs(); break;
        case 47: _t->onSaveTimer(); break;
        case 48: _t->onSaveViewToImageFile(); break;
        case 49: _t->onSetNoApp(); break;
        case 50: _t->onShowInGraphLegend((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 51: _t->onShowGraphLegend(); break;
        case 52: _t->onShowLogWindow((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 53: _t->onShowLogWindow(); break;
        case 54: _t->onTraceFile(); break;
        case 55: { int _r = _t->onTestRun();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MainFrame::*)(QString )>(_a, &MainFrame::loadFile, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainFrame::*)(QString )>(_a, &MainFrame::runScript, 1))
            return;
    }
}

const QMetaObject *MainFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9MainFrameE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 56)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 56;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 56)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 56;
    }
    return _id;
}

// SIGNAL 0
void MainFrame::loadFile(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void MainFrame::runScript(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
QT_WARNING_POP
