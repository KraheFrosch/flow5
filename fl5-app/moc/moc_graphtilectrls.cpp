/****************************************************************************
** Meta object code from reading C++ file 'graphtilectrls.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/graphs/controls/graphtilectrls.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphtilectrls.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14GraphTileCtrlsE_t {};
} // unnamed namespace

template <> constexpr inline auto GraphTileCtrls::qt_create_metaobjectdata<qt_meta_tag_ZN14GraphTileCtrlsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "GraphTileCtrls",
        "onCurrentRowChanged",
        "",
        "QModelIndex",
        "index",
        "onVarSetClicked",
        "onDelete",
        "onInsertAfter",
        "onInsertBefore",
        "onCellChanged",
        "onMoveUp",
        "onMoveDown"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onCurrentRowChanged'
        QtMocHelpers::SlotData<void(QModelIndex, QModelIndex)>(1, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 3, 2 },
        }}),
        // Slot 'onVarSetClicked'
        QtMocHelpers::SlotData<void(QModelIndex)>(5, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'onDelete'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onInsertAfter'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onInsertBefore'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onCellChanged'
        QtMocHelpers::SlotData<void(QModelIndex, QModelIndex)>(9, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 3, 2 },
        }}),
        // Slot 'onMoveUp'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onMoveDown'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GraphTileCtrls, qt_meta_tag_ZN14GraphTileCtrlsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject GraphTileCtrls::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14GraphTileCtrlsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14GraphTileCtrlsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14GraphTileCtrlsE_t>.metaTypes,
    nullptr
} };

void GraphTileCtrls::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GraphTileCtrls *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onCurrentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 1: _t->onVarSetClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 2: _t->onDelete(); break;
        case 3: _t->onInsertAfter(); break;
        case 4: _t->onInsertBefore(); break;
        case 5: _t->onCellChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 6: _t->onMoveUp(); break;
        case 7: _t->onMoveDown(); break;
        default: ;
        }
    }
}

const QMetaObject *GraphTileCtrls::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphTileCtrls::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14GraphTileCtrlsE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GraphTileCtrls::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
