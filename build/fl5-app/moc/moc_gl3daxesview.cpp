/****************************************************************************
** Meta object code from reading C++ file 'gl3daxesview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/test/test3d/gl3daxesview.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gl3daxesview.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_gl3dAxesView_t {
    uint offsetsAndSizes[16];
    char stringdata0[13];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[16];
    char stringdata5[16];
    char stringdata6[16];
    char stringdata7[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_gl3dAxesView_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_gl3dAxesView_t qt_meta_stringdata_gl3dAxesView = {
    {
        QT_MOC_LITERAL(0, 12),  // "gl3dAxesView"
        QT_MOC_LITERAL(13, 9),  // "onConvert"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 12),  // "onUpdateAxes"
        QT_MOC_LITERAL(37, 15),  // "onWindVecsStyle"
        QT_MOC_LITERAL(53, 15),  // "onBodyLineStyle"
        QT_MOC_LITERAL(69, 15),  // "onWindLineStyle"
        QT_MOC_LITERAL(85, 15)   // "onStabLineStyle"
    },
    "gl3dAxesView",
    "onConvert",
    "",
    "onUpdateAxes",
    "onWindVecsStyle",
    "onBodyLineStyle",
    "onWindLineStyle",
    "onStabLineStyle"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_gl3dAxesView[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    0,   54,    2, 0x08,    5 /* Private */,
       7,    0,   55,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject gl3dAxesView::staticMetaObject = { {
    QMetaObject::SuperData::link<gl3dXflView::staticMetaObject>(),
    qt_meta_stringdata_gl3dAxesView.offsetsAndSizes,
    qt_meta_data_gl3dAxesView,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_gl3dAxesView_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<gl3dAxesView, std::true_type>,
        // method 'onConvert'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onUpdateAxes'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onWindVecsStyle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onBodyLineStyle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onWindLineStyle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onStabLineStyle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void gl3dAxesView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<gl3dAxesView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onConvert(); break;
        case 1: _t->onUpdateAxes(); break;
        case 2: _t->onWindVecsStyle(); break;
        case 3: _t->onBodyLineStyle(); break;
        case 4: _t->onWindLineStyle(); break;
        case 5: _t->onStabLineStyle(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *gl3dAxesView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gl3dAxesView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gl3dAxesView.stringdata0))
        return static_cast<void*>(this);
    return gl3dXflView::qt_metacast(_clname);
}

int gl3dAxesView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = gl3dXflView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
