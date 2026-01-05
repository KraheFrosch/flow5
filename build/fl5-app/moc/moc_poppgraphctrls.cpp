/****************************************************************************
** Meta object code from reading C++ file 'poppgraphctrls.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/modules/xplane/graphs/poppgraphctrls.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'poppgraphctrls.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_POppGraphCtrls_t {
    uint offsetsAndSizes[14];
    char stringdata0[15];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[20];
    char stringdata5[19];
    char stringdata6[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_POppGraphCtrls_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_POppGraphCtrls_t qt_meta_stringdata_POppGraphCtrls = {
    {
        QT_MOC_LITERAL(0, 14),  // "POppGraphCtrls"
        QT_MOC_LITERAL(15, 13),  // "onAnimateWOpp"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 8),  // "bAnimate"
        QT_MOC_LITERAL(39, 19),  // "onAnimateWOppSingle"
        QT_MOC_LITERAL(59, 18),  // "onAnimateWOppSpeed"
        QT_MOC_LITERAL(78, 3)   // "val"
    },
    "POppGraphCtrls",
    "onAnimateWOpp",
    "",
    "bAnimate",
    "onAnimateWOppSingle",
    "onAnimateWOppSpeed",
    "val"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_POppGraphCtrls[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x0a,    1 /* Public */,
       4,    0,   35,    2, 0x0a,    3 /* Public */,
       5,    1,   36,    2, 0x0a,    4 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

Q_CONSTINIT const QMetaObject POppGraphCtrls::staticMetaObject = { {
    QMetaObject::SuperData::link<GraphTileCtrls::staticMetaObject>(),
    qt_meta_stringdata_POppGraphCtrls.offsetsAndSizes,
    qt_meta_data_POppGraphCtrls,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_POppGraphCtrls_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<POppGraphCtrls, std::true_type>,
        // method 'onAnimateWOpp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onAnimateWOppSingle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onAnimateWOppSpeed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void POppGraphCtrls::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<POppGraphCtrls *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onAnimateWOpp((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->onAnimateWOppSingle(); break;
        case 2: _t->onAnimateWOppSpeed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *POppGraphCtrls::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *POppGraphCtrls::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_POppGraphCtrls.stringdata0))
        return static_cast<void*>(this);
    return GraphTileCtrls::qt_metacast(_clname);
}

int POppGraphCtrls::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GraphTileCtrls::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
