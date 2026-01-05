/****************************************************************************
** Meta object code from reading C++ file 'planepolardlg.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/editors/analysis3ddef/planepolardlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'planepolardlg.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_PlanePolarDlg_t {
    uint offsetsAndSizes[26];
    char stringdata0[14];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[11];
    char stringdata5[15];
    char stringdata6[15];
    char stringdata7[14];
    char stringdata8[10];
    char stringdata9[15];
    char stringdata10[11];
    char stringdata11[13];
    char stringdata12[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_PlanePolarDlg_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_PlanePolarDlg_t qt_meta_stringdata_PlanePolarDlg = {
    {
        QT_MOC_LITERAL(0, 13),  // "PlanePolarDlg"
        QT_MOC_LITERAL(14, 7),  // "onReset"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 6),  // "onArea"
        QT_MOC_LITERAL(30, 10),  // "onAeroData"
        QT_MOC_LITERAL(41, 14),  // "onPlaneInertia"
        QT_MOC_LITERAL(56, 14),  // "onWingSurfaces"
        QT_MOC_LITERAL(71, 13),  // "onNameOptions"
        QT_MOC_LITERAL(85, 9),  // "onViscous"
        QT_MOC_LITERAL(95, 14),  // "onGroundEffect"
        QT_MOC_LITERAL(110, 10),  // "onFuseDrag"
        QT_MOC_LITERAL(121, 12),  // "onVortonWake"
        QT_MOC_LITERAL(134, 14)   // "onFlapControls"
    },
    "PlanePolarDlg",
    "onReset",
    "",
    "onArea",
    "onAeroData",
    "onPlaneInertia",
    "onWingSurfaces",
    "onNameOptions",
    "onViscous",
    "onGroundEffect",
    "onFuseDrag",
    "onVortonWake",
    "onFlapControls"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_PlanePolarDlg[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x09,    1 /* Protected */,
       3,    0,   81,    2, 0x09,    2 /* Protected */,
       4,    0,   82,    2, 0x09,    3 /* Protected */,
       5,    0,   83,    2, 0x09,    4 /* Protected */,
       6,    0,   84,    2, 0x09,    5 /* Protected */,
       7,    0,   85,    2, 0x09,    6 /* Protected */,
       8,    0,   86,    2, 0x09,    7 /* Protected */,
       9,    0,   87,    2, 0x09,    8 /* Protected */,
      10,    0,   88,    2, 0x09,    9 /* Protected */,
      11,    0,   89,    2, 0x09,   10 /* Protected */,
      12,    0,   90,    2, 0x09,   11 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject PlanePolarDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<Polar3dDlg::staticMetaObject>(),
    qt_meta_stringdata_PlanePolarDlg.offsetsAndSizes,
    qt_meta_data_PlanePolarDlg,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_PlanePolarDlg_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PlanePolarDlg, std::true_type>,
        // method 'onReset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onArea'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onAeroData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onPlaneInertia'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onWingSurfaces'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onNameOptions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onViscous'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onGroundEffect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFuseDrag'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onVortonWake'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFlapControls'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void PlanePolarDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlanePolarDlg *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onReset(); break;
        case 1: _t->onArea(); break;
        case 2: _t->onAeroData(); break;
        case 3: _t->onPlaneInertia(); break;
        case 4: _t->onWingSurfaces(); break;
        case 5: _t->onNameOptions(); break;
        case 6: _t->onViscous(); break;
        case 7: _t->onGroundEffect(); break;
        case 8: _t->onFuseDrag(); break;
        case 9: _t->onVortonWake(); break;
        case 10: _t->onFlapControls(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *PlanePolarDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlanePolarDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlanePolarDlg.stringdata0))
        return static_cast<void*>(this);
    return Polar3dDlg::qt_metacast(_clname);
}

int PlanePolarDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Polar3dDlg::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
