/****************************************************************************
** Meta object code from reading C++ file 'batchaltdlg.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/modules/xdirect/analysis/batchaltdlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'batchaltdlg.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_BatchAltDlg_t {
    uint offsetsAndSizes[12];
    char stringdata0[12];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[12];
    char stringdata5[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_BatchAltDlg_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_BatchAltDlg_t qt_meta_stringdata_BatchAltDlg = {
    {
        QT_MOC_LITERAL(0, 11),  // "BatchAltDlg"
        QT_MOC_LITERAL(12, 9),  // "onAnalyze"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 19),  // "onCurrentRowChanged"
        QT_MOC_LITERAL(43, 11),  // "QModelIndex"
        QT_MOC_LITERAL(55, 10)   // "currentidx"
    },
    "BatchAltDlg",
    "onAnalyze",
    "",
    "onCurrentRowChanged",
    "QModelIndex",
    "currentidx"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_BatchAltDlg[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x08,    1 /* Private */,
       3,    2,   27,    2, 0x08,    2 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    5,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject BatchAltDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<BatchDlg::staticMetaObject>(),
    qt_meta_stringdata_BatchAltDlg.offsetsAndSizes,
    qt_meta_data_BatchAltDlg,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_BatchAltDlg_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BatchAltDlg, std::true_type>,
        // method 'onAnalyze'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCurrentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>
    >,
    nullptr
} };

void BatchAltDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BatchAltDlg *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onAnalyze(); break;
        case 1: _t->onCurrentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *BatchAltDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BatchAltDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BatchAltDlg.stringdata0))
        return static_cast<void*>(this);
    return BatchDlg::qt_metacast(_clname);
}

int BatchAltDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BatchDlg::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
