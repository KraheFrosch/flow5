/****************************************************************************
** Meta object code from reading C++ file 'boatdlg.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/editors/boatedit/boatdlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'boatdlg.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7BoatDlgE_t {};
} // unnamed namespace

template <> constexpr inline auto BoatDlg::qt_create_metaobjectdata<qt_meta_tag_ZN7BoatDlgE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "BoatDlg",
        "onAddHull",
        "",
        "onAddSail",
        "onDeleteHull",
        "onDeleteSail",
        "onDuplicateHull",
        "onDuplicateSail",
        "onEditHull",
        "onEditJib",
        "onEditMainSail",
        "onEditSail",
        "onGetHull",
        "onHullCellChanged",
        "QWidget*",
        "pWidget",
        "onHullItemClicked",
        "QModelIndex",
        "index",
        "onImportHullCAD",
        "onImportHullSTL",
        "onImportHullXML",
        "onImportSailFromBoat",
        "onImportSailFromCAD",
        "onImportSailFromSTL",
        "onImportSailFromXml",
        "onInsertFuseStl",
        "onInsertFuseXfl",
        "onMoveHullDown",
        "onMoveHullUp",
        "onMoveSailDown",
        "onMoveSailUp",
        "onNodeDistance",
        "onPickedNodePair",
        "std::pair<int,int>",
        "nodepair",
        "onRenameHull",
        "onRenameSail",
        "onResizeTableColumns",
        "onSailCellChanged",
        "onSailItemClicked",
        "accept",
        "reject"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onAddHull'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onAddSail'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onDeleteHull'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onDeleteSail'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onDuplicateHull'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onDuplicateSail'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onEditHull'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onEditJib'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onEditMainSail'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onEditSail'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onGetHull'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onHullCellChanged'
        QtMocHelpers::SlotData<void(QWidget *)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 14, 15 },
        }}),
        // Slot 'onHullItemClicked'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 17, 18 },
        }}),
        // Slot 'onImportHullCAD'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onImportHullSTL'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onImportHullXML'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onImportSailFromBoat'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onImportSailFromCAD'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onImportSailFromSTL'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onImportSailFromXml'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onInsertFuseStl'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onInsertFuseXfl'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onMoveHullDown'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onMoveHullUp'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onMoveSailDown'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onMoveSailUp'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onNodeDistance'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onPickedNodePair'
        QtMocHelpers::SlotData<void(QPair<int,int>)>(33, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 34, 35 },
        }}),
        // Slot 'onRenameHull'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onRenameSail'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onResizeTableColumns'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onSailCellChanged'
        QtMocHelpers::SlotData<void(QWidget *)>(39, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 14, 15 },
        }}),
        // Slot 'onSailItemClicked'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(40, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 17, 18 },
        }}),
        // Slot 'accept'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'reject'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<BoatDlg, qt_meta_tag_ZN7BoatDlgE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject BoatDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<XflDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7BoatDlgE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7BoatDlgE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7BoatDlgE_t>.metaTypes,
    nullptr
} };

void BoatDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<BoatDlg *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onAddHull(); break;
        case 1: _t->onAddSail(); break;
        case 2: _t->onDeleteHull(); break;
        case 3: _t->onDeleteSail(); break;
        case 4: _t->onDuplicateHull(); break;
        case 5: _t->onDuplicateSail(); break;
        case 6: _t->onEditHull(); break;
        case 7: _t->onEditJib(); break;
        case 8: _t->onEditMainSail(); break;
        case 9: _t->onEditSail(); break;
        case 10: _t->onGetHull(); break;
        case 11: _t->onHullCellChanged((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 12: _t->onHullItemClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 13: _t->onImportHullCAD(); break;
        case 14: _t->onImportHullSTL(); break;
        case 15: _t->onImportHullXML(); break;
        case 16: _t->onImportSailFromBoat(); break;
        case 17: _t->onImportSailFromCAD(); break;
        case 18: _t->onImportSailFromSTL(); break;
        case 19: _t->onImportSailFromXml(); break;
        case 20: _t->onInsertFuseStl(); break;
        case 21: _t->onInsertFuseXfl(); break;
        case 22: _t->onMoveHullDown(); break;
        case 23: _t->onMoveHullUp(); break;
        case 24: _t->onMoveSailDown(); break;
        case 25: _t->onMoveSailUp(); break;
        case 26: _t->onNodeDistance(); break;
        case 27: _t->onPickedNodePair((*reinterpret_cast< std::add_pointer_t<std::pair<int,int>>>(_a[1]))); break;
        case 28: _t->onRenameHull(); break;
        case 29: _t->onRenameSail(); break;
        case 30: _t->onResizeTableColumns(); break;
        case 31: _t->onSailCellChanged((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 32: _t->onSailItemClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 33: _t->accept(); break;
        case 34: _t->reject(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *BoatDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BoatDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7BoatDlgE_t>.strings))
        return static_cast<void*>(this);
    return XflDialog::qt_metacast(_clname);
}

int BoatDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XflDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    }
    return _id;
}
QT_WARNING_POP
