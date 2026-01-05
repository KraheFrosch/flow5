/****************************************************************************
** Meta object code from reading C++ file 'gl3dhydrogen.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/opengl/testgl/gl3dhydrogen.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gl3dhydrogen.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_gl3dHydrogen_t {
    uint offsetsAndSizes[14];
    char stringdata0[13];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[15];
    char stringdata5[5];
    char stringdata6[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_gl3dHydrogen_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_gl3dHydrogen_t qt_meta_stringdata_gl3dHydrogen = {
    {
        QT_MOC_LITERAL(0, 12),  // "gl3dHydrogen"
        QT_MOC_LITERAL(13, 10),  // "onHarmonic"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 10),  // "onCollapse"
        QT_MOC_LITERAL(36, 14),  // "onObjectRadius"
        QT_MOC_LITERAL(51, 4),  // "size"
        QT_MOC_LITERAL(56, 10)   // "onRenderer"
    },
    "gl3dHydrogen",
    "onHarmonic",
    "",
    "onCollapse",
    "onObjectRadius",
    "size",
    "onRenderer"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_gl3dHydrogen[] = {

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
       4,    1,   40,    2, 0x08,    3 /* Private */,
       6,    0,   43,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject gl3dHydrogen::staticMetaObject = { {
    QMetaObject::SuperData::link<gl3dTestGLView::staticMetaObject>(),
    qt_meta_stringdata_gl3dHydrogen.offsetsAndSizes,
    qt_meta_data_gl3dHydrogen,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_gl3dHydrogen_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<gl3dHydrogen, std::true_type>,
        // method 'onHarmonic'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCollapse'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onObjectRadius'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onRenderer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void gl3dHydrogen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<gl3dHydrogen *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onHarmonic(); break;
        case 1: _t->onCollapse(); break;
        case 2: _t->onObjectRadius((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->onRenderer(); break;
        default: ;
        }
    }
}

const QMetaObject *gl3dHydrogen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gl3dHydrogen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gl3dHydrogen.stringdata0))
        return static_cast<void*>(this);
    return gl3dTestGLView::qt_metacast(_clname);
}

int gl3dHydrogen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = gl3dTestGLView::qt_metacall(_c, _id, _a);
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
