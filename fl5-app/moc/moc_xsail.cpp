/****************************************************************************
** Meta object code from reading C++ file 'xsail.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../modules/xsail/xsail.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xsail.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5XSailE_t {};
} // unnamed namespace

template <> constexpr inline auto XSail::qt_create_metaobjectdata<qt_meta_tag_ZN5XSailE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "XSail",
        "projectModified",
        "",
        "curvesUpdated",
        "on3dView",
        "onAnalyze",
        "onBtOppProps",
        "onBtPolarProps",
        "onCheckPanels",
        "onConnectTriangles",
        "onCurveClicked",
        "Curve*",
        "ipt",
        "onCurveDoubleClicked",
        "onDefinePolar",
        "onDuplicateCurAnalysis",
        "onDuplicateAnalysis",
        "onDeleteBtPolarOpps",
        "onDeleteBoatBtOpps",
        "onDeleteBtPolars",
        "onDeleteCurBoat",
        "onDeleteCurBtOpp",
        "onDeleteCurBtPolar",
        "onDuplicateCurBoat",
        "onEditBtPolarPts",
        "onEditCurBoat",
        "onEditCurBtPolar",
        "onEditHull",
        "onEditSail",
        "onExportAllBtPolars",
        "onExportBtOppToClipboard",
        "onExportBtOppToFile",
        "onExportBtPolarToClipboard",
        "onExportBtPolarToFile",
        "onExportBtPolarToXML",
        "onExportToXML",
        "onGraphChanged",
        "onFinishAnalysis",
        "onHideAllBtPolars",
        "onHideBtOpps",
        "onHideBtPolarOpps",
        "onHideBtPolars",
        "onImportBoatFromXml",
        "onImportBtPolarFromXML",
        "onManageBoats",
        "onMeshInfo",
        "onNewBoat",
        "onOpen3dViewInNewWindow",
        "onPolarView",
        "onRenameCurBoat",
        "onRenameCurBtPolar",
        "onResetBtPolar",
        "onResetBtPolarCurves",
        "onSail",
        "onScaleHull",
        "onScaleSailShape",
        "onScaleSailSize",
        "onShowAllBtPolars",
        "onShowBtOpps",
        "onShowBtPolarOpps",
        "onShowBtPolars",
        "onShowNormals",
        "onShowOnlyBtPolarOpps",
        "onShowOnlyBtPolars",
        "onTranslateHull",
        "onTranslateSail",
        "onUpdate3dScales",
        "onUpdate3dStreamlines",
        "onUpdateWake",
        "onVarSetChanged",
        "onExportSailToXML",
        "onExportSailToSTL",
        "onExportSailToStep",
        "onConvertSailToNURBS"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'projectModified'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'curvesUpdated'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on3dView'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onAnalyze'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onBtOppProps'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onBtPolarProps'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onCheckPanels'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onConnectTriangles'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onCurveClicked'
        QtMocHelpers::SlotData<void(Curve *, int)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 2 }, { QMetaType::Int, 12 },
        }}),
        // Slot 'onCurveDoubleClicked'
        QtMocHelpers::SlotData<void(Curve *)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 2 },
        }}),
        // Slot 'onDefinePolar'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onDuplicateCurAnalysis'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onDuplicateAnalysis'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onDeleteBtPolarOpps'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onDeleteBoatBtOpps'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onDeleteBtPolars'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onDeleteCurBoat'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onDeleteCurBtOpp'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onDeleteCurBtPolar'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onDuplicateCurBoat'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onEditBtPolarPts'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onEditCurBoat'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onEditCurBtPolar'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onEditHull'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onEditSail'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onExportAllBtPolars'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onExportBtOppToClipboard'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onExportBtOppToFile'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onExportBtPolarToClipboard'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onExportBtPolarToFile'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onExportBtPolarToXML'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onExportToXML'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onGraphChanged'
        QtMocHelpers::SlotData<void(int)>(36, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'onFinishAnalysis'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onHideAllBtPolars'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onHideBtOpps'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onHideBtPolarOpps'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onHideBtPolars'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onImportBoatFromXml'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onImportBtPolarFromXML'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onManageBoats'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onMeshInfo'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onNewBoat'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onOpen3dViewInNewWindow'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onPolarView'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onRenameCurBoat'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onRenameCurBtPolar'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onResetBtPolar'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onResetBtPolarCurves'
        QtMocHelpers::SlotData<void()>(52, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onSail'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onScaleHull'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onScaleSailShape'
        QtMocHelpers::SlotData<void()>(55, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onScaleSailSize'
        QtMocHelpers::SlotData<void()>(56, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onShowAllBtPolars'
        QtMocHelpers::SlotData<void()>(57, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onShowBtOpps'
        QtMocHelpers::SlotData<void()>(58, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onShowBtPolarOpps'
        QtMocHelpers::SlotData<void()>(59, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onShowBtPolars'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onShowNormals'
        QtMocHelpers::SlotData<void()>(61, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onShowOnlyBtPolarOpps'
        QtMocHelpers::SlotData<void()>(62, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onShowOnlyBtPolars'
        QtMocHelpers::SlotData<void()>(63, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onTranslateHull'
        QtMocHelpers::SlotData<void()>(64, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onTranslateSail'
        QtMocHelpers::SlotData<void()>(65, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onUpdate3dScales'
        QtMocHelpers::SlotData<void()>(66, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onUpdate3dStreamlines'
        QtMocHelpers::SlotData<void()>(67, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onUpdateWake'
        QtMocHelpers::SlotData<void()>(68, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onVarSetChanged'
        QtMocHelpers::SlotData<void(int)>(69, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'onExportSailToXML'
        QtMocHelpers::SlotData<void() const>(70, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onExportSailToSTL'
        QtMocHelpers::SlotData<void() const>(71, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onExportSailToStep'
        QtMocHelpers::SlotData<void()>(72, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onConvertSailToNURBS'
        QtMocHelpers::SlotData<void()>(73, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XSail, qt_meta_tag_ZN5XSailE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject XSail::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5XSailE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5XSailE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5XSailE_t>.metaTypes,
    nullptr
} };

void XSail::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XSail *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->projectModified(); break;
        case 1: _t->curvesUpdated(); break;
        case 2: _t->on3dView(); break;
        case 3: _t->onAnalyze(); break;
        case 4: _t->onBtOppProps(); break;
        case 5: _t->onBtPolarProps(); break;
        case 6: _t->onCheckPanels(); break;
        case 7: _t->onConnectTriangles(); break;
        case 8: _t->onCurveClicked((*reinterpret_cast< std::add_pointer_t<Curve*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 9: _t->onCurveDoubleClicked((*reinterpret_cast< std::add_pointer_t<Curve*>>(_a[1]))); break;
        case 10: _t->onDefinePolar(); break;
        case 11: _t->onDuplicateCurAnalysis(); break;
        case 12: _t->onDuplicateAnalysis(); break;
        case 13: _t->onDeleteBtPolarOpps(); break;
        case 14: _t->onDeleteBoatBtOpps(); break;
        case 15: _t->onDeleteBtPolars(); break;
        case 16: _t->onDeleteCurBoat(); break;
        case 17: _t->onDeleteCurBtOpp(); break;
        case 18: _t->onDeleteCurBtPolar(); break;
        case 19: _t->onDuplicateCurBoat(); break;
        case 20: _t->onEditBtPolarPts(); break;
        case 21: _t->onEditCurBoat(); break;
        case 22: _t->onEditCurBtPolar(); break;
        case 23: _t->onEditHull(); break;
        case 24: _t->onEditSail(); break;
        case 25: _t->onExportAllBtPolars(); break;
        case 26: _t->onExportBtOppToClipboard(); break;
        case 27: _t->onExportBtOppToFile(); break;
        case 28: _t->onExportBtPolarToClipboard(); break;
        case 29: _t->onExportBtPolarToFile(); break;
        case 30: _t->onExportBtPolarToXML(); break;
        case 31: _t->onExportToXML(); break;
        case 32: _t->onGraphChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 33: _t->onFinishAnalysis(); break;
        case 34: _t->onHideAllBtPolars(); break;
        case 35: _t->onHideBtOpps(); break;
        case 36: _t->onHideBtPolarOpps(); break;
        case 37: _t->onHideBtPolars(); break;
        case 38: _t->onImportBoatFromXml(); break;
        case 39: _t->onImportBtPolarFromXML(); break;
        case 40: _t->onManageBoats(); break;
        case 41: _t->onMeshInfo(); break;
        case 42: _t->onNewBoat(); break;
        case 43: _t->onOpen3dViewInNewWindow(); break;
        case 44: _t->onPolarView(); break;
        case 45: _t->onRenameCurBoat(); break;
        case 46: _t->onRenameCurBtPolar(); break;
        case 47: _t->onResetBtPolar(); break;
        case 48: _t->onResetBtPolarCurves(); break;
        case 49: _t->onSail(); break;
        case 50: _t->onScaleHull(); break;
        case 51: _t->onScaleSailShape(); break;
        case 52: _t->onScaleSailSize(); break;
        case 53: _t->onShowAllBtPolars(); break;
        case 54: _t->onShowBtOpps(); break;
        case 55: _t->onShowBtPolarOpps(); break;
        case 56: _t->onShowBtPolars(); break;
        case 57: _t->onShowNormals(); break;
        case 58: _t->onShowOnlyBtPolarOpps(); break;
        case 59: _t->onShowOnlyBtPolars(); break;
        case 60: _t->onTranslateHull(); break;
        case 61: _t->onTranslateSail(); break;
        case 62: _t->onUpdate3dScales(); break;
        case 63: _t->onUpdate3dStreamlines(); break;
        case 64: _t->onUpdateWake(); break;
        case 65: _t->onVarSetChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 66: _t->onExportSailToXML(); break;
        case 67: _t->onExportSailToSTL(); break;
        case 68: _t->onExportSailToStep(); break;
        case 69: _t->onConvertSailToNURBS(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (XSail::*)()>(_a, &XSail::projectModified, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (XSail::*)()>(_a, &XSail::curvesUpdated, 1))
            return;
    }
}

const QMetaObject *XSail::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XSail::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5XSailE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int XSail::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 70)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 70;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 70)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 70;
    }
    return _id;
}

// SIGNAL 0
void XSail::projectModified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void XSail::curvesUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
