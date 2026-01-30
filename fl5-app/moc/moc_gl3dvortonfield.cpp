/****************************************************************************
** Meta object code from reading C++ file 'gl3dvortonfield.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../test/test3d/gl3dvortonfield.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gl3dvortonfield.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15gl3dVortonFieldE_t {};
} // unnamed namespace

template <> constexpr inline auto gl3dVortonField::qt_create_metaobjectdata<qt_meta_tag_ZN15gl3dVortonFieldE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "gl3dVortonField",
        "onRefLength",
        "",
        "onVelScale",
        "onMakeColorMap",
        "onContourPlane",
        "bChecked"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onRefLength'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onVelScale'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onMakeColorMap'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onContourPlane'
        QtMocHelpers::SlotData<void(bool)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<gl3dVortonField, qt_meta_tag_ZN15gl3dVortonFieldE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject gl3dVortonField::staticMetaObject = { {
    QMetaObject::SuperData::link<gl3dXflView::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15gl3dVortonFieldE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15gl3dVortonFieldE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15gl3dVortonFieldE_t>.metaTypes,
    nullptr
} };

void gl3dVortonField::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<gl3dVortonField *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onRefLength(); break;
        case 1: _t->onVelScale(); break;
        case 2: _t->onMakeColorMap(); break;
        case 3: _t->onContourPlane((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *gl3dVortonField::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gl3dVortonField::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15gl3dVortonFieldE_t>.strings))
        return static_cast<void*>(this);
    return gl3dXflView::qt_metacast(_clname);
}

int gl3dVortonField::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
