/****************************************************************************
** Meta object code from reading C++ file 'interpolatefoilsdlg.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/editors/foiledit/interpolatefoilsdlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'interpolatefoilsdlg.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_InterpolateFoilsDlg_t {
    uint offsetsAndSizes[16];
    char stringdata0[20];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[7];
    char stringdata5[9];
    char stringdata6[4];
    char stringdata7[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_InterpolateFoilsDlg_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_InterpolateFoilsDlg_t qt_meta_stringdata_InterpolateFoilsDlg = {
    {
        QT_MOC_LITERAL(0, 19),  // "InterpolateFoilsDlg"
        QT_MOC_LITERAL(20, 16),  // "onSelChangeFoil1"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 16),  // "onSelChangeFoil2"
        QT_MOC_LITERAL(55, 6),  // "onFrac"
        QT_MOC_LITERAL(62, 8),  // "onSlider"
        QT_MOC_LITERAL(71, 3),  // "val"
        QT_MOC_LITERAL(75, 7)   // "onApply"
    },
    "InterpolateFoilsDlg",
    "onSelChangeFoil1",
    "",
    "onSelChangeFoil2",
    "onFrac",
    "onSlider",
    "val",
    "onApply"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_InterpolateFoilsDlg[] = {

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
       1,    1,   44,    2, 0x08,    1 /* Private */,
       3,    1,   47,    2, 0x08,    3 /* Private */,
       4,    0,   50,    2, 0x08,    5 /* Private */,
       5,    1,   51,    2, 0x08,    6 /* Private */,
       7,    0,   54,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject InterpolateFoilsDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<FoilDlg::staticMetaObject>(),
    qt_meta_stringdata_InterpolateFoilsDlg.offsetsAndSizes,
    qt_meta_data_InterpolateFoilsDlg,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_InterpolateFoilsDlg_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<InterpolateFoilsDlg, std::true_type>,
        // method 'onSelChangeFoil1'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onSelChangeFoil2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onFrac'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSlider'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onApply'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void InterpolateFoilsDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InterpolateFoilsDlg *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onSelChangeFoil1((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->onSelChangeFoil2((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->onFrac(); break;
        case 3: _t->onSlider((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->onApply(); break;
        default: ;
        }
    }
}

const QMetaObject *InterpolateFoilsDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InterpolateFoilsDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InterpolateFoilsDlg.stringdata0))
        return static_cast<void*>(this);
    return FoilDlg::qt_metacast(_clname);
}

int InterpolateFoilsDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FoilDlg::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
