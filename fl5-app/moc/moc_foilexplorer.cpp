/****************************************************************************
** Meta object code from reading C++ file 'foilexplorer.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../modules/xdirect/controls/foilexplorer.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'foilexplorer.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12FoilExplorerE_t {};
} // unnamed namespace

template <> constexpr inline auto FoilExplorer::qt_create_metaobjectdata<qt_meta_tag_ZN12FoilExplorerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FoilExplorer",
        "onItemClicked",
        "",
        "QModelIndex",
        "index",
        "onCurrentRowChanged",
        "currentIndex",
        "previousIndex",
        "onItemDoubleClicked",
        "selectFoil",
        "Foil*",
        "pFoil",
        "selectPolar",
        "Polar*",
        "pPolar",
        "selectOpPoint",
        "OpPoint*",
        "pOpp",
        "onSwitchAll",
        "bChecked",
        "onSetFilter"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onItemClicked'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'onCurrentRowChanged'
        QtMocHelpers::SlotData<void(QModelIndex, QModelIndex)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 6 }, { 0x80000000 | 3, 7 },
        }}),
        // Slot 'onItemDoubleClicked'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'selectFoil'
        QtMocHelpers::SlotData<void(Foil *)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 11 },
        }}),
        // Slot 'selectPolar'
        QtMocHelpers::SlotData<void(Polar *)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Slot 'selectOpPoint'
        QtMocHelpers::SlotData<void(OpPoint *)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 16, 17 },
        }}),
        // Slot 'selectOpPoint'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'onSwitchAll'
        QtMocHelpers::SlotData<void(bool)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 19 },
        }}),
        // Slot 'onSetFilter'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FoilExplorer, qt_meta_tag_ZN12FoilExplorerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject FoilExplorer::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12FoilExplorerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12FoilExplorerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12FoilExplorerE_t>.metaTypes,
    nullptr
} };

void FoilExplorer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FoilExplorer *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onItemClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 1: _t->onCurrentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 2: _t->onItemDoubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 3: _t->selectFoil((*reinterpret_cast< std::add_pointer_t<Foil*>>(_a[1]))); break;
        case 4: _t->selectPolar((*reinterpret_cast< std::add_pointer_t<Polar*>>(_a[1]))); break;
        case 5: _t->selectOpPoint((*reinterpret_cast< std::add_pointer_t<OpPoint*>>(_a[1]))); break;
        case 6: _t->selectOpPoint(); break;
        case 7: _t->onSwitchAll((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->onSetFilter(); break;
        default: ;
        }
    }
}

const QMetaObject *FoilExplorer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FoilExplorer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12FoilExplorerE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FoilExplorer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
