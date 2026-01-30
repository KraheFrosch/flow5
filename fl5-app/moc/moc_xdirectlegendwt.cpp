/****************************************************************************
** Meta object code from reading C++ file 'xdirectlegendwt.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../modules/xdirect/graphs/xdirectlegendwt.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xdirectlegendwt.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15XDirectLegendWtE_t {};
} // unnamed namespace

template <> constexpr inline auto XDirectLegendWt::qt_create_metaobjectdata<qt_meta_tag_ZN15XDirectLegendWtE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "XDirectLegendWt",
        "onClickedPolarBtn",
        "",
        "onClickedPolarBtnLine",
        "LineStyle",
        "ls",
        "onClickedOppBtn",
        "onClickedOppBtnLine"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onClickedPolarBtn'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onClickedPolarBtnLine'
        QtMocHelpers::SlotData<void(LineStyle)>(3, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 4, 5 },
        }}),
        // Slot 'onClickedOppBtn'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onClickedOppBtnLine'
        QtMocHelpers::SlotData<void(LineStyle)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 4, 5 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XDirectLegendWt, qt_meta_tag_ZN15XDirectLegendWtE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject XDirectLegendWt::staticMetaObject = { {
    QMetaObject::SuperData::link<LegendWt::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15XDirectLegendWtE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15XDirectLegendWtE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15XDirectLegendWtE_t>.metaTypes,
    nullptr
} };

void XDirectLegendWt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XDirectLegendWt *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onClickedPolarBtn(); break;
        case 1: _t->onClickedPolarBtnLine((*reinterpret_cast< std::add_pointer_t<LineStyle>>(_a[1]))); break;
        case 2: _t->onClickedOppBtn(); break;
        case 3: _t->onClickedOppBtnLine((*reinterpret_cast< std::add_pointer_t<LineStyle>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LineStyle >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LineStyle >(); break;
            }
            break;
        }
    }
}

const QMetaObject *XDirectLegendWt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XDirectLegendWt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15XDirectLegendWtE_t>.strings))
        return static_cast<void*>(this);
    return LegendWt::qt_metacast(_clname);
}

int XDirectLegendWt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LegendWt::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
