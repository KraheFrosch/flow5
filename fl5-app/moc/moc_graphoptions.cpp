/****************************************************************************
** Meta object code from reading C++ file 'graphoptions.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/graphs/controls/graphoptions.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphoptions.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12GraphOptionsE_t {};
} // unnamed namespace

template <> constexpr inline auto GraphOptions::qt_create_metaobjectdata<qt_meta_tag_ZN12GraphOptionsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "GraphOptions",
        "onAlignChildren",
        "",
        "onAxisStyle",
        "onBorderStyle",
        "LineStyle",
        "ls",
        "onColorIncrement",
        "onDefaultLineWidth",
        "index",
        "onGraphBackColor",
        "onGraphBorder",
        "bShow",
        "onLabelColor",
        "onLabelFont",
        "onLegendColor",
        "onLegendFont",
        "onMargin",
        "onTitleColor",
        "onTitleFont",
        "onXMajGridShow",
        "onXMajGridStyle",
        "onXMinGridShow",
        "onXMinGridStyle",
        "onYMajGridShow",
        "onYMajGridStyle",
        "onYMinGridShow",
        "onYMinGridStyle",
        "onSpinAnimation"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onAlignChildren'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onAxisStyle'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onBorderStyle'
        QtMocHelpers::SlotData<void(LineStyle)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Slot 'onColorIncrement'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onDefaultLineWidth'
        QtMocHelpers::SlotData<void(int)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'onGraphBackColor'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onGraphBorder'
        QtMocHelpers::SlotData<void(bool)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 12 },
        }}),
        // Slot 'onLabelColor'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onLabelFont'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onLegendColor'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onLegendFont'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onMargin'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onTitleColor'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onTitleFont'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onXMajGridShow'
        QtMocHelpers::SlotData<void(bool)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 12 },
        }}),
        // Slot 'onXMajGridStyle'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onXMinGridShow'
        QtMocHelpers::SlotData<void(bool)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 12 },
        }}),
        // Slot 'onXMinGridStyle'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onYMajGridShow'
        QtMocHelpers::SlotData<void(bool)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 12 },
        }}),
        // Slot 'onYMajGridStyle'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onYMinGridShow'
        QtMocHelpers::SlotData<void(bool)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 12 },
        }}),
        // Slot 'onYMinGridStyle'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onSpinAnimation'
        QtMocHelpers::SlotData<void(bool)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GraphOptions, qt_meta_tag_ZN12GraphOptionsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject GraphOptions::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12GraphOptionsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12GraphOptionsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12GraphOptionsE_t>.metaTypes,
    nullptr
} };

void GraphOptions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GraphOptions *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onAlignChildren(); break;
        case 1: _t->onAxisStyle(); break;
        case 2: _t->onBorderStyle((*reinterpret_cast< std::add_pointer_t<LineStyle>>(_a[1]))); break;
        case 3: _t->onColorIncrement(); break;
        case 4: _t->onDefaultLineWidth((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->onGraphBackColor(); break;
        case 6: _t->onGraphBorder((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->onLabelColor(); break;
        case 8: _t->onLabelFont(); break;
        case 9: _t->onLegendColor(); break;
        case 10: _t->onLegendFont(); break;
        case 11: _t->onMargin(); break;
        case 12: _t->onTitleColor(); break;
        case 13: _t->onTitleFont(); break;
        case 14: _t->onXMajGridShow((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->onXMajGridStyle(); break;
        case 16: _t->onXMinGridShow((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: _t->onXMinGridStyle(); break;
        case 18: _t->onYMajGridShow((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 19: _t->onYMajGridStyle(); break;
        case 20: _t->onYMinGridShow((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 21: _t->onYMinGridStyle(); break;
        case 22: _t->onSpinAnimation((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LineStyle >(); break;
            }
            break;
        }
    }
}

const QMetaObject *GraphOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12GraphOptionsE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GraphOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}
QT_WARNING_POP
