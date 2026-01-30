/****************************************************************************
** Meta object code from reading C++ file 'gl3dxplaneview.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../modules/xplane/glview/gl3dxplaneview.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gl3dxplaneview.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14gl3dXPlaneViewE_t {};
} // unnamed namespace

template <> constexpr inline auto gl3dXPlaneView::qt_create_metaobjectdata<qt_meta_tag_ZN14gl3dXPlaneViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "gl3dXPlaneView",
        "onCancelThreads",
        "",
        "onPartSelClicked",
        "onUpdate3dScales",
        "onUpdate3dStreamlines"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onCancelThreads'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onPartSelClicked'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onUpdate3dScales'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onUpdate3dStreamlines'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<gl3dXPlaneView, qt_meta_tag_ZN14gl3dXPlaneViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject gl3dXPlaneView::staticMetaObject = { {
    QMetaObject::SuperData::link<gl3dXflView::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14gl3dXPlaneViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14gl3dXPlaneViewE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14gl3dXPlaneViewE_t>.metaTypes,
    nullptr
} };

void gl3dXPlaneView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<gl3dXPlaneView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onCancelThreads(); break;
        case 1: _t->onPartSelClicked(); break;
        case 2: _t->onUpdate3dScales(); break;
        case 3: _t->onUpdate3dStreamlines(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *gl3dXPlaneView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gl3dXPlaneView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14gl3dXPlaneViewE_t>.strings))
        return static_cast<void*>(this);
    return gl3dXflView::qt_metacast(_clname);
}

int gl3dXPlaneView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = gl3dXflView::qt_metacall(_c, _id, _a);
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
