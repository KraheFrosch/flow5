/****************************************************************************
** Meta object code from reading C++ file 'planexflinertiadlg.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/editors/inertia/planexflinertiadlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'planexflinertiadlg.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18PlaneXflInertiaDlgE_t {};
} // unnamed namespace

template <> constexpr inline auto PlaneXflInertiaDlg::qt_create_metaobjectdata<qt_meta_tag_ZN18PlaneXflInertiaDlgE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PlaneXflInertiaDlg",
        "onOK",
        "",
        "iExitCode",
        "onResizeColumns",
        "onItemClicked",
        "QModelIndex",
        "index",
        "onItemDoubleClicked",
        "onImportExisting",
        "onCopyInertiaToClipboard",
        "onExportToAVL",
        "onDataChanged",
        "topleft",
        "onInertiaSource"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onOK'
        QtMocHelpers::SlotData<void(int)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Slot 'onResizeColumns'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onItemClicked'
        QtMocHelpers::SlotData<void(QModelIndex)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'onItemDoubleClicked'
        QtMocHelpers::SlotData<void(QModelIndex)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'onImportExisting'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onCopyInertiaToClipboard'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onExportToAVL'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onDataChanged'
        QtMocHelpers::SlotData<void(QModelIndex, QModelIndex)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 6, 13 }, { 0x80000000 | 6, 2 },
        }}),
        // Slot 'onInertiaSource'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PlaneXflInertiaDlg, qt_meta_tag_ZN18PlaneXflInertiaDlgE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PlaneXflInertiaDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<PlaneInertiaDlg::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18PlaneXflInertiaDlgE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18PlaneXflInertiaDlgE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18PlaneXflInertiaDlgE_t>.metaTypes,
    nullptr
} };

void PlaneXflInertiaDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PlaneXflInertiaDlg *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onOK((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->onResizeColumns(); break;
        case 2: _t->onItemClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 3: _t->onItemDoubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 4: _t->onImportExisting(); break;
        case 5: _t->onCopyInertiaToClipboard(); break;
        case 6: _t->onExportToAVL(); break;
        case 7: _t->onDataChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 8: _t->onInertiaSource(); break;
        default: ;
        }
    }
}

const QMetaObject *PlaneXflInertiaDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlaneXflInertiaDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18PlaneXflInertiaDlgE_t>.strings))
        return static_cast<void*>(this);
    return PlaneInertiaDlg::qt_metacast(_clname);
}

int PlaneXflInertiaDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlaneInertiaDlg::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
