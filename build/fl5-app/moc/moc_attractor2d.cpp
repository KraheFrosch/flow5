/****************************************************************************
** Meta object code from reading C++ file 'attractor2d.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/test/tests/attractor2d.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'attractor2d.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_Attractor2d_t {
    uint offsetsAndSizes[22];
    char stringdata0[12];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[11];
    char stringdata5[8];
    char stringdata6[10];
    char stringdata7[10];
    char stringdata8[10];
    char stringdata9[15];
    char stringdata10[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Attractor2d_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Attractor2d_t qt_meta_stringdata_Attractor2d = {
    {
        QT_MOC_LITERAL(0, 11),  // "Attractor2d"
        QT_MOC_LITERAL(12, 12),  // "taskFinished"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 12),  // "onBackground"
        QT_MOC_LITERAL(39, 10),  // "onContinue"
        QT_MOC_LITERAL(50, 7),  // "onClear"
        QT_MOC_LITERAL(58, 9),  // "onSaveImg"
        QT_MOC_LITERAL(68, 9),  // "onOpenImg"
        QT_MOC_LITERAL(78, 9),  // "updateImg"
        QT_MOC_LITERAL(88, 14),  // "onTaskFinished"
        QT_MOC_LITERAL(103, 13)   // "onResizeImage"
    },
    "Attractor2d",
    "taskFinished",
    "",
    "onBackground",
    "onContinue",
    "onClear",
    "onSaveImg",
    "onOpenImg",
    "updateImg",
    "onTaskFinished",
    "onResizeImage"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Attractor2d[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   69,    2, 0x08,    2 /* Private */,
       4,    0,   70,    2, 0x08,    3 /* Private */,
       5,    0,   71,    2, 0x08,    4 /* Private */,
       6,    0,   72,    2, 0x08,    5 /* Private */,
       7,    0,   73,    2, 0x08,    6 /* Private */,
       8,    0,   74,    2, 0x08,    7 /* Private */,
       9,    0,   75,    2, 0x08,    8 /* Private */,
      10,    0,   76,    2, 0x08,    9 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Attractor2d::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Attractor2d.offsetsAndSizes,
    qt_meta_data_Attractor2d,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Attractor2d_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Attractor2d, std::true_type>,
        // method 'taskFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onBackground'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onContinue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onClear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSaveImg'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onOpenImg'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateImg'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTaskFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onResizeImage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Attractor2d::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Attractor2d *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->taskFinished(); break;
        case 1: _t->onBackground(); break;
        case 2: _t->onContinue(); break;
        case 3: _t->onClear(); break;
        case 4: _t->onSaveImg(); break;
        case 5: _t->onOpenImg(); break;
        case 6: _t->updateImg(); break;
        case 7: _t->onTaskFinished(); break;
        case 8: _t->onResizeImage(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Attractor2d::*)();
            if (_t _q_method = &Attractor2d::taskFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *Attractor2d::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Attractor2d::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Attractor2d.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Attractor2d::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Attractor2d::taskFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
