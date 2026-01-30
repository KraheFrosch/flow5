/****************************************************************************
** Meta object code from reading C++ file 'splinedgraphwt.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/graphs/containers/splinedgraphwt.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'splinedgraphwt.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14SplinedGraphWtE_t {};
} // unnamed namespace

template <> constexpr inline auto SplinedGraphWt::qt_create_metaobjectdata<qt_meta_tag_ZN14SplinedGraphWtE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SplinedGraphWt",
        "splineModified",
        "",
        "onResetGraphScales"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'splineModified'
        QtMocHelpers::SignalData<void(int, int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'onResetGraphScales'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SplinedGraphWt, qt_meta_tag_ZN14SplinedGraphWtE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SplinedGraphWt::staticMetaObject = { {
    QMetaObject::SuperData::link<GraphWt::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14SplinedGraphWtE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14SplinedGraphWtE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14SplinedGraphWtE_t>.metaTypes,
    nullptr
} };

void SplinedGraphWt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SplinedGraphWt *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->splineModified((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->onResetGraphScales(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SplinedGraphWt::*)(int , int )>(_a, &SplinedGraphWt::splineModified, 0))
            return;
    }
}

const QMetaObject *SplinedGraphWt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SplinedGraphWt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14SplinedGraphWtE_t>.strings))
        return static_cast<void*>(this);
    return GraphWt::qt_metacast(_clname);
}

int SplinedGraphWt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GraphWt::qt_metacall(_c, _id, _a);
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
void SplinedGraphWt::splineModified(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}
QT_WARNING_POP
