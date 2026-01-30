/****************************************************************************
** Meta object code from reading C++ file 'gl3dflowvtx.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/opengl/testgl/gl3dflowvtx.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gl3dflowvtx.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11gl3dFlowVtxE_t {};
} // unnamed namespace

template <> constexpr inline auto gl3dFlowVtx::qt_create_metaobjectdata<qt_meta_tag_ZN11gl3dFlowVtxE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "gl3dFlowVtx",
        "onPause",
        "",
        "onRestart",
        "moveThem"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onPause'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onRestart'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'moveThem'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<gl3dFlowVtx, qt_meta_tag_ZN11gl3dFlowVtxE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject gl3dFlowVtx::staticMetaObject = { {
    QMetaObject::SuperData::link<gl3dTestGLView::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11gl3dFlowVtxE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11gl3dFlowVtxE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11gl3dFlowVtxE_t>.metaTypes,
    nullptr
} };

void gl3dFlowVtx::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<gl3dFlowVtx *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onPause(); break;
        case 1: _t->onRestart(); break;
        case 2: _t->moveThem(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *gl3dFlowVtx::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gl3dFlowVtx::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11gl3dFlowVtxE_t>.strings))
        return static_cast<void*>(this);
    return gl3dTestGLView::qt_metacast(_clname);
}

int gl3dFlowVtx::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = gl3dTestGLView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
