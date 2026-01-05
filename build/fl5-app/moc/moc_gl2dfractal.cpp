/****************************************************************************
** Meta object code from reading C++ file 'gl2dfractal.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/opengl/testgl/gl2dfractal.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gl2dfractal.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_gl2dFractal_t {
    uint offsetsAndSizes[8];
    char stringdata0[12];
    char stringdata1[7];
    char stringdata2[1];
    char stringdata3[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_gl2dFractal_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_gl2dFractal_t qt_meta_stringdata_gl2dFractal = {
    {
        QT_MOC_LITERAL(0, 11),  // "gl2dFractal"
        QT_MOC_LITERAL(12, 6),  // "onMode"
        QT_MOC_LITERAL(19, 0),  // ""
        QT_MOC_LITERAL(20, 11)   // "onSaveImage"
    },
    "gl2dFractal",
    "onMode",
    "",
    "onSaveImage"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_gl2dFractal[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x08,    1 /* Private */,
       3,    0,   27,    2, 0x08,    2 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject gl2dFractal::staticMetaObject = { {
    QMetaObject::SuperData::link<gl2dView::staticMetaObject>(),
    qt_meta_stringdata_gl2dFractal.offsetsAndSizes,
    qt_meta_data_gl2dFractal,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_gl2dFractal_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<gl2dFractal, std::true_type>,
        // method 'onMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSaveImage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void gl2dFractal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<gl2dFractal *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onMode(); break;
        case 1: _t->onSaveImage(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *gl2dFractal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gl2dFractal::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gl2dFractal.stringdata0))
        return static_cast<void*>(this);
    return gl2dView::qt_metacast(_clname);
}

int gl2dFractal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = gl2dView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
