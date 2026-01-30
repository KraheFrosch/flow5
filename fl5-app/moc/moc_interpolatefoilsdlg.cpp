/****************************************************************************
** Meta object code from reading C++ file 'interpolatefoilsdlg.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/editors/foiledit/interpolatefoilsdlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'interpolatefoilsdlg.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN19InterpolateFoilsDlgE_t {};
} // unnamed namespace

template <> constexpr inline auto InterpolateFoilsDlg::qt_create_metaobjectdata<qt_meta_tag_ZN19InterpolateFoilsDlgE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "InterpolateFoilsDlg",
        "onSelChangeFoil1",
        "",
        "onSelChangeFoil2",
        "onFrac",
        "onSlider",
        "val",
        "onApply"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onSelChangeFoil1'
        QtMocHelpers::SlotData<void(int)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'onSelChangeFoil2'
        QtMocHelpers::SlotData<void(int)>(3, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'onFrac'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onSlider'
        QtMocHelpers::SlotData<void(int)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Slot 'onApply'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<InterpolateFoilsDlg, qt_meta_tag_ZN19InterpolateFoilsDlgE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject InterpolateFoilsDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<FoilDlg::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19InterpolateFoilsDlgE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19InterpolateFoilsDlgE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19InterpolateFoilsDlgE_t>.metaTypes,
    nullptr
} };

void InterpolateFoilsDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<InterpolateFoilsDlg *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onSelChangeFoil1((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->onSelChangeFoil2((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->onFrac(); break;
        case 3: _t->onSlider((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->onApply(); break;
        default: ;
        }
    }
}

const QMetaObject *InterpolateFoilsDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InterpolateFoilsDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19InterpolateFoilsDlgE_t>.strings))
        return static_cast<void*>(this);
    return FoilDlg::qt_metacast(_clname);
}

int InterpolateFoilsDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FoilDlg::qt_metacall(_c, _id, _a);
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
