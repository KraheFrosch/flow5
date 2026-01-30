/****************************************************************************
** Meta object code from reading C++ file 'gl3dsolarsys.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/opengl/testgl/gl3dsolarsys.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gl3dsolarsys.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12gl3dSolarSysE_t {};
} // unnamed namespace

template <> constexpr inline auto gl3dSolarSys::qt_create_metaobjectdata<qt_meta_tag_ZN12gl3dSolarSysE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "gl3dSolarSys",
        "onMovePlanets",
        "",
        "onRestart",
        "onPlanetSize",
        "size",
        "onCeres",
        "bShow",
        "onHalley"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onMovePlanets'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onRestart'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onPlanetSize'
        QtMocHelpers::SlotData<void(int)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Slot 'onCeres'
        QtMocHelpers::SlotData<void(bool)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Slot 'onHalley'
        QtMocHelpers::SlotData<void(bool)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<gl3dSolarSys, qt_meta_tag_ZN12gl3dSolarSysE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject gl3dSolarSys::staticMetaObject = { {
    QMetaObject::SuperData::link<gl3dTestGLView::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12gl3dSolarSysE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12gl3dSolarSysE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12gl3dSolarSysE_t>.metaTypes,
    nullptr
} };

void gl3dSolarSys::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<gl3dSolarSys *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onMovePlanets(); break;
        case 1: _t->onRestart(); break;
        case 2: _t->onPlanetSize((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->onCeres((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->onHalley((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *gl3dSolarSys::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gl3dSolarSys::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12gl3dSolarSysE_t>.strings))
        return static_cast<void*>(this);
    return gl3dTestGLView::qt_metacast(_clname);
}

int gl3dSolarSys::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = gl3dTestGLView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
