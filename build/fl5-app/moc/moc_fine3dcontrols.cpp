/****************************************************************************
** Meta object code from reading C++ file 'fine3dcontrols.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/opengl/controls/fine3dcontrols.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fine3dcontrols.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_Fine3dControls_t {
    uint offsetsAndSizes[14];
    char stringdata0[15];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[8];
    char stringdata5[8];
    char stringdata6[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Fine3dControls_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Fine3dControls_t qt_meta_stringdata_Fine3dControls = {
    {
        QT_MOC_LITERAL(0, 14),  // "Fine3dControls"
        QT_MOC_LITERAL(15, 12),  // "onResetCtrls"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 7),  // "onXView"
        QT_MOC_LITERAL(37, 7),  // "onYView"
        QT_MOC_LITERAL(45, 7),  // "onZView"
        QT_MOC_LITERAL(53, 12)   // "onZAnimAngle"
    },
    "Fine3dControls",
    "onResetCtrls",
    "",
    "onXView",
    "onYView",
    "onZView",
    "onZAnimAngle"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Fine3dControls[] = {

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
       1,    0,   44,    2, 0x0a,    1 /* Public */,
       3,    1,   45,    2, 0x08,    2 /* Private */,
       4,    1,   48,    2, 0x08,    4 /* Private */,
       5,    1,   51,    2, 0x08,    6 /* Private */,
       6,    0,   54,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Fine3dControls::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_Fine3dControls.offsetsAndSizes,
    qt_meta_data_Fine3dControls,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Fine3dControls_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Fine3dControls, std::true_type>,
        // method 'onResetCtrls'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onXView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onYView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onZView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onZAnimAngle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Fine3dControls::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Fine3dControls *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onResetCtrls(); break;
        case 1: _t->onXView((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->onYView((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->onZView((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->onZAnimAngle(); break;
        default: ;
        }
    }
}

const QMetaObject *Fine3dControls::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Fine3dControls::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Fine3dControls.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int Fine3dControls::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
