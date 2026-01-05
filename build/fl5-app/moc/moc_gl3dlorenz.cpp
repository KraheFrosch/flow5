/****************************************************************************
** Meta object code from reading C++ file 'gl3dlorenz.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/opengl/testgl/gl3dlorenz.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gl3dlorenz.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_gl3dLorenz_t {
    uint offsetsAndSizes[14];
    char stringdata0[11];
    char stringdata1[7];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[10];
    char stringdata5[12];
    char stringdata6[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_gl3dLorenz_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_gl3dLorenz_t qt_meta_stringdata_gl3dLorenz = {
    {
        QT_MOC_LITERAL(0, 10),  // "gl3dLorenz"
        QT_MOC_LITERAL(11, 6),  // "moveIt"
        QT_MOC_LITERAL(18, 0),  // ""
        QT_MOC_LITERAL(19, 15),  // "onResetDefaults"
        QT_MOC_LITERAL(35, 9),  // "onRestart"
        QT_MOC_LITERAL(45, 11),  // "onLineStyle"
        QT_MOC_LITERAL(57, 9)   // "LineStyle"
    },
    "gl3dLorenz",
    "moveIt",
    "",
    "onResetDefaults",
    "onRestart",
    "onLineStyle",
    "LineStyle"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_gl3dLorenz[] = {

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
       5,    1,   41,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject gl3dLorenz::staticMetaObject = { {
    QMetaObject::SuperData::link<gl3dTestGLView::staticMetaObject>(),
    qt_meta_stringdata_gl3dLorenz.offsetsAndSizes,
    qt_meta_data_gl3dLorenz,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_gl3dLorenz_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<gl3dLorenz, std::true_type>,
        // method 'moveIt'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onResetDefaults'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRestart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onLineStyle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<LineStyle, std::false_type>
    >,
    nullptr
} };

void gl3dLorenz::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<gl3dLorenz *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->moveIt(); break;
        case 1: _t->onResetDefaults(); break;
        case 2: _t->onRestart(); break;
        case 3: _t->onLineStyle((*reinterpret_cast< std::add_pointer_t<LineStyle>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LineStyle >(); break;
            }
            break;
        }
    }
}

const QMetaObject *gl3dLorenz::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gl3dLorenz::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gl3dLorenz.stringdata0))
        return static_cast<void*>(this);
    return gl3dTestGLView::qt_metacast(_clname);
}

int gl3dLorenz::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
