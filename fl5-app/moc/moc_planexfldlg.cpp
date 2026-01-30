/****************************************************************************
** Meta object code from reading C++ file 'planexfldlg.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/editors/planeedit/planexfldlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'planexfldlg.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11PlaneXflDlgE_t {};
} // unnamed namespace

template <> constexpr inline auto PlaneXflDlg::qt_create_metaobjectdata<qt_meta_tag_ZN11PlaneXflDlgE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PlaneXflDlg",
        "onButton",
        "",
        "QAbstractButton*",
        "pButton",
        "onClearOutput",
        "onCutFuse",
        "onPartDataChanged",
        "onDuplicatePart",
        "onEditPart",
        "onExportMeshToSTLFile",
        "onFlipNormals",
        "onFuseMeshDlg",
        "onHighlightSel",
        "bSel",
        "onInsertElevator",
        "onInsertFin",
        "onImportOtherWing",
        "onImportOtherFuse",
        "onInsertFuseOcc",
        "onInsertFuseStl",
        "onInsertEllipticWing",
        "onInsertCADShape",
        "onInsertSTLCylinderFuse",
        "onInsertSTLSphereFuse",
        "onInsertFuseXfl",
        "onInsertFuseXml",
        "onInsertWing",
        "onInsertWingFromXml",
        "onInsertWingFromVSP",
        "onThinListClick",
        "onMovePartDown",
        "onMovePartUp",
        "onNamesChanged",
        "onOK",
        "iExitCode",
        "onPartInertia",
        "onPartItemClicked",
        "QModelIndex",
        "index",
        "onPlaneInertia",
        "onUpdatePlane",
        "onRemovePart",
        "onResetFuse",
        "onResetFuseMesh",
        "onResizeColumns",
        "onScalePart",
        "onScalePlane",
        "onSelectPart",
        "Part*",
        "pPart",
        "onSplitterMoved",
        "pos",
        "onTabChanged",
        "iNewTab",
        "onTessellation",
        "onThinThick",
        "onUpdateHighlightedPanels",
        "onUpdatePlaneProps",
        "onUpdateMesh",
        "onPickedNodePair",
        "std::pair<int,int>",
        "nodepair",
        "onMergeNodes",
        "bIsMerging",
        "onSelectPanels",
        "bSelect",
        "onDeleteP3Selection",
        "onMakeP3",
        "bCheck",
        "onMakeP3Strip",
        "onPickedNode",
        "iNode",
        "onUndo",
        "onRedo"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onButton'
        QtMocHelpers::SlotData<void(QAbstractButton *)>(1, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'onClearOutput'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onCutFuse'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onPartDataChanged'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onDuplicatePart'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onEditPart'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onExportMeshToSTLFile'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onFlipNormals'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onFuseMeshDlg'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onHighlightSel'
        QtMocHelpers::SlotData<void(bool)>(13, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Bool, 14 },
        }}),
        // Slot 'onInsertElevator'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onInsertFin'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onImportOtherWing'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onImportOtherFuse'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onInsertFuseOcc'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onInsertFuseStl'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onInsertEllipticWing'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onInsertCADShape'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onInsertSTLCylinderFuse'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onInsertSTLSphereFuse'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onInsertFuseXfl'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onInsertFuseXml'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onInsertWing'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onInsertWingFromXml'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onInsertWingFromVSP'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onThinListClick'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onMovePartDown'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onMovePartUp'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onNamesChanged'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onOK'
        QtMocHelpers::SlotData<void(int)>(34, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 35 },
        }}),
        // Slot 'onOK'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessProtected | QMC::MethodCloned, QMetaType::Void),
        // Slot 'onPartInertia'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onPartItemClicked'
        QtMocHelpers::SlotData<void(QModelIndex)>(37, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 38, 39 },
        }}),
        // Slot 'onPlaneInertia'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onUpdatePlane'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onRemovePart'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onResetFuse'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onResetFuseMesh'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onResizeColumns'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onScalePart'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onScalePlane'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onSelectPart'
        QtMocHelpers::SlotData<void(Part *)>(48, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 49, 50 },
        }}),
        // Slot 'onSplitterMoved'
        QtMocHelpers::SlotData<void(int, int)>(51, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 52 }, { QMetaType::Int, 39 },
        }}),
        // Slot 'onTabChanged'
        QtMocHelpers::SlotData<void(int)>(53, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 54 },
        }}),
        // Slot 'onTessellation'
        QtMocHelpers::SlotData<void()>(55, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onThinThick'
        QtMocHelpers::SlotData<void()>(56, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onUpdateHighlightedPanels'
        QtMocHelpers::SlotData<void()>(57, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onUpdatePlaneProps'
        QtMocHelpers::SlotData<void()>(58, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onUpdateMesh'
        QtMocHelpers::SlotData<void()>(59, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onPickedNodePair'
        QtMocHelpers::SlotData<void(QPair<int,int>)>(60, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 61, 62 },
        }}),
        // Slot 'onMergeNodes'
        QtMocHelpers::SlotData<void(bool)>(63, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Bool, 64 },
        }}),
        // Slot 'onSelectPanels'
        QtMocHelpers::SlotData<void(bool)>(65, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Bool, 66 },
        }}),
        // Slot 'onDeleteP3Selection'
        QtMocHelpers::SlotData<void()>(67, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onMakeP3'
        QtMocHelpers::SlotData<void(bool)>(68, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Bool, 69 },
        }}),
        // Slot 'onMakeP3Strip'
        QtMocHelpers::SlotData<void(bool)>(70, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Bool, 69 },
        }}),
        // Slot 'onPickedNode'
        QtMocHelpers::SlotData<void(int)>(71, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 72 },
        }}),
        // Slot 'onUndo'
        QtMocHelpers::SlotData<void()>(73, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onRedo'
        QtMocHelpers::SlotData<void()>(74, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PlaneXflDlg, qt_meta_tag_ZN11PlaneXflDlgE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PlaneXflDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<PlaneDlg::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11PlaneXflDlgE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11PlaneXflDlgE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11PlaneXflDlgE_t>.metaTypes,
    nullptr
} };

void PlaneXflDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PlaneXflDlg *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onButton((*reinterpret_cast< std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        case 1: _t->onClearOutput(); break;
        case 2: _t->onCutFuse(); break;
        case 3: _t->onPartDataChanged(); break;
        case 4: _t->onDuplicatePart(); break;
        case 5: _t->onEditPart(); break;
        case 6: _t->onExportMeshToSTLFile(); break;
        case 7: _t->onFlipNormals(); break;
        case 8: _t->onFuseMeshDlg(); break;
        case 9: _t->onHighlightSel((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->onInsertElevator(); break;
        case 11: _t->onInsertFin(); break;
        case 12: _t->onImportOtherWing(); break;
        case 13: _t->onImportOtherFuse(); break;
        case 14: _t->onInsertFuseOcc(); break;
        case 15: _t->onInsertFuseStl(); break;
        case 16: _t->onInsertEllipticWing(); break;
        case 17: _t->onInsertCADShape(); break;
        case 18: _t->onInsertSTLCylinderFuse(); break;
        case 19: _t->onInsertSTLSphereFuse(); break;
        case 20: _t->onInsertFuseXfl(); break;
        case 21: _t->onInsertFuseXml(); break;
        case 22: _t->onInsertWing(); break;
        case 23: _t->onInsertWingFromXml(); break;
        case 24: _t->onInsertWingFromVSP(); break;
        case 25: _t->onThinListClick(); break;
        case 26: _t->onMovePartDown(); break;
        case 27: _t->onMovePartUp(); break;
        case 28: _t->onNamesChanged(); break;
        case 29: _t->onOK((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 30: _t->onOK(); break;
        case 31: _t->onPartInertia(); break;
        case 32: _t->onPartItemClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 33: _t->onPlaneInertia(); break;
        case 34: _t->onUpdatePlane(); break;
        case 35: _t->onRemovePart(); break;
        case 36: _t->onResetFuse(); break;
        case 37: _t->onResetFuseMesh(); break;
        case 38: _t->onResizeColumns(); break;
        case 39: _t->onScalePart(); break;
        case 40: _t->onScalePlane(); break;
        case 41: _t->onSelectPart((*reinterpret_cast< std::add_pointer_t<Part*>>(_a[1]))); break;
        case 42: _t->onSplitterMoved((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 43: _t->onTabChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 44: _t->onTessellation(); break;
        case 45: _t->onThinThick(); break;
        case 46: _t->onUpdateHighlightedPanels(); break;
        case 47: _t->onUpdatePlaneProps(); break;
        case 48: _t->onUpdateMesh(); break;
        case 49: _t->onPickedNodePair((*reinterpret_cast< std::add_pointer_t<std::pair<int,int>>>(_a[1]))); break;
        case 50: _t->onMergeNodes((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 51: _t->onSelectPanels((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 52: _t->onDeleteP3Selection(); break;
        case 53: _t->onMakeP3((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 54: _t->onMakeP3Strip((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 55: _t->onPickedNode((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 56: _t->onUndo(); break;
        case 57: _t->onRedo(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractButton* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *PlaneXflDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlaneXflDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11PlaneXflDlgE_t>.strings))
        return static_cast<void*>(this);
    return PlaneDlg::qt_metacast(_clname);
}

int PlaneXflDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlaneDlg::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 58)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 58;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 58)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 58;
    }
    return _id;
}
QT_WARNING_POP
