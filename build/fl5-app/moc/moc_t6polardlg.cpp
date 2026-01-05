/****************************************************************************
** Meta object code from reading C++ file 't6polardlg.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/editors/analysis3ddef/t6polardlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 't6polardlg.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_T6PolarDlg_t {
    uint offsetsAndSizes[18];
    char stringdata0[11];
    char stringdata1[5];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[18];
    char stringdata5[19];
    char stringdata6[19];
    char stringdata7[21];
    char stringdata8[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_T6PolarDlg_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_T6PolarDlg_t qt_meta_stringdata_T6PolarDlg = {
    {
        QT_MOC_LITERAL(0, 10),  // "T6PolarDlg"
        QT_MOC_LITERAL(11, 4),  // "onOK"
        QT_MOC_LITERAL(16, 0),  // ""
        QT_MOC_LITERAL(17, 14),  // "onPlaneInertia"
        QT_MOC_LITERAL(32, 17),  // "onEditingFinished"
        QT_MOC_LITERAL(50, 18),  // "onAdjustedVelocity"
        QT_MOC_LITERAL(69, 18),  // "onRangeCellChanged"
        QT_MOC_LITERAL(88, 20),  // "onInertiaCellChanged"
        QT_MOC_LITERAL(109, 18)   // "onAngleCellChanged"
    },
    "T6PolarDlg",
    "onOK",
    "",
    "onPlaneInertia",
    "onEditingFinished",
    "onAdjustedVelocity",
    "onRangeCellChanged",
    "onInertiaCellChanged",
    "onAngleCellChanged"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_T6PolarDlg[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    0,   61,    2, 0x08,    6 /* Private */,
       8,    0,   62,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject T6PolarDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<PlanePolarDlg::staticMetaObject>(),
    qt_meta_stringdata_T6PolarDlg.offsetsAndSizes,
    qt_meta_data_T6PolarDlg,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_T6PolarDlg_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<T6PolarDlg, std::true_type>,
        // method 'onOK'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onPlaneInertia'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onEditingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onAdjustedVelocity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRangeCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onInertiaCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onAngleCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void T6PolarDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<T6PolarDlg *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onOK(); break;
        case 1: _t->onPlaneInertia(); break;
        case 2: _t->onEditingFinished(); break;
        case 3: _t->onAdjustedVelocity(); break;
        case 4: _t->onRangeCellChanged(); break;
        case 5: _t->onInertiaCellChanged(); break;
        case 6: _t->onAngleCellChanged(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *T6PolarDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *T6PolarDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_T6PolarDlg.stringdata0))
        return static_cast<void*>(this);
    return PlanePolarDlg::qt_metacast(_clname);
}

int T6PolarDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlanePolarDlg::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
