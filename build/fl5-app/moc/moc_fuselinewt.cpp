/****************************************************************************
** Meta object code from reading C++ file 'fuselinewt.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/editors/fuseedit/xflfuseedit/fuselinewt.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fuselinewt.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_FuseLineWt_t {
    uint offsetsAndSizes[24];
    char stringdata0[11];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[14];
    char stringdata5[12];
    char stringdata6[9];
    char stringdata7[12];
    char stringdata8[11];
    char stringdata9[11];
    char stringdata10[12];
    char stringdata11[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_FuseLineWt_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_FuseLineWt_t qt_meta_stringdata_FuseLineWt = {
    {
        QT_MOC_LITERAL(0, 10),  // "FuseLineWt"
        QT_MOC_LITERAL(11, 9),  // "scaleFuse"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 10),  // "bFrameOnly"
        QT_MOC_LITERAL(33, 13),  // "translateFuse"
        QT_MOC_LITERAL(47, 11),  // "insertFrame"
        QT_MOC_LITERAL(59, 8),  // "Vector3d"
        QT_MOC_LITERAL(68, 11),  // "removeFrame"
        QT_MOC_LITERAL(80, 10),  // "onInsertPt"
        QT_MOC_LITERAL(91, 10),  // "onRemovePt"
        QT_MOC_LITERAL(102, 11),  // "onScaleBody"
        QT_MOC_LITERAL(114, 15)   // "onTranslateBody"
    },
    "FuseLineWt",
    "scaleFuse",
    "",
    "bFrameOnly",
    "translateFuse",
    "insertFrame",
    "Vector3d",
    "removeFrame",
    "onInsertPt",
    "onRemovePt",
    "onScaleBody",
    "onTranslateBody"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_FuseLineWt[] = {

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
       4,    0,   65,    2, 0x06,    3 /* Public */,
       5,    1,   66,    2, 0x06,    4 /* Public */,
       7,    1,   69,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   72,    2, 0x08,    8 /* Private */,
       9,    0,   73,    2, 0x08,    9 /* Private */,
      10,    0,   74,    2, 0x08,   10 /* Private */,
      11,    0,   75,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject FuseLineWt::staticMetaObject = { {
    QMetaObject::SuperData::link<Section2dWt::staticMetaObject>(),
    qt_meta_stringdata_FuseLineWt.offsetsAndSizes,
    qt_meta_data_FuseLineWt,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_FuseLineWt_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FuseLineWt, std::true_type>,
        // method 'scaleFuse'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'translateFuse'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'insertFrame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Vector3d, std::false_type>,
        // method 'removeFrame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onInsertPt'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRemovePt'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onScaleBody'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTranslateBody'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void FuseLineWt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FuseLineWt *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->scaleFuse((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->translateFuse(); break;
        case 2: _t->insertFrame((*reinterpret_cast< std::add_pointer_t<Vector3d>>(_a[1]))); break;
        case 3: _t->removeFrame((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->onInsertPt(); break;
        case 5: _t->onRemovePt(); break;
        case 6: _t->onScaleBody(); break;
        case 7: _t->onTranslateBody(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FuseLineWt::*)(bool );
            if (_t _q_method = &FuseLineWt::scaleFuse; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FuseLineWt::*)();
            if (_t _q_method = &FuseLineWt::translateFuse; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FuseLineWt::*)(Vector3d );
            if (_t _q_method = &FuseLineWt::insertFrame; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FuseLineWt::*)(int );
            if (_t _q_method = &FuseLineWt::removeFrame; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *FuseLineWt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FuseLineWt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FuseLineWt.stringdata0))
        return static_cast<void*>(this);
    return Section2dWt::qt_metacast(_clname);
}

int FuseLineWt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void FuseLineWt::scaleFuse(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FuseLineWt::translateFuse()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FuseLineWt::insertFrame(Vector3d _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FuseLineWt::removeFrame(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
