/****************************************************************************
** Meta object code from reading C++ file 'streamlinesctrls.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/controls/poppctrls/streamlinesctrls.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'streamlinesctrls.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_StreamLineCtrls_t {
    uint offsetsAndSizes[14];
    char stringdata0[16];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[14];
    char stringdata5[14];
    char stringdata6[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_StreamLineCtrls_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_StreamLineCtrls_t qt_meta_stringdata_StreamLineCtrls = {
    {
        QT_MOC_LITERAL(0, 15),  // "StreamLineCtrls"
        QT_MOC_LITERAL(16, 19),  // "update3dStreamlines"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 17),  // "onCalcStreamlines"
        QT_MOC_LITERAL(55, 13),  // "onStreamStyle"
        QT_MOC_LITERAL(69, 13),  // "onFloatOffset"
        QT_MOC_LITERAL(83, 14)   // "onSliderOffset"
    },
    "StreamLineCtrls",
    "update3dStreamlines",
    "",
    "onCalcStreamlines",
    "onStreamStyle",
    "onFloatOffset",
    "onSliderOffset"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_StreamLineCtrls[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    0,   47,    2, 0x08,    4 /* Private */,
       6,    0,   48,    2, 0x08,    5 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject StreamLineCtrls::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_StreamLineCtrls.offsetsAndSizes,
    qt_meta_data_StreamLineCtrls,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_StreamLineCtrls_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<StreamLineCtrls, std::true_type>,
        // method 'update3dStreamlines'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCalcStreamlines'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onStreamStyle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFloatOffset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSliderOffset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void StreamLineCtrls::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StreamLineCtrls *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->update3dStreamlines(); break;
        case 1: _t->onCalcStreamlines(); break;
        case 2: _t->onStreamStyle(); break;
        case 3: _t->onFloatOffset(); break;
        case 4: _t->onSliderOffset(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StreamLineCtrls::*)();
            if (_t _q_method = &StreamLineCtrls::update3dStreamlines; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *StreamLineCtrls::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StreamLineCtrls::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StreamLineCtrls.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int StreamLineCtrls::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void StreamLineCtrls::update3dStreamlines()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
