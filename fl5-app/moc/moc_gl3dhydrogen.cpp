/****************************************************************************
** Meta object code from reading C++ file 'gl3dhydrogen.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/opengl/testgl/gl3dhydrogen.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gl3dhydrogen.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12gl3dHydrogenE_t {};
} // unnamed namespace

template <> constexpr inline auto gl3dHydrogen::qt_create_metaobjectdata<qt_meta_tag_ZN12gl3dHydrogenE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "gl3dHydrogen",
        "onHarmonic",
        "",
        "onCollapse",
        "onObjectRadius",
        "size",
        "onRenderer"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onHarmonic'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onCollapse'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onObjectRadius'
        QtMocHelpers::SlotData<void(int)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Slot 'onRenderer'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<gl3dHydrogen, qt_meta_tag_ZN12gl3dHydrogenE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject gl3dHydrogen::staticMetaObject = { {
    QMetaObject::SuperData::link<gl3dTestGLView::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12gl3dHydrogenE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12gl3dHydrogenE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12gl3dHydrogenE_t>.metaTypes,
    nullptr
} };

void gl3dHydrogen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<gl3dHydrogen *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onHarmonic(); break;
        case 1: _t->onCollapse(); break;
        case 2: _t->onObjectRadius((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->onRenderer(); break;
        default: ;
        }
    }
}

const QMetaObject *gl3dHydrogen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gl3dHydrogen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12gl3dHydrogenE_t>.strings))
        return static_cast<void*>(this);
    return gl3dTestGLView::qt_metacast(_clname);
}

int gl3dHydrogen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = gl3dTestGLView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
