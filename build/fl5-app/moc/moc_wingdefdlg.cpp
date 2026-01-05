/****************************************************************************
** Meta object code from reading C++ file 'wingdefdlg.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/editors/wingedit/wingdefdlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wingdefdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_WingDefDlg_t {
    uint offsetsAndSizes[28];
    char stringdata0[11];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[8];
    char stringdata5[13];
    char stringdata6[12];
    char stringdata7[13];
    char stringdata8[7];
    char stringdata9[12];
    char stringdata10[12];
    char stringdata11[19];
    char stringdata12[6];
    char stringdata13[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_WingDefDlg_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_WingDefDlg_t qt_meta_stringdata_WingDefDlg = {
    {
        QT_MOC_LITERAL(0, 10),  // "WingDefDlg"
        QT_MOC_LITERAL(11, 13),  // "onCellChanged"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 6),  // "onCopy"
        QT_MOC_LITERAL(33, 7),  // "onPaste"
        QT_MOC_LITERAL(41, 12),  // "onRowChanged"
        QT_MOC_LITERAL(54, 11),  // "QModelIndex"
        QT_MOC_LITERAL(66, 12),  // "currentindex"
        QT_MOC_LITERAL(79, 6),  // "onSide"
        QT_MOC_LITERAL(86, 11),  // "onTipStrips"
        QT_MOC_LITERAL(98, 11),  // "onWingSides"
        QT_MOC_LITERAL(110, 18),  // "onWingTableClicked"
        QT_MOC_LITERAL(129, 5),  // "index"
        QT_MOC_LITERAL(135, 22)   // "onWingTableContextMenu"
    },
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
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_WingDefDlg[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x09,    1 /* Protected */,
       3,    0,   69,    2, 0x09,    2 /* Protected */,
       4,    0,   70,    2, 0x09,    3 /* Protected */,
       5,    2,   71,    2, 0x09,    4 /* Protected */,
       8,    0,   76,    2, 0x09,    7 /* Protected */,
       9,    0,   77,    2, 0x09,    8 /* Protected */,
      10,    0,   78,    2, 0x09,    9 /* Protected */,
      11,    1,   79,    2, 0x09,   10 /* Protected */,
      13,    1,   82,    2, 0x09,   12 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6,    7,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,   12,
    QMetaType::Void, QMetaType::QPoint,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject WingDefDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<WingDlg::staticMetaObject>(),
    qt_meta_stringdata_WingDefDlg.offsetsAndSizes,
    qt_meta_data_WingDefDlg,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_WingDefDlg_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<WingDefDlg, std::true_type>,
        // method 'onCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCopy'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onPaste'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'onSide'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTipStrips'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onWingSides'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onWingTableClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        // method 'onWingTableContextMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPoint, std::false_type>
    >,
    nullptr
} };

void WingDefDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WingDefDlg *>(_o);
        (void)_t;
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
    if (!strcmp(_clname, qt_meta_stringdata_WingDefDlg.stringdata0))
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
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
