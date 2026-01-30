/****************************************************************************
** Meta object code from reading C++ file 'optimplanedlg.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/optim/optimplanedlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'optimplanedlg.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13OptimPlaneDlgE_t {};
} // unnamed namespace

template <> constexpr inline auto OptimPlaneDlg::qt_create_metaobjectdata<qt_meta_tag_ZN13OptimPlaneDlgE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OptimPlaneDlg",
        "onStoreBest",
        "PlaneXfl*",
        "",
        "onMakeSwarm",
        "invalidatePareto",
        "invalidateSwarm",
        "on2dDemo",
        "onActionResultClicked",
        "QModelIndex",
        "index",
        "onAnalysisDef",
        "onButton",
        "QAbstractButton*",
        "pButton",
        "onClose",
        "onContinueBest",
        "onIterEvent",
        "OptimEvent*",
        "pEvent",
        "onObjTableClicked",
        "onObjectiveChanged",
        "onOutputMessage",
        "msg",
        "onPlaneSelected",
        "QListWidgetItem*",
        "pItem",
        "onResetOptVariables",
        "onResetParetoFrontier",
        "onResizeColumns",
        "onRestorePSODefaults",
        "onRunAnalysis",
        "onSortColumn",
        "col",
        "Qt::SortOrder",
        "order",
        "onSwarm",
        "onVariableChanged",
        "reject"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onStoreBest'
        QtMocHelpers::SlotData<PlaneXfl *()>(1, 3, QMC::AccessProtected, 0x80000000 | 2),
        // Slot 'onMakeSwarm'
        QtMocHelpers::SlotData<bool()>(4, 3, QMC::AccessProtected, QMetaType::Bool),
        // Slot 'invalidatePareto'
        QtMocHelpers::SlotData<void()>(5, 3, QMC::AccessProtected, QMetaType::Void),
        // Slot 'invalidateSwarm'
        QtMocHelpers::SlotData<void()>(6, 3, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on2dDemo'
        QtMocHelpers::SlotData<void()>(7, 3, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onActionResultClicked'
        QtMocHelpers::SlotData<void(QModelIndex)>(8, 3, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Slot 'onAnalysisDef'
        QtMocHelpers::SlotData<void()>(11, 3, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onButton'
        QtMocHelpers::SlotData<void(QAbstractButton *)>(12, 3, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Slot 'onClose'
        QtMocHelpers::SlotData<void()>(15, 3, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onContinueBest'
        QtMocHelpers::SlotData<void()>(16, 3, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onIterEvent'
        QtMocHelpers::SlotData<void(OptimEvent *)>(17, 3, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 18, 19 },
        }}),
        // Slot 'onObjTableClicked'
        QtMocHelpers::SlotData<void(QModelIndex)>(20, 3, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Slot 'onObjectiveChanged'
        QtMocHelpers::SlotData<void()>(21, 3, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onOutputMessage'
        QtMocHelpers::SlotData<void(QString const &)>(22, 3, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QString, 23 },
        }}),
        // Slot 'onPlaneSelected'
        QtMocHelpers::SlotData<void(QListWidgetItem *)>(24, 3, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 25, 26 },
        }}),
        // Slot 'onResetOptVariables'
        QtMocHelpers::SlotData<void()>(27, 3, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onResetParetoFrontier'
        QtMocHelpers::SlotData<void()>(28, 3, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onResizeColumns'
        QtMocHelpers::SlotData<void()>(29, 3, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onRestorePSODefaults'
        QtMocHelpers::SlotData<void()>(30, 3, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onRunAnalysis'
        QtMocHelpers::SlotData<void()>(31, 3, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onSortColumn'
        QtMocHelpers::SlotData<void(int, Qt::SortOrder)>(32, 3, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 33 }, { 0x80000000 | 34, 35 },
        }}),
        // Slot 'onSwarm'
        QtMocHelpers::SlotData<void()>(36, 3, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onVariableChanged'
        QtMocHelpers::SlotData<void(QModelIndex, QModelIndex)>(37, 3, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 9, 3 }, { 0x80000000 | 9, 3 },
        }}),
        // Slot 'reject'
        QtMocHelpers::SlotData<void()>(38, 3, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OptimPlaneDlg, qt_meta_tag_ZN13OptimPlaneDlgE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OptimPlaneDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13OptimPlaneDlgE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13OptimPlaneDlgE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13OptimPlaneDlgE_t>.metaTypes,
    nullptr
} };

void OptimPlaneDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OptimPlaneDlg *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { PlaneXfl* _r = _t->onStoreBest();
            if (_a[0]) *reinterpret_cast< PlaneXfl**>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->onMakeSwarm();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->invalidatePareto(); break;
        case 3: _t->invalidateSwarm(); break;
        case 4: _t->on2dDemo(); break;
        case 5: _t->onActionResultClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 6: _t->onAnalysisDef(); break;
        case 7: _t->onButton((*reinterpret_cast< std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        case 8: _t->onClose(); break;
        case 9: _t->onContinueBest(); break;
        case 10: _t->onIterEvent((*reinterpret_cast< std::add_pointer_t<OptimEvent*>>(_a[1]))); break;
        case 11: _t->onObjTableClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 12: _t->onObjectiveChanged(); break;
        case 13: _t->onOutputMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->onPlaneSelected((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 15: _t->onResetOptVariables(); break;
        case 16: _t->onResetParetoFrontier(); break;
        case 17: _t->onResizeColumns(); break;
        case 18: _t->onRestorePSODefaults(); break;
        case 19: _t->onRunAnalysis(); break;
        case 20: _t->onSortColumn((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Qt::SortOrder>>(_a[2]))); break;
        case 21: _t->onSwarm(); break;
        case 22: _t->onVariableChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 23: _t->reject(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractButton* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *OptimPlaneDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OptimPlaneDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13OptimPlaneDlgE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int OptimPlaneDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    return _id;
}
QT_WARNING_POP
