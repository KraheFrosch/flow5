/****************************************************************************
** Meta object code from reading C++ file 'xdirect.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../modules/xdirect/xdirect.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xdirect.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7XDirectE_t {};
} // unnamed namespace

template <> constexpr inline auto XDirect::qt_create_metaobjectdata<qt_meta_tag_ZN7XDirectE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "XDirect",
        "projectModified",
        "",
        "curvesUpdated",
        "onAnalyze",
        "updateView",
        "onCopyCurOppData",
        "onCopyCurPolarData",
        "onAFoilLECircle",
        "onShowLEPosition",
        "bShow",
        "onAnalysisSettings",
        "onAutoPolarNameOptions",
        "onBLView",
        "onCircleFoil",
        "onCpGraph",
        "onCpi",
        "bInviscid",
        "onCurOppOnly",
        "bCurOppOnly",
        "onCurveClicked",
        "Curve*",
        "pCurve",
        "onCurveDoubleClicked",
        "onDefineAnalysis",
        "onDeleteCurFoil",
        "onDeleteCurOpp",
        "onDeleteCurPolar",
        "onDeleteFoilOpps",
        "onDeleteFoilPolars",
        "onDeletePolarOpps",
        "onDerotateFoil",
        "onDesignView",
        "onDuplicateFoil",
        "onEditCurPolar",
        "onEditCurPolarPts",
        "onExportAllPolars",
        "onExportCpGraph",
        "onExportCurFoilToDat",
        "onExportCurFoilToSVG",
        "onExportCurOpp",
        "onExportCurPolar",
        "onExportPolarOpps",
        "onExportXMLAnalysis",
        "onFillFoil",
        "onFinishAnalysis",
        "onFoilCoordinates",
        "onFoilFrom1Spline",
        "onFoilFrom2Splines",
        "onFoilFromCamber",
        "onFoilFromCoords",
        "onFoilProps",
        "onFoilScale",
        "onGraphChanged",
        "onHideAllFoils",
        "onHideAllOpps",
        "onHideAllPolars",
        "onHideFoilOpps",
        "onHideFoilPolars",
        "onHidePolarOpps",
        "onImportJavaFoilPolar",
        "onImportXFoilPolars",
        "onImportXMLAnalysis",
        "onInterpolateFoils",
        "onBatchAltAnalysis",
        "onBatchAnalysis",
        "onNacaFoils",
        "onOpenAnalysisWindow",
        "onDuplicateAnalyses",
        "onOpPointGraphChanged",
        "onOpPointProps",
        "onOpPointView",
        "onOppGraph",
        "onPolarProps",
        "onPolarView",
        "onRefineGlobally",
        "onRenameCurFoil",
        "onRenameCurPolar",
        "onResetAllPolarGraphsScales",
        "onResetCurPolar",
        "onResetPolarCurve",
        "onSavePolars",
        "onScanPolarFiles",
        "onSetFlap",
        "onSetFoilDescription",
        "onSetLERadius",
        "onSetTEGap",
        "onShowActiveFoilOnly",
        "onShowActivePolarOnly",
        "onShowAllFoils",
        "onShowAllOpps",
        "onShowAllPolars",
        "onShowCpLegend",
        "onShowFoilOpps",
        "onShowFoilPolars",
        "onShowFoilPolarsOnly",
        "onShowLegend",
        "onShowPolarOpps",
        "onShowTEHinge",
        "onSquareFoil",
        "onStyleChanged",
        "onVarSetChanged",
        "index"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'projectModified'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'curvesUpdated'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onAnalyze'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateView'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onCopyCurOppData'
        QtMocHelpers::SlotData<QString()>(6, 2, QMC::AccessPrivate, QMetaType::QString),
        // Slot 'onCopyCurPolarData'
        QtMocHelpers::SlotData<QString()>(7, 2, QMC::AccessPrivate, QMetaType::QString),
        // Slot 'onAFoilLECircle'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onShowLEPosition'
        QtMocHelpers::SlotData<void(bool)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 10 },
        }}),
        // Slot 'onAnalysisSettings'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onAutoPolarNameOptions'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onBLView'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onCircleFoil'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onCpGraph'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onCpi'
        QtMocHelpers::SlotData<void(bool)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 17 },
        }}),
        // Slot 'onCurOppOnly'
        QtMocHelpers::SlotData<void(bool)>(18, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 19 },
        }}),
        // Slot 'onCurOppOnly'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'onCurveClicked'
        QtMocHelpers::SlotData<void(Curve *)>(20, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 21, 22 },
        }}),
        // Slot 'onCurveDoubleClicked'
        QtMocHelpers::SlotData<void(Curve *)>(23, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 21, 22 },
        }}),
        // Slot 'onDefineAnalysis'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onDeleteCurFoil'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onDeleteCurOpp'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onDeleteCurPolar'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onDeleteFoilOpps'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onDeleteFoilPolars'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onDeletePolarOpps'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onDerotateFoil'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onDesignView'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onDuplicateFoil'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onEditCurPolar'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onEditCurPolarPts'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onExportAllPolars'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onExportCpGraph'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onExportCurFoilToDat'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onExportCurFoilToSVG'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onExportCurOpp'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onExportCurPolar'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onExportPolarOpps'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onExportXMLAnalysis'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onFillFoil'
        QtMocHelpers::SlotData<void(bool)>(44, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'onFinishAnalysis'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onFoilCoordinates'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onFoilFrom1Spline'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onFoilFrom2Splines'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onFoilFromCamber'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onFoilFromCoords'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onFoilProps'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onFoilScale'
        QtMocHelpers::SlotData<void()>(52, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onGraphChanged'
        QtMocHelpers::SlotData<void(int)>(53, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'onHideAllFoils'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onHideAllOpps'
        QtMocHelpers::SlotData<void()>(55, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onHideAllPolars'
        QtMocHelpers::SlotData<void()>(56, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onHideFoilOpps'
        QtMocHelpers::SlotData<void()>(57, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onHideFoilPolars'
        QtMocHelpers::SlotData<void()>(58, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onHidePolarOpps'
        QtMocHelpers::SlotData<void()>(59, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onImportJavaFoilPolar'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onImportXFoilPolars'
        QtMocHelpers::SlotData<void()>(61, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onImportXMLAnalysis'
        QtMocHelpers::SlotData<void()>(62, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onInterpolateFoils'
        QtMocHelpers::SlotData<void()>(63, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onBatchAltAnalysis'
        QtMocHelpers::SlotData<void()>(64, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onBatchAnalysis'
        QtMocHelpers::SlotData<void()>(65, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onNacaFoils'
        QtMocHelpers::SlotData<void()>(66, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onOpenAnalysisWindow'
        QtMocHelpers::SlotData<void()>(67, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onDuplicateAnalyses'
        QtMocHelpers::SlotData<void()>(68, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onOpPointGraphChanged'
        QtMocHelpers::SlotData<void()>(69, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onOpPointProps'
        QtMocHelpers::SlotData<void()>(70, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onOpPointView'
        QtMocHelpers::SlotData<void()>(71, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onOppGraph'
        QtMocHelpers::SlotData<void()>(72, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onPolarProps'
        QtMocHelpers::SlotData<void()>(73, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onPolarView'
        QtMocHelpers::SlotData<void()>(74, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onRefineGlobally'
        QtMocHelpers::SlotData<void()>(75, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onRenameCurFoil'
        QtMocHelpers::SlotData<void()>(76, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onRenameCurPolar'
        QtMocHelpers::SlotData<void()>(77, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onResetAllPolarGraphsScales'
        QtMocHelpers::SlotData<void()>(78, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onResetCurPolar'
        QtMocHelpers::SlotData<void()>(79, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onResetPolarCurve'
        QtMocHelpers::SlotData<void()>(80, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onSavePolars'
        QtMocHelpers::SlotData<void()>(81, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onScanPolarFiles'
        QtMocHelpers::SlotData<void()>(82, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onSetFlap'
        QtMocHelpers::SlotData<void()>(83, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onSetFoilDescription'
        QtMocHelpers::SlotData<void()>(84, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onSetLERadius'
        QtMocHelpers::SlotData<void()>(85, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onSetTEGap'
        QtMocHelpers::SlotData<void()>(86, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onShowActiveFoilOnly'
        QtMocHelpers::SlotData<void()>(87, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onShowActivePolarOnly'
        QtMocHelpers::SlotData<void()>(88, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onShowAllFoils'
        QtMocHelpers::SlotData<void()>(89, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onShowAllOpps'
        QtMocHelpers::SlotData<void()>(90, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onShowAllPolars'
        QtMocHelpers::SlotData<void()>(91, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onShowCpLegend'
        QtMocHelpers::SlotData<void()>(92, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onShowFoilOpps'
        QtMocHelpers::SlotData<void()>(93, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onShowFoilPolars'
        QtMocHelpers::SlotData<void()>(94, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onShowFoilPolarsOnly'
        QtMocHelpers::SlotData<void()>(95, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onShowLegend'
        QtMocHelpers::SlotData<void(bool)>(96, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 10 },
        }}),
        // Slot 'onShowPolarOpps'
        QtMocHelpers::SlotData<void()>(97, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onShowTEHinge'
        QtMocHelpers::SlotData<void(bool)>(98, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 10 },
        }}),
        // Slot 'onSquareFoil'
        QtMocHelpers::SlotData<void()>(99, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onStyleChanged'
        QtMocHelpers::SlotData<void()>(100, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onVarSetChanged'
        QtMocHelpers::SlotData<void(int)>(101, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 102 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XDirect, qt_meta_tag_ZN7XDirectE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject XDirect::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7XDirectE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7XDirectE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7XDirectE_t>.metaTypes,
    nullptr
} };

void XDirect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XDirect *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->projectModified(); break;
        case 1: _t->curvesUpdated(); break;
        case 2: _t->onAnalyze(); break;
        case 3: _t->updateView(); break;
        case 4: { QString _r = _t->onCopyCurOppData();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->onCopyCurPolarData();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->onAFoilLECircle(); break;
        case 7: _t->onShowLEPosition((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->onAnalysisSettings(); break;
        case 9: _t->onAutoPolarNameOptions(); break;
        case 10: _t->onBLView(); break;
        case 11: _t->onCircleFoil(); break;
        case 12: _t->onCpGraph(); break;
        case 13: _t->onCpi((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->onCurOppOnly((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->onCurOppOnly(); break;
        case 16: _t->onCurveClicked((*reinterpret_cast< std::add_pointer_t<Curve*>>(_a[1]))); break;
        case 17: _t->onCurveDoubleClicked((*reinterpret_cast< std::add_pointer_t<Curve*>>(_a[1]))); break;
        case 18: _t->onDefineAnalysis(); break;
        case 19: _t->onDeleteCurFoil(); break;
        case 20: _t->onDeleteCurOpp(); break;
        case 21: _t->onDeleteCurPolar(); break;
        case 22: _t->onDeleteFoilOpps(); break;
        case 23: _t->onDeleteFoilPolars(); break;
        case 24: _t->onDeletePolarOpps(); break;
        case 25: _t->onDerotateFoil(); break;
        case 26: _t->onDesignView(); break;
        case 27: _t->onDuplicateFoil(); break;
        case 28: _t->onEditCurPolar(); break;
        case 29: _t->onEditCurPolarPts(); break;
        case 30: _t->onExportAllPolars(); break;
        case 31: _t->onExportCpGraph(); break;
        case 32: _t->onExportCurFoilToDat(); break;
        case 33: _t->onExportCurFoilToSVG(); break;
        case 34: _t->onExportCurOpp(); break;
        case 35: _t->onExportCurPolar(); break;
        case 36: _t->onExportPolarOpps(); break;
        case 37: _t->onExportXMLAnalysis(); break;
        case 38: _t->onFillFoil((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 39: _t->onFinishAnalysis(); break;
        case 40: _t->onFoilCoordinates(); break;
        case 41: _t->onFoilFrom1Spline(); break;
        case 42: _t->onFoilFrom2Splines(); break;
        case 43: _t->onFoilFromCamber(); break;
        case 44: _t->onFoilFromCoords(); break;
        case 45: _t->onFoilProps(); break;
        case 46: _t->onFoilScale(); break;
        case 47: _t->onGraphChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 48: _t->onHideAllFoils(); break;
        case 49: _t->onHideAllOpps(); break;
        case 50: _t->onHideAllPolars(); break;
        case 51: _t->onHideFoilOpps(); break;
        case 52: _t->onHideFoilPolars(); break;
        case 53: _t->onHidePolarOpps(); break;
        case 54: _t->onImportJavaFoilPolar(); break;
        case 55: _t->onImportXFoilPolars(); break;
        case 56: _t->onImportXMLAnalysis(); break;
        case 57: _t->onInterpolateFoils(); break;
        case 58: _t->onBatchAltAnalysis(); break;
        case 59: _t->onBatchAnalysis(); break;
        case 60: _t->onNacaFoils(); break;
        case 61: _t->onOpenAnalysisWindow(); break;
        case 62: _t->onDuplicateAnalyses(); break;
        case 63: _t->onOpPointGraphChanged(); break;
        case 64: _t->onOpPointProps(); break;
        case 65: _t->onOpPointView(); break;
        case 66: _t->onOppGraph(); break;
        case 67: _t->onPolarProps(); break;
        case 68: _t->onPolarView(); break;
        case 69: _t->onRefineGlobally(); break;
        case 70: _t->onRenameCurFoil(); break;
        case 71: _t->onRenameCurPolar(); break;
        case 72: _t->onResetAllPolarGraphsScales(); break;
        case 73: _t->onResetCurPolar(); break;
        case 74: _t->onResetPolarCurve(); break;
        case 75: _t->onSavePolars(); break;
        case 76: _t->onScanPolarFiles(); break;
        case 77: _t->onSetFlap(); break;
        case 78: _t->onSetFoilDescription(); break;
        case 79: _t->onSetLERadius(); break;
        case 80: _t->onSetTEGap(); break;
        case 81: _t->onShowActiveFoilOnly(); break;
        case 82: _t->onShowActivePolarOnly(); break;
        case 83: _t->onShowAllFoils(); break;
        case 84: _t->onShowAllOpps(); break;
        case 85: _t->onShowAllPolars(); break;
        case 86: _t->onShowCpLegend(); break;
        case 87: _t->onShowFoilOpps(); break;
        case 88: _t->onShowFoilPolars(); break;
        case 89: _t->onShowFoilPolarsOnly(); break;
        case 90: _t->onShowLegend((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 91: _t->onShowPolarOpps(); break;
        case 92: _t->onShowTEHinge((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 93: _t->onSquareFoil(); break;
        case 94: _t->onStyleChanged(); break;
        case 95: _t->onVarSetChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (XDirect::*)()>(_a, &XDirect::projectModified, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (XDirect::*)()>(_a, &XDirect::curvesUpdated, 1))
            return;
    }
}

const QMetaObject *XDirect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XDirect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7XDirectE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int XDirect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 96)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 96;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 96)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 96;
    }
    return _id;
}

// SIGNAL 0
void XDirect::projectModified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void XDirect::curvesUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
