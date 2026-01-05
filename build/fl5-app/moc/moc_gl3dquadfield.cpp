/****************************************************************************
** Meta object code from reading C++ file 'gl3dquadfield.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/test/test3d/gl3dquadfield.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gl3dquadfield.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_gl3dQuadField_t {
    uint offsetsAndSizes[20];
    char stringdata0[14];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[11];
    char stringdata5[16];
    char stringdata6[4];
    char stringdata7[15];
    char stringdata8[9];
    char stringdata9[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_gl3dQuadField_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_gl3dQuadField_t qt_meta_stringdata_gl3dQuadField = {
    {
        QT_MOC_LITERAL(0, 13),  // "gl3dQuadField"
        QT_MOC_LITERAL(14, 11),  // "onRefLength"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 10),  // "onVelScale"
        QT_MOC_LITERAL(38, 10),  // "onMakeView"
        QT_MOC_LITERAL(49, 15),  // "onPlanePosition"
        QT_MOC_LITERAL(65, 3),  // "pos"
        QT_MOC_LITERAL(69, 14),  // "onContourPlane"
        QT_MOC_LITERAL(84, 8),  // "bChecked"
        QT_MOC_LITERAL(93, 13)   // "onLegendScale"
    },
    "gl3dQuadField",
    "onRefLength",
    "",
    "onVelScale",
    "onMakeView",
    "onPlanePosition",
    "pos",
    "onContourPlane",
    "bChecked",
    "onLegendScale"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_gl3dQuadField[] = {

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
       5,    1,   53,    2, 0x08,    4 /* Private */,
       7,    1,   56,    2, 0x08,    6 /* Private */,
       9,    0,   59,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject gl3dQuadField::staticMetaObject = { {
    QMetaObject::SuperData::link<gl3dXflView::staticMetaObject>(),
    qt_meta_stringdata_gl3dQuadField.offsetsAndSizes,
    qt_meta_data_gl3dQuadField,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_gl3dQuadField_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<gl3dQuadField, std::true_type>,
        // method 'onRefLength'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onVelScale'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMakeView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onPlanePosition'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onContourPlane'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onLegendScale'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void gl3dQuadField::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<gl3dQuadField *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onRefLength(); break;
        case 1: _t->onVelScale(); break;
        case 2: _t->onMakeView(); break;
        case 3: _t->onPlanePosition((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->onContourPlane((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->onLegendScale(); break;
        default: ;
        }
    }
}

const QMetaObject *gl3dQuadField::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gl3dQuadField::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gl3dQuadField.stringdata0))
        return static_cast<void*>(this);
    return gl3dXflView::qt_metacast(_clname);
}

int gl3dQuadField::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
