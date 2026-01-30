/****************************************************************************
** Meta object code from reading C++ file 't1234578polardlg.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/editors/analysis3ddef/t1234578polardlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 't1234578polardlg.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN16T1234578PolarDlgE_t {};
} // unnamed namespace

template <> constexpr inline auto T1234578PolarDlg::qt_create_metaobjectdata<qt_meta_tag_ZN16T1234578PolarDlgE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "T1234578PolarDlg",
        "onAVLContextMenu",
        "",
        "pt",
        "onAVLRowChanged",
        "QModelIndex",
        "index",
        "onAppendAVLCtrl",
        "onDuplicateAVLCtrl",
        "onDeleteAVLCtrl",
        "onAVLCtrlChanged",
        "onAVLGainChanged",
        "onMoveAVLCtrl",
        "onOK",
        "onPolarType",
        "onEditingFinished"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onAVLContextMenu'
        QtMocHelpers::SlotData<void(QPoint)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QPoint, 3 },
        }}),
        // Slot 'onAVLRowChanged'
        QtMocHelpers::SlotData<void(QModelIndex)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Slot 'onAppendAVLCtrl'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onDuplicateAVLCtrl'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onDeleteAVLCtrl'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onAVLCtrlChanged'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onAVLGainChanged'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onMoveAVLCtrl'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onOK'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onPolarType'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onEditingFinished'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<T1234578PolarDlg, qt_meta_tag_ZN16T1234578PolarDlgE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject T1234578PolarDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<PlanePolarDlg::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16T1234578PolarDlgE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16T1234578PolarDlgE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16T1234578PolarDlgE_t>.metaTypes,
    nullptr
} };

void T1234578PolarDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<T1234578PolarDlg *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onAVLContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 1: _t->onAVLRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 2: _t->onAppendAVLCtrl(); break;
        case 3: _t->onDuplicateAVLCtrl(); break;
        case 4: _t->onDeleteAVLCtrl(); break;
        case 5: _t->onAVLCtrlChanged(); break;
        case 6: _t->onAVLGainChanged(); break;
        case 7: _t->onMoveAVLCtrl(); break;
        case 8: _t->onOK(); break;
        case 9: _t->onPolarType(); break;
        case 10: _t->onEditingFinished(); break;
        default: ;
        }
    }
}

const QMetaObject *T1234578PolarDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *T1234578PolarDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16T1234578PolarDlgE_t>.strings))
        return static_cast<void*>(this);
    return PlanePolarDlg::qt_metacast(_clname);
}

int T1234578PolarDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlanePolarDlg::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
