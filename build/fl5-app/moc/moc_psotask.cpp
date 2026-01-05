/****************************************************************************
** Meta object code from reading C++ file 'psotask.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/optim/psotask.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'psotask.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_PSOTask_t {
    uint offsetsAndSizes[16];
    char stringdata0[8];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[14];
    char stringdata5[20];
    char stringdata6[18];
    char stringdata7[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_PSOTask_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_PSOTask_t qt_meta_stringdata_PSOTask = {
    {
        QT_MOC_LITERAL(0, 7),  // "PSOTask"
        QT_MOC_LITERAL(8, 9),  // "iterEvent"
        QT_MOC_LITERAL(18, 0),  // ""
        QT_MOC_LITERAL(19, 11),  // "OptimEvent*"
        QT_MOC_LITERAL(31, 13),  // "outputMessage"
        QT_MOC_LITERAL(45, 19),  // "onMakeParticleSwarm"
        QT_MOC_LITERAL(65, 17),  // "onStartIterations"
        QT_MOC_LITERAL(83, 11)   // "onIteration"
    },
    "PSOTask",
    "iterEvent",
    "",
    "OptimEvent*",
    "outputMessage",
    "onMakeParticleSwarm",
    "onStartIterations",
    "onIteration"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_PSOTask[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,
       4,    1,   47,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   50,    2, 0x0a,    5 /* Public */,
       6,    0,   51,    2, 0x0a,    6 /* Public */,
       7,    0,   52,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject PSOTask::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PSOTask.offsetsAndSizes,
    qt_meta_data_PSOTask,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_PSOTask_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PSOTask, std::true_type>,
        // method 'iterEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OptimEvent *, std::false_type>,
        // method 'outputMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        // method 'onMakeParticleSwarm'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onStartIterations'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onIteration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void PSOTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PSOTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->iterEvent((*reinterpret_cast< std::add_pointer_t<OptimEvent*>>(_a[1]))); break;
        case 1: _t->outputMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->onMakeParticleSwarm(); break;
        case 3: _t->onStartIterations(); break;
        case 4: _t->onIteration(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PSOTask::*)(OptimEvent * );
            if (_t _q_method = &PSOTask::iterEvent; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PSOTask::*)(QString const & );
            if (_t _q_method = &PSOTask::outputMessage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *PSOTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PSOTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PSOTask.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PSOTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void PSOTask::iterEvent(OptimEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PSOTask::outputMessage(QString const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
