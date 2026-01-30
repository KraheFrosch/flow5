/****************************************************************************
** Meta object code from reading C++ file 'splinectrl.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/controls/splinectrl/splinectrl.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'splinectrl.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10SplineCtrlE_t {};
} // unnamed namespace

template <> constexpr inline auto SplineCtrl::qt_create_metaobjectdata<qt_meta_tag_ZN10SplineCtrlE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SplineCtrl",
        "splineChanged",
        "",
        "pointSelChanged",
        "fillPointModel",
        "onBunchSlide",
        "onClosedTE",
        "onCtrlPointTableClicked",
        "QModelIndex",
        "index",
        "onCurrentRowChanged",
        "onDelete",
        "onForcesymmetric",
        "onInsertAfter",
        "onInsertBefore",
        "onSplineStyle",
        "LineStyle",
        "onUpdate"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'splineChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pointSelChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'fillPointModel'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onBunchSlide'
        QtMocHelpers::SlotData<void(int)>(5, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'onClosedTE'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onCtrlPointTableClicked'
        QtMocHelpers::SlotData<void(QModelIndex)>(7, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'onCurrentRowChanged'
        QtMocHelpers::SlotData<void(QModelIndex, QModelIndex)>(10, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 8, 2 }, { 0x80000000 | 8, 2 },
        }}),
        // Slot 'onDelete'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onForcesymmetric'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onInsertAfter'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onInsertBefore'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onSplineStyle'
        QtMocHelpers::SlotData<void(LineStyle)>(15, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 16, 2 },
        }}),
        // Slot 'onUpdate'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SplineCtrl, qt_meta_tag_ZN10SplineCtrlE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SplineCtrl::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10SplineCtrlE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10SplineCtrlE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10SplineCtrlE_t>.metaTypes,
    nullptr
} };

void SplineCtrl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SplineCtrl *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->splineChanged(); break;
        case 1: _t->pointSelChanged(); break;
        case 2: _t->fillPointModel(); break;
        case 3: _t->onBunchSlide((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->onClosedTE(); break;
        case 5: _t->onCtrlPointTableClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 6: _t->onCurrentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 7: _t->onDelete(); break;
        case 8: _t->onForcesymmetric(); break;
        case 9: _t->onInsertAfter(); break;
        case 10: _t->onInsertBefore(); break;
        case 11: _t->onSplineStyle((*reinterpret_cast< std::add_pointer_t<LineStyle>>(_a[1]))); break;
        case 12: _t->onUpdate(); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LineStyle >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SplineCtrl::*)()>(_a, &SplineCtrl::splineChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SplineCtrl::*)()>(_a, &SplineCtrl::pointSelChanged, 1))
            return;
    }
}

const QMetaObject *SplineCtrl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SplineCtrl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10SplineCtrlE_t>.strings))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int SplineCtrl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void SplineCtrl::splineChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SplineCtrl::pointSelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
