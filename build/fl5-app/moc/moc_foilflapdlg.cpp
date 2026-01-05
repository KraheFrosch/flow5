/****************************************************************************
** Meta object code from reading C++ file 'foilflapdlg.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/editors/foiledit/foilflapdlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'foilflapdlg.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_FoilFlapDlg_t {
    uint offsetsAndSizes[12];
    char stringdata0[12];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[5];
    char stringdata5[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_FoilFlapDlg_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_FoilFlapDlg_t qt_meta_stringdata_FoilFlapDlg = {
    {
        QT_MOC_LITERAL(0, 11),  // "FoilFlapDlg"
        QT_MOC_LITERAL(12, 13),  // "onLEFlapCheck"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 13),  // "onTEFlapCheck"
        QT_MOC_LITERAL(41, 4),  // "onOK"
        QT_MOC_LITERAL(46, 7)   // "onApply"
    },
    "FoilFlapDlg",
    "onLEFlapCheck",
    "",
    "onTEFlapCheck",
    "onOK",
    "onApply"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_FoilFlapDlg[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x08,    1 /* Private */,
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    0,   40,    2, 0x08,    3 /* Private */,
       5,    0,   41,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject FoilFlapDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<FoilDlg::staticMetaObject>(),
    qt_meta_stringdata_FoilFlapDlg.offsetsAndSizes,
    qt_meta_data_FoilFlapDlg,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_FoilFlapDlg_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FoilFlapDlg, std::true_type>,
        // method 'onLEFlapCheck'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTEFlapCheck'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onOK'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onApply'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void FoilFlapDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FoilFlapDlg *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onLEFlapCheck(); break;
        case 1: _t->onTEFlapCheck(); break;
        case 2: _t->onOK(); break;
        case 3: _t->onApply(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *FoilFlapDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FoilFlapDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FoilFlapDlg.stringdata0))
        return static_cast<void*>(this);
    return FoilDlg::qt_metacast(_clname);
}

int FoilFlapDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FoilDlg::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
