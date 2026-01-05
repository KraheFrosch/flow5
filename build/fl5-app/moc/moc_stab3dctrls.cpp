/****************************************************************************
** Meta object code from reading C++ file 'stab3dctrls.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/modules/xplane/controls/stab3dctrls.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stab3dctrls.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_Stab3dCtrls_t {
    uint offsetsAndSizes[14];
    char stringdata0[12];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[21];
    char stringdata5[4];
    char stringdata6[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Stab3dCtrls_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Stab3dCtrls_t qt_meta_stringdata_Stab3dCtrls = {
    {
        QT_MOC_LITERAL(0, 11),  // "Stab3dCtrls"
        QT_MOC_LITERAL(12, 13),  // "onAnimateMode"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 16),  // "onAnimateRestart"
        QT_MOC_LITERAL(44, 20),  // "onAnimationAmplitude"
        QT_MOC_LITERAL(65, 3),  // "val"
        QT_MOC_LITERAL(69, 15)   // "onModeSelection"
    },
    "Stab3dCtrls",
    "onAnimateMode",
    "",
    "onAnimateRestart",
    "onAnimationAmplitude",
    "val",
    "onModeSelection"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Stab3dCtrls[] = {

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

Q_CONSTINIT const QMetaObject Stab3dCtrls::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Stab3dCtrls.offsetsAndSizes,
    qt_meta_data_Stab3dCtrls,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Stab3dCtrls_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Stab3dCtrls, std::true_type>,
        // method 'onAnimateMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onAnimateRestart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onAnimationAmplitude'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onModeSelection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Stab3dCtrls::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Stab3dCtrls *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onAnimateMode(); break;
        case 1: _t->onAnimateRestart(); break;
        case 2: _t->onAnimationAmplitude((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->onModeSelection(); break;
        default: ;
        }
    }
}

const QMetaObject *Stab3dCtrls::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Stab3dCtrls::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Stab3dCtrls.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Stab3dCtrls::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
