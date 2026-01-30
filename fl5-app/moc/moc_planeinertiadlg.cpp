/****************************************************************************
** Meta object code from reading C++ file 'planeinertiadlg.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/editors/inertia/planeinertiadlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'planeinertiadlg.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15PlaneInertiaDlgE_t {};
} // unnamed namespace

template <> constexpr inline auto PlaneInertiaDlg::qt_create_metaobjectdata<qt_meta_tag_ZN15PlaneInertiaDlgE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PlaneInertiaDlg",
        "onResizeColumns",
        "",
        "onOK",
        "iExitCode",
        "onCopyInertiaToClipboard",
        "onExportToAVL",
        "onImportExisting",
        "onManInertiaCellChanged",
        "QModelIndex",
        "index",
        "onPointMassCellChanged",
        "onPointMassDataPasted",
        "onMassRowChanged",
        "onRedraw",
        "onButton",
        "QAbstractButton*",
        "pButton"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onResizeColumns'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onOK'
        QtMocHelpers::SlotData<void(int)>(3, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 4 },
        }}),
        // Slot 'onOK'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessProtected | QMC::MethodCloned, QMetaType::Void),
        // Slot 'onCopyInertiaToClipboard'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onExportToAVL'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onImportExisting'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onManInertiaCellChanged'
        QtMocHelpers::SlotData<void(QModelIndex)>(8, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Slot 'onPointMassCellChanged'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onPointMassDataPasted'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onMassRowChanged'
        QtMocHelpers::SlotData<void(QModelIndex)>(13, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Slot 'onRedraw'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onButton'
        QtMocHelpers::SlotData<void(QAbstractButton *)>(15, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 16, 17 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PlaneInertiaDlg, qt_meta_tag_ZN15PlaneInertiaDlgE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PlaneInertiaDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15PlaneInertiaDlgE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15PlaneInertiaDlgE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15PlaneInertiaDlgE_t>.metaTypes,
    nullptr
} };

void PlaneInertiaDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PlaneInertiaDlg *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onResizeColumns(); break;
        case 1: _t->onOK((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->onOK(); break;
        case 3: _t->onCopyInertiaToClipboard(); break;
        case 4: _t->onExportToAVL(); break;
        case 5: _t->onImportExisting(); break;
        case 6: _t->onManInertiaCellChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 7: _t->onPointMassCellChanged(); break;
        case 8: _t->onPointMassDataPasted(); break;
        case 9: _t->onMassRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 10: _t->onRedraw(); break;
        case 11: _t->onButton((*reinterpret_cast< std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractButton* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *PlaneInertiaDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlaneInertiaDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15PlaneInertiaDlgE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PlaneInertiaDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
