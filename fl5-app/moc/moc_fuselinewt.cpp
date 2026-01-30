/****************************************************************************
** Meta object code from reading C++ file 'fuselinewt.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/editors/fuseedit/xflfuseedit/fuselinewt.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fuselinewt.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10FuseLineWtE_t {};
} // unnamed namespace

template <> constexpr inline auto FuseLineWt::qt_create_metaobjectdata<qt_meta_tag_ZN10FuseLineWtE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FuseLineWt",
        "scaleFuse",
        "",
        "bFrameOnly",
        "translateFuse",
        "insertFrame",
        "Vector3d",
        "removeFrame",
        "onInsertPt",
        "onRemovePt",
        "onScaleBody",
        "onTranslateBody"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'scaleFuse'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Signal 'translateFuse'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'insertFrame'
        QtMocHelpers::SignalData<void(Vector3d)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 2 },
        }}),
        // Signal 'removeFrame'
        QtMocHelpers::SignalData<void(int)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'onInsertPt'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onRemovePt'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onScaleBody'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onTranslateBody'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FuseLineWt, qt_meta_tag_ZN10FuseLineWtE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject FuseLineWt::staticMetaObject = { {
    QMetaObject::SuperData::link<Section2dWt::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10FuseLineWtE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10FuseLineWtE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10FuseLineWtE_t>.metaTypes,
    nullptr
} };

void FuseLineWt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FuseLineWt *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->scaleFuse((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->translateFuse(); break;
        case 2: _t->insertFrame((*reinterpret_cast< std::add_pointer_t<Vector3d>>(_a[1]))); break;
        case 3: _t->removeFrame((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->onInsertPt(); break;
        case 5: _t->onRemovePt(); break;
        case 6: _t->onScaleBody(); break;
        case 7: _t->onTranslateBody(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (FuseLineWt::*)(bool )>(_a, &FuseLineWt::scaleFuse, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (FuseLineWt::*)()>(_a, &FuseLineWt::translateFuse, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (FuseLineWt::*)(Vector3d )>(_a, &FuseLineWt::insertFrame, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (FuseLineWt::*)(int )>(_a, &FuseLineWt::removeFrame, 3))
            return;
    }
}

const QMetaObject *FuseLineWt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FuseLineWt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10FuseLineWtE_t>.strings))
        return static_cast<void*>(this);
    return Section2dWt::qt_metacast(_clname);
}

int FuseLineWt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void FuseLineWt::scaleFuse(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void FuseLineWt::translateFuse()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FuseLineWt::insertFrame(Vector3d _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void FuseLineWt::removeFrame(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}
QT_WARNING_POP
