/****************************************************************************
** Meta object code from reading C++ file 'afmesher.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/mesh/afmesher.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'afmesher.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_AFMesher_t {
    uint offsetsAndSizes[12];
    char stringdata0[9];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[18];
    char stringdata5[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_AFMesher_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_AFMesher_t qt_meta_stringdata_AFMesher = {
    {
        QT_MOC_LITERAL(0, 8),  // "AFMesher"
        QT_MOC_LITERAL(9, 12),  // "meshFinished"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 11),  // "animateMesh"
        QT_MOC_LITERAL(35, 17),  // "triangulateShells"
        QT_MOC_LITERAL(53, 16)   // "makeThinSailMesh"
    },
    "AFMesher",
    "meshFinished",
    "",
    "animateMesh",
    "triangulateShells",
    "makeThinSailMesh"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_AFMesher[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    1 /* Public */,
       3,    0,   39,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   40,    2, 0x0a,    3 /* Public */,
       5,    0,   41,    2, 0x0a,    4 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool,

       0        // eod
};

Q_CONSTINIT const QMetaObject AFMesher::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AFMesher.offsetsAndSizes,
    qt_meta_data_AFMesher,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_AFMesher_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AFMesher, std::true_type>,
        // method 'meshFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'animateMesh'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'triangulateShells'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'makeThinSailMesh'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void AFMesher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AFMesher *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->meshFinished(); break;
        case 1: _t->animateMesh(); break;
        case 2: _t->triangulateShells(); break;
        case 3: { bool _r = _t->makeThinSailMesh();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AFMesher::*)();
            if (_t _q_method = &AFMesher::meshFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AFMesher::*)();
            if (_t _q_method = &AFMesher::animateMesh; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *AFMesher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AFMesher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AFMesher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AFMesher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void AFMesher::meshFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AFMesher::animateMesh()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
