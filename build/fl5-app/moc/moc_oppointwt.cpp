/****************************************************************************
** Meta object code from reading C++ file 'oppointwt.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/modules/xdirect/view2d/oppointwt.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'oppointwt.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_OpPointWt_t {
    uint offsetsAndSizes[26];
    char stringdata0[10];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[13];
    char stringdata5[7];
    char stringdata6[19];
    char stringdata7[18];
    char stringdata8[17];
    char stringdata9[16];
    char stringdata10[10];
    char stringdata11[19];
    char stringdata12[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_OpPointWt_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_OpPointWt_t qt_meta_stringdata_OpPointWt = {
    {
        QT_MOC_LITERAL(0, 9),  // "OpPointWt"
        QT_MOC_LITERAL(10, 12),  // "graphChanged"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 6),  // "Graph*"
        QT_MOC_LITERAL(31, 12),  // "curveClicked"
        QT_MOC_LITERAL(44, 6),  // "Curve*"
        QT_MOC_LITERAL(51, 18),  // "curveDoubleClicked"
        QT_MOC_LITERAL(70, 17),  // "onShowNeutralLine"
        QT_MOC_LITERAL(88, 16),  // "onResetFoilScale"
        QT_MOC_LITERAL(105, 15),  // "onGraphSettings"
        QT_MOC_LITERAL(121, 9),  // "onHovered"
        QT_MOC_LITERAL(131, 18),  // "onDynamicIncrement"
        QT_MOC_LITERAL(150, 16)   // "onResetIncrement"
    },
    "OpPointWt",
    "graphChanged",
    "",
    "Graph*",
    "curveClicked",
    "Curve*",
    "curveDoubleClicked",
    "onShowNeutralLine",
    "onResetFoilScale",
    "onGraphSettings",
    "onHovered",
    "onDynamicIncrement",
    "onResetIncrement"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_OpPointWt[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,    1 /* Public */,
       4,    1,   71,    2, 0x06,    3 /* Public */,
       6,    1,   74,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   77,    2, 0x0a,    7 /* Public */,
       8,    0,   78,    2, 0x0a,    8 /* Public */,
       9,    0,   79,    2, 0x0a,    9 /* Public */,
      10,    0,   80,    2, 0x0a,   10 /* Public */,
      11,    0,   81,    2, 0x0a,   11 /* Public */,
      12,    0,   82,    2, 0x0a,   12 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 5,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject OpPointWt::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_OpPointWt.offsetsAndSizes,
    qt_meta_data_OpPointWt,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_OpPointWt_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<OpPointWt, std::true_type>,
        // method 'graphChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Graph *, std::false_type>,
        // method 'curveClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Curve *, std::false_type>,
        // method 'curveDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Curve *, std::false_type>,
        // method 'onShowNeutralLine'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onResetFoilScale'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onGraphSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onHovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDynamicIncrement'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onResetIncrement'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OpPointWt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OpPointWt *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->graphChanged((*reinterpret_cast< std::add_pointer_t<Graph*>>(_a[1]))); break;
        case 1: _t->curveClicked((*reinterpret_cast< std::add_pointer_t<Curve*>>(_a[1]))); break;
        case 2: _t->curveDoubleClicked((*reinterpret_cast< std::add_pointer_t<Curve*>>(_a[1]))); break;
        case 3: _t->onShowNeutralLine(); break;
        case 4: _t->onResetFoilScale(); break;
        case 5: _t->onGraphSettings(); break;
        case 6: _t->onHovered(); break;
        case 7: _t->onDynamicIncrement(); break;
        case 8: _t->onResetIncrement(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OpPointWt::*)(Graph * );
            if (_t _q_method = &OpPointWt::graphChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OpPointWt::*)(Curve * );
            if (_t _q_method = &OpPointWt::curveClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (OpPointWt::*)(Curve * );
            if (_t _q_method = &OpPointWt::curveDoubleClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *OpPointWt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpPointWt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpPointWt.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int OpPointWt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void OpPointWt::graphChanged(Graph * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OpPointWt::curveClicked(Curve * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OpPointWt::curveDoubleClicked(Curve * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
