/****************************************************************************
** Meta object code from reading C++ file 'foildlg.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/editors/foiledit/foildlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'foildlg.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_FoilDlg_t {
    uint offsetsAndSizes[18];
    char stringdata0[8];
    char stringdata1[5];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[8];
    char stringdata5[7];
    char stringdata6[9];
    char stringdata7[17];
    char stringdata8[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_FoilDlg_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_FoilDlg_t qt_meta_stringdata_FoilDlg = {
    {
        QT_MOC_LITERAL(0, 7),  // "FoilDlg"
        QT_MOC_LITERAL(8, 4),  // "onOK"
        QT_MOC_LITERAL(13, 0),  // ""
        QT_MOC_LITERAL(14, 9),  // "onChanged"
        QT_MOC_LITERAL(24, 7),  // "onReset"
        QT_MOC_LITERAL(32, 6),  // "reject"
        QT_MOC_LITERAL(39, 8),  // "onButton"
        QT_MOC_LITERAL(48, 16),  // "QAbstractButton*"
        QT_MOC_LITERAL(65, 7)   // "pButton"
    },
    "FoilDlg",
    "onOK",
    "",
    "onChanged",
    "onReset",
    "reject",
    "onButton",
    "QAbstractButton*",
    "pButton"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_FoilDlg[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x09,    1 /* Protected */,
       3,    0,   45,    2, 0x09,    2 /* Protected */,
       4,    0,   46,    2, 0x09,    3 /* Protected */,
       5,    0,   47,    2, 0x09,    4 /* Protected */,
       6,    1,   48,    2, 0x09,    5 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject FoilDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<XflDialog::staticMetaObject>(),
    qt_meta_stringdata_FoilDlg.offsetsAndSizes,
    qt_meta_data_FoilDlg,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_FoilDlg_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FoilDlg, std::true_type>,
        // method 'onOK'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onReset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reject'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractButton *, std::false_type>
    >,
    nullptr
} };

void FoilDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FoilDlg *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onOK(); break;
        case 1: _t->onChanged(); break;
        case 2: _t->onReset(); break;
        case 3: _t->reject(); break;
        case 4: _t->onButton((*reinterpret_cast< std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractButton* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *FoilDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FoilDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FoilDlg.stringdata0))
        return static_cast<void*>(this);
    return XflDialog::qt_metacast(_clname);
}

int FoilDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XflDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
