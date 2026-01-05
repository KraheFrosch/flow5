/****************************************************************************
** Meta object code from reading C++ file 'gl3dsolarsys.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/opengl/testgl/gl3dsolarsys.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gl3dsolarsys.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_gl3dSolarSys_t {
    uint offsetsAndSizes[18];
    char stringdata0[13];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[13];
    char stringdata5[5];
    char stringdata6[8];
    char stringdata7[6];
    char stringdata8[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_gl3dSolarSys_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_gl3dSolarSys_t qt_meta_stringdata_gl3dSolarSys = {
    {
        QT_MOC_LITERAL(0, 12),  // "gl3dSolarSys"
        QT_MOC_LITERAL(13, 13),  // "onMovePlanets"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 9),  // "onRestart"
        QT_MOC_LITERAL(38, 12),  // "onPlanetSize"
        QT_MOC_LITERAL(51, 4),  // "size"
        QT_MOC_LITERAL(56, 7),  // "onCeres"
        QT_MOC_LITERAL(64, 5),  // "bShow"
        QT_MOC_LITERAL(70, 8)   // "onHalley"
    },
    "gl3dSolarSys",
    "onMovePlanets",
    "",
    "onRestart",
    "onPlanetSize",
    "size",
    "onCeres",
    "bShow",
    "onHalley"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_gl3dSolarSys[] = {

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
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    1,   46,    2, 0x08,    3 /* Private */,
       6,    1,   49,    2, 0x08,    5 /* Private */,
       8,    1,   52,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject gl3dSolarSys::staticMetaObject = { {
    QMetaObject::SuperData::link<gl3dTestGLView::staticMetaObject>(),
    qt_meta_stringdata_gl3dSolarSys.offsetsAndSizes,
    qt_meta_data_gl3dSolarSys,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_gl3dSolarSys_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<gl3dSolarSys, std::true_type>,
        // method 'onMovePlanets'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRestart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onPlanetSize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onCeres'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onHalley'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void gl3dSolarSys::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<gl3dSolarSys *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onMovePlanets(); break;
        case 1: _t->onRestart(); break;
        case 2: _t->onPlanetSize((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->onCeres((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->onHalley((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *gl3dSolarSys::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gl3dSolarSys::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gl3dSolarSys.stringdata0))
        return static_cast<void*>(this);
    return gl3dTestGLView::qt_metacast(_clname);
}

int gl3dSolarSys::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = gl3dTestGLView::qt_metacall(_c, _id, _a);
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
