/****************************************************************************
** Meta object code from reading C++ file 'crossflowctrls.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/controls/poppctrls/crossflowctrls.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'crossflowctrls.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CrossFlowCtrls_t {
    uint offsetsAndSizes[12];
    char stringdata0[15];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[21];
    char stringdata5[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CrossFlowCtrls_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CrossFlowCtrls_t qt_meta_stringdata_CrossFlowCtrls = {
    {
        QT_MOC_LITERAL(0, 14),  // "CrossFlowCtrls"
        QT_MOC_LITERAL(15, 14),  // "update3dScales"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 10),  // "updateWake"
        QT_MOC_LITERAL(42, 20),  // "onMakeCrossFlowPlane"
        QT_MOC_LITERAL(63, 12)   // "onOmegaScale"
    },
    "CrossFlowCtrls",
    "update3dScales",
    "",
    "updateWake",
    "onMakeCrossFlowPlane",
    "onOmegaScale"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CrossFlowCtrls[] = {

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
       4,    0,   40,    2, 0x08,    3 /* Private */,
       5,    0,   41,    2, 0x08,    4 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject CrossFlowCtrls::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CrossFlowCtrls.offsetsAndSizes,
    qt_meta_data_CrossFlowCtrls,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CrossFlowCtrls_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CrossFlowCtrls, std::true_type>,
        // method 'update3dScales'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateWake'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMakeCrossFlowPlane'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onOmegaScale'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void CrossFlowCtrls::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CrossFlowCtrls *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->update3dScales(); break;
        case 1: _t->updateWake(); break;
        case 2: _t->onMakeCrossFlowPlane(); break;
        case 3: _t->onOmegaScale(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CrossFlowCtrls::*)();
            if (_t _q_method = &CrossFlowCtrls::update3dScales; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CrossFlowCtrls::*)();
            if (_t _q_method = &CrossFlowCtrls::updateWake; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *CrossFlowCtrls::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CrossFlowCtrls::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CrossFlowCtrls.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CrossFlowCtrls::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void CrossFlowCtrls::update3dScales()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CrossFlowCtrls::updateWake()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
