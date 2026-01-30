/****************************************************************************
** Meta object code from reading C++ file 'stabtimectrls.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../modules/xplane/controls/stabtimectrls.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stabtimectrls.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13StabTimeCtrlsE_t {};
} // unnamed namespace

template <> constexpr inline auto StabTimeCtrls::qt_create_metaobjectdata<qt_meta_tag_ZN13StabTimeCtrlsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "StabTimeCtrls",
        "onDataChanged",
        "",
        "QModelIndex",
        "onCurveTableClicked",
        "index",
        "onModeSelection",
        "onPlotStabilityGraph",
        "onReadData",
        "onResponseType",
        "onAddCurve",
        "onDeleteCurve",
        "onRenameCurve",
        "onSelChangeCurve",
        "sel",
        "onStabilityDirection",
        "onResizeColumns"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onDataChanged'
        QtMocHelpers::SlotData<void(QModelIndex, QModelIndex)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { 0x80000000 | 3, 2 },
        }}),
        // Slot 'onCurveTableClicked'
        QtMocHelpers::SlotData<void(QModelIndex)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 5 },
        }}),
        // Slot 'onModeSelection'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onPlotStabilityGraph'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onReadData'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onResponseType'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onAddCurve'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onDeleteCurve'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onRenameCurve'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onSelChangeCurve'
        QtMocHelpers::SlotData<void(int)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 14 },
        }}),
        // Slot 'onStabilityDirection'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onResizeColumns'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<StabTimeCtrls, qt_meta_tag_ZN13StabTimeCtrlsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject StabTimeCtrls::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13StabTimeCtrlsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13StabTimeCtrlsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13StabTimeCtrlsE_t>.metaTypes,
    nullptr
} };

void StabTimeCtrls::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<StabTimeCtrls *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onDataChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 1: _t->onCurveTableClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 2: _t->onModeSelection(); break;
        case 3: _t->onPlotStabilityGraph(); break;
        case 4: _t->onReadData(); break;
        case 5: _t->onResponseType(); break;
        case 6: _t->onAddCurve(); break;
        case 7: _t->onDeleteCurve(); break;
        case 8: _t->onRenameCurve(); break;
        case 9: _t->onSelChangeCurve((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->onStabilityDirection(); break;
        case 11: _t->onResizeColumns(); break;
        default: ;
        }
    }
}

const QMetaObject *StabTimeCtrls::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StabTimeCtrls::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13StabTimeCtrlsE_t>.strings))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int StabTimeCtrls::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
