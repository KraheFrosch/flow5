/****************************************************************************
** Meta object code from reading C++ file 'gl2dnewton.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/opengl/testgl/gl2dnewton.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gl2dnewton.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_gl2dNewton_t {
    uint offsetsAndSizes[14];
    char stringdata0[11];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[12];
    char stringdata5[9];
    char stringdata6[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_gl2dNewton_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_gl2dNewton_t qt_meta_stringdata_gl2dNewton = {
    {
        QT_MOC_LITERAL(0, 10),  // "gl2dNewton"
        QT_MOC_LITERAL(11, 9),  // "onAnimate"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 8),  // "bAnimate"
        QT_MOC_LITERAL(31, 11),  // "onMoveRoots"
        QT_MOC_LITERAL(43, 8),  // "onNRoots"
        QT_MOC_LITERAL(52, 11)   // "onSaveImage"
    },
    "gl2dNewton",
    "onAnimate",
    "",
    "bAnimate",
    "onMoveRoots",
    "onNRoots",
    "onSaveImage"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_gl2dNewton[] = {

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
       1,    1,   38,    2, 0x08,    1 /* Private */,
       4,    0,   41,    2, 0x08,    3 /* Private */,
       5,    0,   42,    2, 0x08,    4 /* Private */,
       6,    0,   43,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject gl2dNewton::staticMetaObject = { {
    QMetaObject::SuperData::link<gl2dView::staticMetaObject>(),
    qt_meta_stringdata_gl2dNewton.offsetsAndSizes,
    qt_meta_data_gl2dNewton,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_gl2dNewton_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<gl2dNewton, std::true_type>,
        // method 'onAnimate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onMoveRoots'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onNRoots'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSaveImage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void gl2dNewton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<gl2dNewton *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onAnimate((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->onMoveRoots(); break;
        case 2: _t->onNRoots(); break;
        case 3: _t->onSaveImage(); break;
        default: ;
        }
    }
}

const QMetaObject *gl2dNewton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gl2dNewton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gl2dNewton.stringdata0))
        return static_cast<void*>(this);
    return gl2dView::qt_metacast(_clname);
}

int gl2dNewton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = gl2dView::qt_metacall(_c, _id, _a);
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
