/****************************************************************************
** Meta object code from reading C++ file 'gl3doptimxflview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/opengl/fl5views/gl3doptimxflview.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gl3doptimxflview.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_gl3dOptimXflView_t {
    uint offsetsAndSizes[16];
    char stringdata0[17];
    char stringdata1[5];
    char stringdata2[1];
    char stringdata3[2];
    char stringdata4[8];
    char stringdata5[8];
    char stringdata6[11];
    char stringdata7[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_gl3dOptimXflView_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_gl3dOptimXflView_t qt_meta_stringdata_gl3dOptimXflView = {
    {
        QT_MOC_LITERAL(0, 16),  // "gl3dOptimXflView"
        QT_MOC_LITERAL(17, 4),  // "onCp"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 1),  // "b"
        QT_MOC_LITERAL(25, 7),  // "onGamma"
        QT_MOC_LITERAL(33, 7),  // "onSigma"
        QT_MOC_LITERAL(41, 10),  // "onContours"
        QT_MOC_LITERAL(52, 10)   // "onSections"
    },
    "gl3dOptimXflView",
    "onCp",
    "",
    "b",
    "onGamma",
    "onSigma",
    "onContours",
    "onSections"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_gl3dOptimXflView[] = {

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
       4,    0,   47,    2, 0x08,    3 /* Private */,
       5,    0,   48,    2, 0x08,    4 /* Private */,
       6,    1,   49,    2, 0x08,    5 /* Private */,
       7,    1,   52,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject gl3dOptimXflView::staticMetaObject = { {
    QMetaObject::SuperData::link<gl3dPlaneXflView::staticMetaObject>(),
    qt_meta_stringdata_gl3dOptimXflView.offsetsAndSizes,
    qt_meta_data_gl3dOptimXflView,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_gl3dOptimXflView_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<gl3dOptimXflView, std::true_type>,
        // method 'onCp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onGamma'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSigma'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onContours'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onSections'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void gl3dOptimXflView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<gl3dOptimXflView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onCp((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->onGamma(); break;
        case 2: _t->onSigma(); break;
        case 3: _t->onContours((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->onSections((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *gl3dOptimXflView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gl3dOptimXflView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gl3dOptimXflView.stringdata0))
        return static_cast<void*>(this);
    return gl3dPlaneXflView::qt_metacast(_clname);
}

int gl3dOptimXflView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = gl3dPlaneXflView::qt_metacall(_c, _id, _a);
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
