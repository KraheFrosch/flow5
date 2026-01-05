/****************************************************************************
** Meta object code from reading C++ file 'fuseframewt.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/editors/fuseedit/xflfuseedit/fuseframewt.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fuseframewt.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_FuseFrameWt_t {
    uint offsetsAndSizes[24];
    char stringdata0[12];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[12];
    char stringdata5[9];
    char stringdata6[12];
    char stringdata7[14];
    char stringdata8[11];
    char stringdata9[11];
    char stringdata10[13];
    char stringdata11[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_FuseFrameWt_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_FuseFrameWt_t qt_meta_stringdata_FuseFrameWt = {
    {
        QT_MOC_LITERAL(0, 11),  // "FuseFrameWt"
        QT_MOC_LITERAL(12, 9),  // "scaleBody"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 10),  // "bFrameOnly"
        QT_MOC_LITERAL(34, 11),  // "insertPoint"
        QT_MOC_LITERAL(46, 8),  // "Vector3d"
        QT_MOC_LITERAL(55, 11),  // "removePoint"
        QT_MOC_LITERAL(67, 13),  // "frameSelected"
        QT_MOC_LITERAL(81, 10),  // "onInsertPt"
        QT_MOC_LITERAL(92, 10),  // "onRemovePt"
        QT_MOC_LITERAL(103, 12),  // "onScaleFrame"
        QT_MOC_LITERAL(116, 18)   // "onShowCurFrameOnly"
    },
    "FuseFrameWt",
    "scaleBody",
    "",
    "bFrameOnly",
    "insertPoint",
    "Vector3d",
    "removePoint",
    "frameSelected",
    "onInsertPt",
    "onRemovePt",
    "onScaleFrame",
    "onShowCurFrameOnly"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_FuseFrameWt[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    1 /* Public */,
       4,    1,   65,    2, 0x06,    3 /* Public */,
       6,    1,   68,    2, 0x06,    5 /* Public */,
       7,    1,   71,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   74,    2, 0x08,    9 /* Private */,
       9,    0,   75,    2, 0x08,   10 /* Private */,
      10,    0,   76,    2, 0x08,   11 /* Private */,
      11,    0,   77,    2, 0x08,   12 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject FuseFrameWt::staticMetaObject = { {
    QMetaObject::SuperData::link<Section2dWt::staticMetaObject>(),
    qt_meta_stringdata_FuseFrameWt.offsetsAndSizes,
    qt_meta_data_FuseFrameWt,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_FuseFrameWt_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FuseFrameWt, std::true_type>,
        // method 'scaleBody'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'insertPoint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Vector3d, std::false_type>,
        // method 'removePoint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'frameSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onInsertPt'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRemovePt'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onScaleFrame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onShowCurFrameOnly'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void FuseFrameWt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FuseFrameWt *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->scaleBody((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->insertPoint((*reinterpret_cast< std::add_pointer_t<Vector3d>>(_a[1]))); break;
        case 2: _t->removePoint((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->frameSelected((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->onInsertPt(); break;
        case 5: _t->onRemovePt(); break;
        case 6: _t->onScaleFrame(); break;
        case 7: _t->onShowCurFrameOnly(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FuseFrameWt::*)(bool );
            if (_t _q_method = &FuseFrameWt::scaleBody; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FuseFrameWt::*)(Vector3d );
            if (_t _q_method = &FuseFrameWt::insertPoint; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FuseFrameWt::*)(int );
            if (_t _q_method = &FuseFrameWt::removePoint; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FuseFrameWt::*)(int );
            if (_t _q_method = &FuseFrameWt::frameSelected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *FuseFrameWt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FuseFrameWt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FuseFrameWt.stringdata0))
        return static_cast<void*>(this);
    return Section2dWt::qt_metacast(_clname);
}

int FuseFrameWt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Section2dWt::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void FuseFrameWt::scaleBody(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FuseFrameWt::insertPoint(Vector3d _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FuseFrameWt::removePoint(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FuseFrameWt::frameSelected(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
