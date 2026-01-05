/****************************************************************************
** Meta object code from reading C++ file 'gmesherwt.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/mesh/gmesherwt.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gmesherwt.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_GMesherWt_t {
    uint offsetsAndSizes[20];
    char stringdata0[10];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[10];
    char stringdata5[14];
    char stringdata6[20];
    char stringdata7[7];
    char stringdata8[17];
    char stringdata9[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_GMesherWt_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_GMesherWt_t qt_meta_stringdata_GMesherWt = {
    {
        QT_MOC_LITERAL(0, 9),  // "GMesherWt"
        QT_MOC_LITERAL(10, 11),  // "meshCurrent"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 14),  // "updateFuseView"
        QT_MOC_LITERAL(38, 9),  // "outputMsg"
        QT_MOC_LITERAL(48, 13),  // "onCheckLogger"
        QT_MOC_LITERAL(62, 19),  // "onHandleMeshResults"
        QT_MOC_LITERAL(82, 6),  // "bError"
        QT_MOC_LITERAL(89, 16),  // "onKillMeshThread"
        QT_MOC_LITERAL(106, 6)   // "onMesh"
    },
    "GMesherWt",
    "meshCurrent",
    "",
    "updateFuseView",
    "outputMsg",
    "onCheckLogger",
    "onHandleMeshResults",
    "bError",
    "onKillMeshThread",
    "onMesh"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_GMesherWt[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    1 /* Public */,
       3,    0,   57,    2, 0x06,    2 /* Public */,
       4,    1,   58,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   61,    2, 0x08,    5 /* Private */,
       6,    1,   62,    2, 0x08,    6 /* Private */,
       8,    0,   65,    2, 0x08,    8 /* Private */,
       9,    0,   66,    2, 0x08,    9 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject GMesherWt::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_GMesherWt.offsetsAndSizes,
    qt_meta_data_GMesherWt,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_GMesherWt_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GMesherWt, std::true_type>,
        // method 'meshCurrent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateFuseView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'outputMsg'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onCheckLogger'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onHandleMeshResults'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onKillMeshThread'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMesh'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void GMesherWt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GMesherWt *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->meshCurrent(); break;
        case 1: _t->updateFuseView(); break;
        case 2: _t->outputMsg((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->onCheckLogger(); break;
        case 4: _t->onHandleMeshResults((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->onKillMeshThread(); break;
        case 6: _t->onMesh(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GMesherWt::*)();
            if (_t _q_method = &GMesherWt::meshCurrent; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GMesherWt::*)();
            if (_t _q_method = &GMesherWt::updateFuseView; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GMesherWt::*)(QString );
            if (_t _q_method = &GMesherWt::outputMsg; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *GMesherWt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GMesherWt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GMesherWt.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int GMesherWt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void GMesherWt::meshCurrent()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void GMesherWt::updateFuseView()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void GMesherWt::outputMsg(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
