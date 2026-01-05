/****************************************************************************
** Meta object code from reading C++ file 'batchplanedlg.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/modules/xplane/analysis/batchplanedlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'batchplanedlg.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_BatchPlaneDlg_t {
    uint offsetsAndSizes[34];
    char stringdata0[14];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[17];
    char stringdata5[8];
    char stringdata6[20];
    char stringdata7[12];
    char stringdata8[11];
    char stringdata9[15];
    char stringdata10[10];
    char stringdata11[4];
    char stringdata12[19];
    char stringdata13[6];
    char stringdata14[16];
    char stringdata15[9];
    char stringdata16[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_BatchPlaneDlg_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_BatchPlaneDlg_t qt_meta_stringdata_BatchPlaneDlg = {
    {
        QT_MOC_LITERAL(0, 13),  // "BatchPlaneDlg"
        QT_MOC_LITERAL(14, 18),  // "onAnalysisFinished"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 8),  // "onButton"
        QT_MOC_LITERAL(43, 16),  // "QAbstractButton*"
        QT_MOC_LITERAL(60, 7),  // "pButton"
        QT_MOC_LITERAL(68, 19),  // "onCurrentRowChanged"
        QT_MOC_LITERAL(88, 11),  // "QModelIndex"
        QT_MOC_LITERAL(100, 10),  // "currentidx"
        QT_MOC_LITERAL(111, 14),  // "onEditAnalysis"
        QT_MOC_LITERAL(126, 9),  // "onMessage"
        QT_MOC_LITERAL(136, 3),  // "msg"
        QT_MOC_LITERAL(140, 18),  // "onPlaneTaskStarted"
        QT_MOC_LITERAL(159, 5),  // "iTask"
        QT_MOC_LITERAL(165, 15),  // "onResizeColumns"
        QT_MOC_LITERAL(181, 8),  // "onOption"
        QT_MOC_LITERAL(190, 6)   // "reject"
    },
    "BatchPlaneDlg",
    "onAnalysisFinished",
    "",
    "onButton",
    "QAbstractButton*",
    "pButton",
    "onCurrentRowChanged",
    "QModelIndex",
    "currentidx",
    "onEditAnalysis",
    "onMessage",
    "msg",
    "onPlaneTaskStarted",
    "iTask",
    "onResizeColumns",
    "onOption",
    "reject"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_BatchPlaneDlg[] = {

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
       1,    0,   68,    2, 0x08,    1 /* Private */,
       3,    1,   69,    2, 0x08,    2 /* Private */,
       6,    2,   72,    2, 0x08,    4 /* Private */,
       9,    0,   77,    2, 0x08,    7 /* Private */,
      10,    1,   78,    2, 0x08,    8 /* Private */,
      12,    1,   81,    2, 0x08,   10 /* Private */,
      14,    0,   84,    2, 0x08,   12 /* Private */,
      15,    0,   85,    2, 0x08,   13 /* Private */,
      16,    0,   86,    2, 0x08,   14 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 7,    8,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject BatchPlaneDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_BatchPlaneDlg.offsetsAndSizes,
    qt_meta_data_BatchPlaneDlg,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_BatchPlaneDlg_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BatchPlaneDlg, std::true_type>,
        // method 'onAnalysisFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractButton *, std::false_type>,
        // method 'onCurrentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        // method 'onEditAnalysis'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        // method 'onPlaneTaskStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onResizeColumns'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onOption'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reject'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void BatchPlaneDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BatchPlaneDlg *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onAnalysisFinished(); break;
        case 1: _t->onButton((*reinterpret_cast< std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        case 2: _t->onCurrentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 3: _t->onEditAnalysis(); break;
        case 4: _t->onMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->onPlaneTaskStarted((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->onResizeColumns(); break;
        case 7: _t->onOption(); break;
        case 8: _t->reject(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractButton* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *BatchPlaneDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BatchPlaneDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BatchPlaneDlg.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int BatchPlaneDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
