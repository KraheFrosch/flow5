/****************************************************************************
** Meta object code from reading C++ file 'oppointwt.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../modules/xdirect/view2d/oppointwt.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'oppointwt.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9OpPointWtE_t {};
} // unnamed namespace

template <> constexpr inline auto OpPointWt::qt_create_metaobjectdata<qt_meta_tag_ZN9OpPointWtE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OpPointWt",
        "graphChanged",
        "",
        "Graph*",
        "curveClicked",
        "Curve*",
        "curveDoubleClicked",
        "onShowNeutralLine",
        "onResetFoilScale",
        "onGraphSettings",
        "onHovered",
        "onDynamicIncrement",
        "onResetIncrement"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'graphChanged'
        QtMocHelpers::SignalData<void(Graph *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Signal 'curveClicked'
        QtMocHelpers::SignalData<void(Curve *)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 2 },
        }}),
        // Signal 'curveDoubleClicked'
        QtMocHelpers::SignalData<void(Curve *)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 2 },
        }}),
        // Slot 'onShowNeutralLine'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onResetFoilScale'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onGraphSettings'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onHovered'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onDynamicIncrement'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onResetIncrement'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OpPointWt, qt_meta_tag_ZN9OpPointWtE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OpPointWt::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9OpPointWtE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9OpPointWtE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9OpPointWtE_t>.metaTypes,
    nullptr
} };

void OpPointWt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OpPointWt *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->graphChanged((*reinterpret_cast< std::add_pointer_t<Graph*>>(_a[1]))); break;
        case 1: _t->curveClicked((*reinterpret_cast< std::add_pointer_t<Curve*>>(_a[1]))); break;
        case 2: _t->curveDoubleClicked((*reinterpret_cast< std::add_pointer_t<Curve*>>(_a[1]))); break;
        case 3: _t->onShowNeutralLine(); break;
        case 4: _t->onResetFoilScale(); break;
        case 5: _t->onGraphSettings(); break;
        case 6: _t->onHovered(); break;
        case 7: _t->onDynamicIncrement(); break;
        case 8: _t->onResetIncrement(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (OpPointWt::*)(Graph * )>(_a, &OpPointWt::graphChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (OpPointWt::*)(Curve * )>(_a, &OpPointWt::curveClicked, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (OpPointWt::*)(Curve * )>(_a, &OpPointWt::curveDoubleClicked, 2))
            return;
    }
}

const QMetaObject *OpPointWt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpPointWt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9OpPointWtE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int OpPointWt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void OpPointWt::graphChanged(Graph * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void OpPointWt::curveClicked(Curve * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void OpPointWt::curveDoubleClicked(Curve * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}
QT_WARNING_POP
