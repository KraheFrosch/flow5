/****************************************************************************
** Meta object code from reading C++ file 'xflexecutor.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/script/xflexecutor.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xflexecutor.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_XflExecutor_t {
    uint offsetsAndSizes[18];
    char stringdata0[12];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[11];
    char stringdata5[13];
    char stringdata6[12];
    char stringdata7[14];
    char stringdata8[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_XflExecutor_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_XflExecutor_t qt_meta_stringdata_XflExecutor = {
    {
        QT_MOC_LITERAL(0, 11),  // "XflExecutor"
        QT_MOC_LITERAL(12, 13),  // "outputMessage"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 3),  // "msg"
        QT_MOC_LITERAL(31, 10),  // "cancelTask"
        QT_MOC_LITERAL(42, 12),  // "taskFinished"
        QT_MOC_LITERAL(55, 11),  // "taskStarted"
        QT_MOC_LITERAL(67, 13),  // "onRunExecutor"
        QT_MOC_LITERAL(81, 8)   // "onCancel"
    },
    "XflExecutor",
    "outputMessage",
    "",
    "msg",
    "cancelTask",
    "taskFinished",
    "taskStarted",
    "onRunExecutor",
    "onCancel"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_XflExecutor[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x106,    1 /* Public | MethodIsConst  */,
       4,    0,   53,    2, 0x06,    3 /* Public */,
       5,    0,   54,    2, 0x06,    4 /* Public */,
       6,    1,   55,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   58,    2, 0x0a,    7 /* Public */,
       8,    0,   59,    2, 0x0a,    8 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject XflExecutor::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_XflExecutor.offsetsAndSizes,
    qt_meta_data_XflExecutor,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_XflExecutor_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<XflExecutor, std::true_type>,
        // method 'outputMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'cancelTask'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'taskFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'taskStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onRunExecutor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCancel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void XflExecutor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<XflExecutor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->outputMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->cancelTask(); break;
        case 2: _t->taskFinished(); break;
        case 3: _t->taskStarted((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->onRunExecutor(); break;
        case 5: _t->onCancel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (XflExecutor::*)(const QString & ) const;
            if (_t _q_method = &XflExecutor::outputMessage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (XflExecutor::*)();
            if (_t _q_method = &XflExecutor::cancelTask; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (XflExecutor::*)();
            if (_t _q_method = &XflExecutor::taskFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (XflExecutor::*)(int );
            if (_t _q_method = &XflExecutor::taskStarted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *XflExecutor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XflExecutor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_XflExecutor.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int XflExecutor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void XflExecutor::outputMessage(const QString & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< XflExecutor *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void XflExecutor::cancelTask()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void XflExecutor::taskFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void XflExecutor::taskStarted(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
