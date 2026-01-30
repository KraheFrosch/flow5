/****************************************************************************
** Meta object code from reading C++ file 'gl3doptim2d.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../test/test3d/gl3doptim2d.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gl3doptim2d.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11gl3dOptim2dE_t {};
} // unnamed namespace

template <> constexpr inline auto gl3dOptim2d::qt_create_metaobjectdata<qt_meta_tag_ZN11gl3dOptim2dE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "gl3dOptim2d",
        "onAlgorithm",
        "",
        "onMakeSurface",
        "onTarget",
        "onIteration",
        "onMakeSwarm",
        "onResetPSODefaults",
        "onSwarm",
        "onMakeGAPopulation",
        "onResetGADefaults",
        "onStartGA",
        "onMakeSimplex",
        "onStartSimplex"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onAlgorithm'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onMakeSurface'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onTarget'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onIteration'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onMakeSwarm'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onResetPSODefaults'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onSwarm'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onMakeGAPopulation'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onResetGADefaults'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onStartGA'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onMakeSimplex'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onStartSimplex'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<gl3dOptim2d, qt_meta_tag_ZN11gl3dOptim2dE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject gl3dOptim2d::staticMetaObject = { {
    QMetaObject::SuperData::link<gl3dSurface::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11gl3dOptim2dE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11gl3dOptim2dE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11gl3dOptim2dE_t>.metaTypes,
    nullptr
} };

void gl3dOptim2d::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<gl3dOptim2d *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onAlgorithm(); break;
        case 1: _t->onMakeSurface(); break;
        case 2: _t->onTarget(); break;
        case 3: _t->onIteration(); break;
        case 4: _t->onMakeSwarm(); break;
        case 5: _t->onResetPSODefaults(); break;
        case 6: _t->onSwarm(); break;
        case 7: _t->onMakeGAPopulation(); break;
        case 8: _t->onResetGADefaults(); break;
        case 9: _t->onStartGA(); break;
        case 10: _t->onMakeSimplex(); break;
        case 11: _t->onStartSimplex(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *gl3dOptim2d::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gl3dOptim2d::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11gl3dOptim2dE_t>.strings))
        return static_cast<void*>(this);
    return gl3dSurface::qt_metacast(_clname);
}

int gl3dOptim2d::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = gl3dSurface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
