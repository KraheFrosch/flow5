/****************************************************************************
** Meta object code from reading C++ file 'batchdlg.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/modules/xdirect/analysis/batchdlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'batchdlg.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_BatchDlg_t {
    uint offsetsAndSizes[20];
    char stringdata0[9];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[9];
    char stringdata5[17];
    char stringdata6[8];
    char stringdata7[8];
    char stringdata8[14];
    char stringdata9[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_BatchDlg_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_BatchDlg_t qt_meta_stringdata_BatchDlg = {
    {
        QT_MOC_LITERAL(0, 8),  // "BatchDlg"
        QT_MOC_LITERAL(9, 9),  // "onAnalyze"
        QT_MOC_LITERAL(19, 0),  // ""
        QT_MOC_LITERAL(20, 5),  // "onAcl"
        QT_MOC_LITERAL(26, 8),  // "onButton"
        QT_MOC_LITERAL(35, 16),  // "QAbstractButton*"
        QT_MOC_LITERAL(52, 7),  // "pButton"
        QT_MOC_LITERAL(60, 7),  // "onClose"
        QT_MOC_LITERAL(68, 13),  // "onSpecChanged"
        QT_MOC_LITERAL(82, 17)   // "onUpdatePolarView"
    },
    "BatchDlg",
    "onAnalyze",
    "",
    "onAcl",
    "onButton",
    "QAbstractButton*",
    "pButton",
    "onClose",
    "onSpecChanged",
    "onUpdatePolarView"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_BatchDlg[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x09,    1 /* Protected */,
       3,    0,   51,    2, 0x09,    2 /* Protected */,
       4,    1,   52,    2, 0x09,    3 /* Protected */,
       7,    0,   55,    2, 0x09,    5 /* Protected */,
       8,    0,   56,    2, 0x09,    6 /* Protected */,
       9,    0,   57,    2, 0x09,    7 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject BatchDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_BatchDlg.offsetsAndSizes,
    qt_meta_data_BatchDlg,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_BatchDlg_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BatchDlg, std::true_type>,
        // method 'onAnalyze'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onAcl'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractButton *, std::false_type>,
        // method 'onClose'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSpecChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onUpdatePolarView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void BatchDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BatchDlg *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onAnalyze(); break;
        case 1: _t->onAcl(); break;
        case 2: _t->onButton((*reinterpret_cast< std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        case 3: _t->onClose(); break;
        case 4: _t->onSpecChanged(); break;
        case 5: _t->onUpdatePolarView(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractButton* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *BatchDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BatchDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BatchDlg.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int BatchDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
