/****************************************************************************
** Meta object code from reading C++ file 'graphdlg.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/graphs/controls/graphdlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphdlg.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8GraphDlgE_t {};
} // unnamed namespace

template <> constexpr inline auto GraphDlg::qt_create_metaobjectdata<qt_meta_tag_ZN8GraphDlgE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "GraphDlg",
        "onActivePage",
        "",
        "index",
        "onApply",
        "onAutoX",
        "onAutoY",
        "onBorderStyle",
        "LineStyle",
        "ls",
        "onButton",
        "QAbstractButton*",
        "pButton",
        "onGraphBackColor",
        "onGraphBorder",
        "state",
        "onLabelColor",
        "onLabelFont",
        "onLegendColor",
        "onLegendFont",
        "onMargin",
        "onOK",
        "onRestoreParams",
        "onRightAxis",
        "bChecked",
        "onShowLegend",
        "bShow",
        "onTitleColor",
        "onTitleFont",
        "onVariableChanged",
        "onXAxisStyle",
        "onXMajGridShow",
        "onXMajGridStyle",
        "onXMinGridShow",
        "onXMinGridStyle",
        "onYAxisStyle",
        "onYInverted",
        "onYMajGridShow",
        "onYMajGridStyle",
        "onYMinGridShow",
        "onYMinGridStyle",
        "onCurveTableClicked",
        "QModelIndex"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onActivePage'
        QtMocHelpers::SlotData<void(int)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Slot 'onApply'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onAutoX'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onAutoY'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onBorderStyle'
        QtMocHelpers::SlotData<void(LineStyle)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'onButton'
        QtMocHelpers::SlotData<void(QAbstractButton *)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Slot 'onGraphBackColor'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onGraphBorder'
        QtMocHelpers::SlotData<void(int)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 15 },
        }}),
        // Slot 'onLabelColor'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onLabelFont'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onLegendColor'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onLegendFont'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onMargin'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onOK'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onRestoreParams'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onRightAxis'
        QtMocHelpers::SlotData<void(bool)>(23, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 24 },
        }}),
        // Slot 'onShowLegend'
        QtMocHelpers::SlotData<void(bool)>(25, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 26 },
        }}),
        // Slot 'onTitleColor'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onTitleFont'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onVariableChanged'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onXAxisStyle'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onXMajGridShow'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onXMajGridStyle'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onXMinGridShow'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onXMinGridStyle'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onYAxisStyle'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onYInverted'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onYMajGridShow'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onYMajGridStyle'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onYMinGridShow'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onYMinGridStyle'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onCurveTableClicked'
        QtMocHelpers::SlotData<void(QModelIndex)>(41, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 42, 3 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GraphDlg, qt_meta_tag_ZN8GraphDlgE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject GraphDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8GraphDlgE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8GraphDlgE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8GraphDlgE_t>.metaTypes,
    nullptr
} };

void GraphDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GraphDlg *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onActivePage((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->onApply(); break;
        case 2: _t->onAutoX(); break;
        case 3: _t->onAutoY(); break;
        case 4: _t->onBorderStyle((*reinterpret_cast< std::add_pointer_t<LineStyle>>(_a[1]))); break;
        case 5: _t->onButton((*reinterpret_cast< std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        case 6: _t->onGraphBackColor(); break;
        case 7: _t->onGraphBorder((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->onLabelColor(); break;
        case 9: _t->onLabelFont(); break;
        case 10: _t->onLegendColor(); break;
        case 11: _t->onLegendFont(); break;
        case 12: _t->onMargin(); break;
        case 13: _t->onOK(); break;
        case 14: _t->onRestoreParams(); break;
        case 15: _t->onRightAxis((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->onShowLegend((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: _t->onTitleColor(); break;
        case 18: _t->onTitleFont(); break;
        case 19: _t->onVariableChanged(); break;
        case 20: _t->onXAxisStyle(); break;
        case 21: _t->onXMajGridShow(); break;
        case 22: _t->onXMajGridStyle(); break;
        case 23: _t->onXMinGridShow(); break;
        case 24: _t->onXMinGridStyle(); break;
        case 25: _t->onYAxisStyle(); break;
        case 26: _t->onYInverted(); break;
        case 27: _t->onYMajGridShow(); break;
        case 28: _t->onYMajGridStyle(); break;
        case 29: _t->onYMinGridShow(); break;
        case 30: _t->onYMinGridStyle(); break;
        case 31: _t->onCurveTableClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LineStyle >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractButton* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *GraphDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8GraphDlgE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int GraphDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    return _id;
}
QT_WARNING_POP
