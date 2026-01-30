/****************************************************************************
** Meta object code from reading C++ file 'poppgraphctrls.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../modules/xplane/graphs/poppgraphctrls.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'poppgraphctrls.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14POppGraphCtrlsE_t {};
} // unnamed namespace

template <> constexpr inline auto POppGraphCtrls::qt_create_metaobjectdata<qt_meta_tag_ZN14POppGraphCtrlsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "POppGraphCtrls",
        "onAnimateWOpp",
        "",
        "bAnimate",
        "onAnimateWOppSingle",
        "onAnimateWOppSpeed",
        "val"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onAnimateWOpp'
        QtMocHelpers::SlotData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Slot 'onAnimateWOppSingle'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onAnimateWOppSpeed'
        QtMocHelpers::SlotData<void(int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<POppGraphCtrls, qt_meta_tag_ZN14POppGraphCtrlsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject POppGraphCtrls::staticMetaObject = { {
    QMetaObject::SuperData::link<GraphTileCtrls::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14POppGraphCtrlsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14POppGraphCtrlsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14POppGraphCtrlsE_t>.metaTypes,
    nullptr
} };

void POppGraphCtrls::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<POppGraphCtrls *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onAnimateWOpp((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->onAnimateWOppSingle(); break;
        case 2: _t->onAnimateWOppSpeed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *POppGraphCtrls::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *POppGraphCtrls::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14POppGraphCtrlsE_t>.strings))
        return static_cast<void*>(this);
    return GraphTileCtrls::qt_metacast(_clname);
}

int POppGraphCtrls::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GraphTileCtrls::qt_metacall(_c, _id, _a);
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
