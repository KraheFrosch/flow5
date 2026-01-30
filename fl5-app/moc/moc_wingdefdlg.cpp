/****************************************************************************
** Meta object code from reading C++ file 'wingdefdlg.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/editors/wingedit/wingdefdlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wingdefdlg.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10WingDefDlgE_t {};
} // unnamed namespace

template <> constexpr inline auto WingDefDlg::qt_create_metaobjectdata<qt_meta_tag_ZN10WingDefDlgE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "WingDefDlg",
        "onCellChanged",
        "",
        "onCopy",
        "onPaste",
        "onRowChanged",
        "QModelIndex",
        "currentindex",
        "onSide",
        "onTipStrips",
        "onWingSides",
        "onWingTableClicked",
        "index",
        "onWingTableContextMenu"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onCellChanged'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onCopy'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onPaste'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onRowChanged'
        QtMocHelpers::SlotData<void(const QModelIndex &, const QModelIndex &)>(5, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 6, 7 }, { 0x80000000 | 6, 2 },
        }}),
        // Slot 'onSide'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onTipStrips'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onWingSides'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onWingTableClicked'
        QtMocHelpers::SlotData<void(QModelIndex)>(11, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 6, 12 },
        }}),
        // Slot 'onWingTableContextMenu'
        QtMocHelpers::SlotData<void(QPoint)>(13, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QPoint, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<WingDefDlg, qt_meta_tag_ZN10WingDefDlgE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject WingDefDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<WingDlg::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10WingDefDlgE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10WingDefDlgE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10WingDefDlgE_t>.metaTypes,
    nullptr
} };

void WingDefDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WingDefDlg *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onCellChanged(); break;
        case 1: _t->onCopy(); break;
        case 2: _t->onPaste(); break;
        case 3: _t->onRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 4: _t->onSide(); break;
        case 5: _t->onTipStrips(); break;
        case 6: _t->onWingSides(); break;
        case 7: _t->onWingTableClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 8: _t->onWingTableContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *WingDefDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WingDefDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10WingDefDlgE_t>.strings))
        return static_cast<void*>(this);
    return WingDlg::qt_metacast(_clname);
}

int WingDefDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WingDlg::qt_metacall(_c, _id, _a);
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
