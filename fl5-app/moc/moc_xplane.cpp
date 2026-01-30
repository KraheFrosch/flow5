/****************************************************************************
** Meta object code from reading C++ file 'xplane.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../modules/xplane/xplane.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xplane.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6XPlaneE_t {};
} // unnamed namespace

template <> constexpr inline auto XPlane::qt_create_metaobjectdata<qt_meta_tag_ZN6XPlaneE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "XPlane",
        "projectModified",
        "",
        "curvesUpdated",
        "onExportPlPolarToClipboard",
        "on3dView",
        "onAddCpSectionCurve",
        "onAdjustWingGraphToWingSpan",
        "onAnalyze",
        "onAnimateModeSingle",
        "bStep",
        "onAutoWPolarNameOptions",
        "onBatchAnalysis",
        "onBatchAnalysis2",
        "onCenterViewOnPanel",
        "onCheckFreeEdges",
        "onCheckPanels",
        "onClearHighlightSelection",
        "onConnectTriangles",
        "onCopyCurPOppData",
        "onCpView",
        "onCurPOppOnly",
        "onCurveClicked",
        "Curve*",
        "pCurve",
        "ipt",
        "onCurveDoubleClicked",
        "onDefineT6Polar",
        "onDefineT7Polar",
        "onDefineT123578Polar",
        "onDeleteAllPOpps",
        "onDeleteWPlrPOpps",
        "onDeleteCurPOpp",
        "onDeleteCurPlane",
        "onDeleteCurPlPolar",
        "onDeletePlanePOpps",
        "onDeletePlaneWPolars",
        "onDuplicateCurPlane",
        "onDuplicateCurAnalysis",
        "onDuplicateAnalyses",
        "onEditCurFuse",
        "onEditCurPlane",
        "onEditCurPlaneDescription",
        "onEditCurPlPolar",
        "onEditCurPlPolarPts",
        "onEditCurWing",
        "onEditExtraDrag",
        "onExportAllPlPolars",
        "onExportAnalysisToXML",
        "onExportCurPOpp",
        "onExportFuseMeshToSTL",
        "onExportFuseToCAD",
        "onExportFuseToSTL",
        "onExportFuseToXML",
        "onExportMeshToSTLFile",
        "onExportPlanetoXML",
        "onExportWPolarToFile",
        "onExportWingMeshToSTL",
        "onExportWingToCAD",
        "onExportWingToSTL",
        "onExportWingToXML",
        "onExporttoAVL",
        "onExporttoSTL",
        "onFinishAnalysis",
        "PlanePolar*",
        "pWPolar",
        "onFuseInertia",
        "onFuseProps",
        "onFuseTriMesh",
        "onGraphChanged",
        "onHideAllPOpps",
        "onHideAllWPlrOpps",
        "onHideAllPlPolars",
        "onHidePlaneOpps",
        "onHidePlaneWPolars",
        "onImportAnalysesFromXML",
        "onImportExternalPolar",
        "onImportPlanesfromXML",
        "onImportSTLPlane",
        "onMeshInfo",
        "onModalView",
        "onNewPlane",
        "onNodeDistance",
        "onOpen3dViewInNewWindow",
        "onOpenAnalysisWindow",
        "onOptim3d",
        "onPickedNode",
        "iNode",
        "onPickedNodePair",
        "std::pair<int,int>",
        "nodepair",
        "onPlaneInertia",
        "onPlaneOppProperties",
        "onPlaneOppView",
        "onRenameCurPlane",
        "onRenameCurWPolar",
        "onResetCurPlPolar",
        "onResetFuseMesh",
        "onResetWPolarCurves",
        "onRootLocusView",
        "onScalePlane",
        "onScaleFuse",
        "onScaleWing",
        "onShowAllPOpps",
        "onShowWPlrPOpps",
        "onShowAllPlPolars",
        "onShowNodeNormals",
        "onShowOnlyCurPlPolar",
        "onShowPanelNormals",
        "onShowPlaneOpps",
        "onShowPlaneWPolars",
        "onShowPlaneWPolarsOnly",
        "onShowTargetCurve",
        "onShowVortices",
        "onShowWPolarOppsOnly",
        "onStabTimeView",
        "onStyleChanged",
        "onTranslateFuse",
        "onTranslatePlane",
        "onTranslateWing",
        "onUpdateMeshDisplay",
        "onVarSetChanged",
        "onPolarProperties",
        "onPolarView",
        "onWingCurveSelection",
        "onWingInertia",
        "onWingProps"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'projectModified'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'curvesUpdated'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onExportPlPolarToClipboard'
        QtMocHelpers::SlotData<QString()>(4, 2, QMC::AccessPublic, QMetaType::QString),
        // Slot 'on3dView'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onAddCpSectionCurve'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onAdjustWingGraphToWingSpan'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onAnalyze'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onAnimateModeSingle'
        QtMocHelpers::SlotData<void(bool)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 10 },
        }}),
        // Slot 'onAnimateModeSingle'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'onAutoWPolarNameOptions'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onBatchAnalysis'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onBatchAnalysis2'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onCenterViewOnPanel'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onCheckFreeEdges'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onCheckPanels'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onClearHighlightSelection'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onConnectTriangles'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onCopyCurPOppData'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onCpView'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onCurPOppOnly'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onCurveClicked'
        QtMocHelpers::SlotData<void(Curve *, int)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 23, 24 }, { QMetaType::Int, 25 },
        }}),
        // Slot 'onCurveDoubleClicked'
        QtMocHelpers::SlotData<void(Curve *)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 23, 24 },
        }}),
        // Slot 'onDefineT6Polar'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onDefineT7Polar'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onDefineT123578Polar'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onDeleteAllPOpps'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onDeleteWPlrPOpps'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onDeleteCurPOpp'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onDeleteCurPlane'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onDeleteCurPlPolar'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onDeletePlanePOpps'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onDeletePlaneWPolars'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onDuplicateCurPlane'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onDuplicateCurAnalysis'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onDuplicateAnalyses'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onEditCurFuse'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onEditCurPlane'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onEditCurPlaneDescription'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onEditCurPlPolar'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onEditCurPlPolarPts'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onEditCurWing'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onEditExtraDrag'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onExportAllPlPolars'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onExportAnalysisToXML'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onExportCurPOpp'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onExportFuseMeshToSTL'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onExportFuseToCAD'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onExportFuseToSTL'
        QtMocHelpers::SlotData<void()>(52, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onExportFuseToXML'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onExportMeshToSTLFile'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onExportPlanetoXML'
        QtMocHelpers::SlotData<void()>(55, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onExportWPolarToFile'
        QtMocHelpers::SlotData<void()>(56, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onExportWingMeshToSTL'
        QtMocHelpers::SlotData<void()>(57, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onExportWingToCAD'
        QtMocHelpers::SlotData<void()>(58, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onExportWingToSTL'
        QtMocHelpers::SlotData<void()>(59, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onExportWingToXML'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onExporttoAVL'
        QtMocHelpers::SlotData<void()>(61, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onExporttoSTL'
        QtMocHelpers::SlotData<void()>(62, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onFinishAnalysis'
        QtMocHelpers::SlotData<void(PlanePolar *)>(63, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 64, 65 },
        }}),
        // Slot 'onFuseInertia'
        QtMocHelpers::SlotData<void()>(66, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onFuseProps'
        QtMocHelpers::SlotData<void()>(67, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onFuseTriMesh'
        QtMocHelpers::SlotData<void()>(68, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onGraphChanged'
        QtMocHelpers::SlotData<void(int)>(69, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'onHideAllPOpps'
        QtMocHelpers::SlotData<void()>(70, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onHideAllWPlrOpps'
        QtMocHelpers::SlotData<void()>(71, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onHideAllPlPolars'
        QtMocHelpers::SlotData<void()>(72, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onHidePlaneOpps'
        QtMocHelpers::SlotData<void()>(73, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onHidePlaneWPolars'
        QtMocHelpers::SlotData<void()>(74, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onImportAnalysesFromXML'
        QtMocHelpers::SlotData<void()>(75, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onImportExternalPolar'
        QtMocHelpers::SlotData<void()>(76, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onImportPlanesfromXML'
        QtMocHelpers::SlotData<void()>(77, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onImportSTLPlane'
        QtMocHelpers::SlotData<void()>(78, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onMeshInfo'
        QtMocHelpers::SlotData<void()>(79, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onModalView'
        QtMocHelpers::SlotData<void()>(80, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onNewPlane'
        QtMocHelpers::SlotData<void()>(81, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onNodeDistance'
        QtMocHelpers::SlotData<void()>(82, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onOpen3dViewInNewWindow'
        QtMocHelpers::SlotData<void()>(83, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onOpenAnalysisWindow'
        QtMocHelpers::SlotData<void()>(84, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onOptim3d'
        QtMocHelpers::SlotData<void()>(85, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onPickedNode'
        QtMocHelpers::SlotData<void(int)>(86, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 87 },
        }}),
        // Slot 'onPickedNodePair'
        QtMocHelpers::SlotData<void(QPair<int,int>)>(88, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 89, 90 },
        }}),
        // Slot 'onPlaneInertia'
        QtMocHelpers::SlotData<void()>(91, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onPlaneOppProperties'
        QtMocHelpers::SlotData<void()>(92, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onPlaneOppView'
        QtMocHelpers::SlotData<void()>(93, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onRenameCurPlane'
        QtMocHelpers::SlotData<void()>(94, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onRenameCurWPolar'
        QtMocHelpers::SlotData<void()>(95, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onResetCurPlPolar'
        QtMocHelpers::SlotData<void()>(96, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onResetFuseMesh'
        QtMocHelpers::SlotData<void()>(97, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onResetWPolarCurves'
        QtMocHelpers::SlotData<void()>(98, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onRootLocusView'
        QtMocHelpers::SlotData<void()>(99, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onScalePlane'
        QtMocHelpers::SlotData<void()>(100, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onScaleFuse'
        QtMocHelpers::SlotData<void()>(101, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onScaleWing'
        QtMocHelpers::SlotData<void()>(102, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onShowAllPOpps'
        QtMocHelpers::SlotData<void()>(103, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onShowWPlrPOpps'
        QtMocHelpers::SlotData<void()>(104, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onShowAllPlPolars'
        QtMocHelpers::SlotData<void()>(105, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onShowNodeNormals'
        QtMocHelpers::SlotData<void()>(106, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onShowOnlyCurPlPolar'
        QtMocHelpers::SlotData<void()>(107, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onShowPanelNormals'
        QtMocHelpers::SlotData<void()>(108, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onShowPlaneOpps'
        QtMocHelpers::SlotData<void()>(109, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onShowPlaneWPolars'
        QtMocHelpers::SlotData<void()>(110, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onShowPlaneWPolarsOnly'
        QtMocHelpers::SlotData<void()>(111, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onShowTargetCurve'
        QtMocHelpers::SlotData<void()>(112, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onShowVortices'
        QtMocHelpers::SlotData<void()>(113, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onShowWPolarOppsOnly'
        QtMocHelpers::SlotData<void()>(114, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onStabTimeView'
        QtMocHelpers::SlotData<void()>(115, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onStyleChanged'
        QtMocHelpers::SlotData<void()>(116, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onTranslateFuse'
        QtMocHelpers::SlotData<void()>(117, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onTranslatePlane'
        QtMocHelpers::SlotData<void()>(118, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onTranslateWing'
        QtMocHelpers::SlotData<void()>(119, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onUpdateMeshDisplay'
        QtMocHelpers::SlotData<void()>(120, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onVarSetChanged'
        QtMocHelpers::SlotData<void(int)>(121, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'onPolarProperties'
        QtMocHelpers::SlotData<void()>(122, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onPolarView'
        QtMocHelpers::SlotData<void()>(123, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onWingCurveSelection'
        QtMocHelpers::SlotData<void()>(124, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onWingInertia'
        QtMocHelpers::SlotData<void()>(125, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onWingProps'
        QtMocHelpers::SlotData<void()>(126, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XPlane, qt_meta_tag_ZN6XPlaneE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject XPlane::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6XPlaneE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6XPlaneE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6XPlaneE_t>.metaTypes,
    nullptr
} };

void XPlane::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XPlane *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->projectModified(); break;
        case 1: _t->curvesUpdated(); break;
        case 2: { QString _r = _t->onExportPlPolarToClipboard();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->on3dView(); break;
        case 4: _t->onAddCpSectionCurve(); break;
        case 5: _t->onAdjustWingGraphToWingSpan(); break;
        case 6: _t->onAnalyze(); break;
        case 7: _t->onAnimateModeSingle((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->onAnimateModeSingle(); break;
        case 9: _t->onAutoWPolarNameOptions(); break;
        case 10: _t->onBatchAnalysis(); break;
        case 11: _t->onBatchAnalysis2(); break;
        case 12: _t->onCenterViewOnPanel(); break;
        case 13: _t->onCheckFreeEdges(); break;
        case 14: _t->onCheckPanels(); break;
        case 15: _t->onClearHighlightSelection(); break;
        case 16: _t->onConnectTriangles(); break;
        case 17: _t->onCopyCurPOppData(); break;
        case 18: _t->onCpView(); break;
        case 19: _t->onCurPOppOnly(); break;
        case 20: _t->onCurveClicked((*reinterpret_cast< std::add_pointer_t<Curve*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 21: _t->onCurveDoubleClicked((*reinterpret_cast< std::add_pointer_t<Curve*>>(_a[1]))); break;
        case 22: _t->onDefineT6Polar(); break;
        case 23: _t->onDefineT7Polar(); break;
        case 24: _t->onDefineT123578Polar(); break;
        case 25: _t->onDeleteAllPOpps(); break;
        case 26: _t->onDeleteWPlrPOpps(); break;
        case 27: _t->onDeleteCurPOpp(); break;
        case 28: _t->onDeleteCurPlane(); break;
        case 29: _t->onDeleteCurPlPolar(); break;
        case 30: _t->onDeletePlanePOpps(); break;
        case 31: _t->onDeletePlaneWPolars(); break;
        case 32: _t->onDuplicateCurPlane(); break;
        case 33: _t->onDuplicateCurAnalysis(); break;
        case 34: _t->onDuplicateAnalyses(); break;
        case 35: _t->onEditCurFuse(); break;
        case 36: _t->onEditCurPlane(); break;
        case 37: _t->onEditCurPlaneDescription(); break;
        case 38: _t->onEditCurPlPolar(); break;
        case 39: _t->onEditCurPlPolarPts(); break;
        case 40: _t->onEditCurWing(); break;
        case 41: _t->onEditExtraDrag(); break;
        case 42: _t->onExportAllPlPolars(); break;
        case 43: _t->onExportAnalysisToXML(); break;
        case 44: _t->onExportCurPOpp(); break;
        case 45: _t->onExportFuseMeshToSTL(); break;
        case 46: _t->onExportFuseToCAD(); break;
        case 47: _t->onExportFuseToSTL(); break;
        case 48: _t->onExportFuseToXML(); break;
        case 49: _t->onExportMeshToSTLFile(); break;
        case 50: _t->onExportPlanetoXML(); break;
        case 51: _t->onExportWPolarToFile(); break;
        case 52: _t->onExportWingMeshToSTL(); break;
        case 53: _t->onExportWingToCAD(); break;
        case 54: _t->onExportWingToSTL(); break;
        case 55: _t->onExportWingToXML(); break;
        case 56: _t->onExporttoAVL(); break;
        case 57: _t->onExporttoSTL(); break;
        case 58: _t->onFinishAnalysis((*reinterpret_cast< std::add_pointer_t<PlanePolar*>>(_a[1]))); break;
        case 59: _t->onFuseInertia(); break;
        case 60: _t->onFuseProps(); break;
        case 61: _t->onFuseTriMesh(); break;
        case 62: _t->onGraphChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 63: _t->onHideAllPOpps(); break;
        case 64: _t->onHideAllWPlrOpps(); break;
        case 65: _t->onHideAllPlPolars(); break;
        case 66: _t->onHidePlaneOpps(); break;
        case 67: _t->onHidePlaneWPolars(); break;
        case 68: _t->onImportAnalysesFromXML(); break;
        case 69: _t->onImportExternalPolar(); break;
        case 70: _t->onImportPlanesfromXML(); break;
        case 71: _t->onImportSTLPlane(); break;
        case 72: _t->onMeshInfo(); break;
        case 73: _t->onModalView(); break;
        case 74: _t->onNewPlane(); break;
        case 75: _t->onNodeDistance(); break;
        case 76: _t->onOpen3dViewInNewWindow(); break;
        case 77: _t->onOpenAnalysisWindow(); break;
        case 78: _t->onOptim3d(); break;
        case 79: _t->onPickedNode((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 80: _t->onPickedNodePair((*reinterpret_cast< std::add_pointer_t<std::pair<int,int>>>(_a[1]))); break;
        case 81: _t->onPlaneInertia(); break;
        case 82: _t->onPlaneOppProperties(); break;
        case 83: _t->onPlaneOppView(); break;
        case 84: _t->onRenameCurPlane(); break;
        case 85: _t->onRenameCurWPolar(); break;
        case 86: _t->onResetCurPlPolar(); break;
        case 87: _t->onResetFuseMesh(); break;
        case 88: _t->onResetWPolarCurves(); break;
        case 89: _t->onRootLocusView(); break;
        case 90: _t->onScalePlane(); break;
        case 91: _t->onScaleFuse(); break;
        case 92: _t->onScaleWing(); break;
        case 93: _t->onShowAllPOpps(); break;
        case 94: _t->onShowWPlrPOpps(); break;
        case 95: _t->onShowAllPlPolars(); break;
        case 96: _t->onShowNodeNormals(); break;
        case 97: _t->onShowOnlyCurPlPolar(); break;
        case 98: _t->onShowPanelNormals(); break;
        case 99: _t->onShowPlaneOpps(); break;
        case 100: _t->onShowPlaneWPolars(); break;
        case 101: _t->onShowPlaneWPolarsOnly(); break;
        case 102: _t->onShowTargetCurve(); break;
        case 103: _t->onShowVortices(); break;
        case 104: _t->onShowWPolarOppsOnly(); break;
        case 105: _t->onStabTimeView(); break;
        case 106: _t->onStyleChanged(); break;
        case 107: _t->onTranslateFuse(); break;
        case 108: _t->onTranslatePlane(); break;
        case 109: _t->onTranslateWing(); break;
        case 110: _t->onUpdateMeshDisplay(); break;
        case 111: _t->onVarSetChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 112: _t->onPolarProperties(); break;
        case 113: _t->onPolarView(); break;
        case 114: _t->onWingCurveSelection(); break;
        case 115: _t->onWingInertia(); break;
        case 116: _t->onWingProps(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (XPlane::*)()>(_a, &XPlane::projectModified, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (XPlane::*)()>(_a, &XPlane::curvesUpdated, 1))
            return;
    }
}

const QMetaObject *XPlane::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XPlane::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6XPlaneE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int XPlane::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 117)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 117;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 117)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 117;
    }
    return _id;
}

// SIGNAL 0
void XPlane::projectModified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void XPlane::curvesUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
