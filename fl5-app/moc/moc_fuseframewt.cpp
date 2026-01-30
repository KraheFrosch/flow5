/****************************************************************************
** Meta object code from reading C++ file 'fuseframewt.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/editors/fuseedit/xflfuseedit/fuseframewt.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fuseframewt.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11FuseFrameWtE_t {};
} // unnamed namespace

template <> constexpr inline auto FuseFrameWt::qt_create_metaobjectdata<qt_meta_tag_ZN11FuseFrameWtE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FuseFrameWt",
        "scaleBody",
        "",
        "bFrameOnly",
        "insertPoint",
        "Vector3d",
        "removePoint",
        "frameSelected",
        "onInsertPt",
        "onRemovePt",
        "onScaleFrame",
        "onShowCurFrameOnly"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'scaleBody'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Signal 'insertPoint'
        QtMocHelpers::SignalData<void(Vector3d)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 2 },
        }}),
        // Signal 'removePoint'
        QtMocHelpers::SignalData<void(int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'frameSelected'
        QtMocHelpers::SignalData<void(int)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'onInsertPt'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onRemovePt'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onScaleFrame'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onShowCurFrameOnly'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FuseFrameWt, qt_meta_tag_ZN11FuseFrameWtE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject FuseFrameWt::staticMetaObject = { {
    QMetaObject::SuperData::link<Section2dWt::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11FuseFrameWtE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11FuseFrameWtE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11FuseFrameWtE_t>.metaTypes,
    nullptr
} };

void FuseFrameWt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FuseFrameWt *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->scaleBody((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->insertPoint((*reinterpret_cast< std::add_pointer_t<Vector3d>>(_a[1]))); break;
        case 2: _t->removePoint((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->frameSelected((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->onInsertPt(); break;
        case 5: _t->onRemovePt(); break;
        case 6: _t->onScaleFrame(); break;
        case 7: _t->onShowCurFrameOnly(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (FuseFrameWt::*)(bool )>(_a, &FuseFrameWt::scaleBody, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (FuseFrameWt::*)(Vector3d )>(_a, &FuseFrameWt::insertPoint, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (FuseFrameWt::*)(int )>(_a, &FuseFrameWt::removePoint, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (FuseFrameWt::*)(int )>(_a, &FuseFrameWt::frameSelected, 3))
            return;
    }
}

const QMetaObject *FuseFrameWt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FuseFrameWt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11FuseFrameWtE_t>.strings))
        return static_cast<void*>(this);
    return Section2dWt::qt_metacast(_clname);
}

int FuseFrameWt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Section2dWt::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void FuseFrameWt::scaleBody(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void FuseFrameWt::insertPoint(Vector3d _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void FuseFrameWt::removePoint(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void FuseFrameWt::frameSelected(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}
QT_WARNING_POP
