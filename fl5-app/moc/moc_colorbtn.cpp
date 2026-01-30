/****************************************************************************
** Meta object code from reading C++ file 'colorbtn.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/widgets/color/colorbtn.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'colorbtn.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8ColorBtnE_t {};
} // unnamed namespace

template <> constexpr inline auto ColorBtn::qt_create_metaobjectdata<qt_meta_tag_ZN8ColorBtnE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ColorBtn",
        "clickedCB",
        "",
        "onSetColor",
        "clr"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'clickedCB'
        QtMocHelpers::SignalData<void(QColor)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QColor, 2 },
        }}),
        // Slot 'onSetColor'
        QtMocHelpers::SlotData<void(QColor)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QColor, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ColorBtn, qt_meta_tag_ZN8ColorBtnE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ColorBtn::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractButton::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8ColorBtnE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8ColorBtnE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8ColorBtnE_t>.metaTypes,
    nullptr
} };

void ColorBtn::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ColorBtn *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->clickedCB((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 1: _t->onSetColor((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ColorBtn::*)(QColor )>(_a, &ColorBtn::clickedCB, 0))
            return;
    }
}

const QMetaObject *ColorBtn::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorBtn::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8ColorBtnE_t>.strings))
        return static_cast<void*>(this);
    return QAbstractButton::qt_metacast(_clname);
}

int ColorBtn::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ColorBtn::clickedCB(QColor _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
