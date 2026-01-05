/****************************************************************************
** Meta object code from reading C++ file 'splinectrl.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/controls/splinectrl/splinectrl.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'splinectrl.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_SplineCtrl_t {
    uint offsetsAndSizes[36];
    char stringdata0[11];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[15];
    char stringdata5[13];
    char stringdata6[11];
    char stringdata7[24];
    char stringdata8[12];
    char stringdata9[6];
    char stringdata10[20];
    char stringdata11[9];
    char stringdata12[17];
    char stringdata13[14];
    char stringdata14[15];
    char stringdata15[14];
    char stringdata16[10];
    char stringdata17[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_SplineCtrl_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_SplineCtrl_t qt_meta_stringdata_SplineCtrl = {
    {
        QT_MOC_LITERAL(0, 10),  // "SplineCtrl"
        QT_MOC_LITERAL(11, 13),  // "splineChanged"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 15),  // "pointSelChanged"
        QT_MOC_LITERAL(42, 14),  // "fillPointModel"
        QT_MOC_LITERAL(57, 12),  // "onBunchSlide"
        QT_MOC_LITERAL(70, 10),  // "onClosedTE"
        QT_MOC_LITERAL(81, 23),  // "onCtrlPointTableClicked"
        QT_MOC_LITERAL(105, 11),  // "QModelIndex"
        QT_MOC_LITERAL(117, 5),  // "index"
        QT_MOC_LITERAL(123, 19),  // "onCurrentRowChanged"
        QT_MOC_LITERAL(143, 8),  // "onDelete"
        QT_MOC_LITERAL(152, 16),  // "onForcesymmetric"
        QT_MOC_LITERAL(169, 13),  // "onInsertAfter"
        QT_MOC_LITERAL(183, 14),  // "onInsertBefore"
        QT_MOC_LITERAL(198, 13),  // "onSplineStyle"
        QT_MOC_LITERAL(212, 9),  // "LineStyle"
        QT_MOC_LITERAL(222, 8)   // "onUpdate"
    },
    "SplineCtrl",
    "splineChanged",
    "",
    "pointSelChanged",
    "fillPointModel",
    "onBunchSlide",
    "onClosedTE",
    "onCtrlPointTableClicked",
    "QModelIndex",
    "index",
    "onCurrentRowChanged",
    "onDelete",
    "onForcesymmetric",
    "onInsertAfter",
    "onInsertBefore",
    "onSplineStyle",
    "LineStyle",
    "onUpdate"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_SplineCtrl[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x06,    1 /* Public */,
       3,    0,   93,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   94,    2, 0x0a,    3 /* Public */,
       5,    1,   95,    2, 0x09,    4 /* Protected */,
       6,    0,   98,    2, 0x09,    6 /* Protected */,
       7,    1,   99,    2, 0x09,    7 /* Protected */,
      10,    2,  102,    2, 0x09,    9 /* Protected */,
      11,    0,  107,    2, 0x09,   12 /* Protected */,
      12,    0,  108,    2, 0x09,   13 /* Protected */,
      13,    0,  109,    2, 0x09,   14 /* Protected */,
      14,    0,  110,    2, 0x09,   15 /* Protected */,
      15,    1,  111,    2, 0x09,   16 /* Protected */,
      17,    0,  114,    2, 0x09,   18 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 8,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,    2,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject SplineCtrl::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_SplineCtrl.offsetsAndSizes,
    qt_meta_data_SplineCtrl,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_SplineCtrl_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SplineCtrl, std::true_type>,
        // method 'splineChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pointSelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fillPointModel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onBunchSlide'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onClosedTE'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCtrlPointTableClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        // method 'onCurrentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        // method 'onDelete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onForcesymmetric'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onInsertAfter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onInsertBefore'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSplineStyle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<LineStyle, std::false_type>,
        // method 'onUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SplineCtrl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SplineCtrl *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->splineChanged(); break;
        case 1: _t->pointSelChanged(); break;
        case 2: _t->fillPointModel(); break;
        case 3: _t->onBunchSlide((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->onClosedTE(); break;
        case 5: _t->onCtrlPointTableClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 6: _t->onCurrentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 7: _t->onDelete(); break;
        case 8: _t->onForcesymmetric(); break;
        case 9: _t->onInsertAfter(); break;
        case 10: _t->onInsertBefore(); break;
        case 11: _t->onSplineStyle((*reinterpret_cast< std::add_pointer_t<LineStyle>>(_a[1]))); break;
        case 12: _t->onUpdate(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LineStyle >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SplineCtrl::*)();
            if (_t _q_method = &SplineCtrl::splineChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SplineCtrl::*)();
            if (_t _q_method = &SplineCtrl::pointSelChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *SplineCtrl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SplineCtrl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SplineCtrl.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int SplineCtrl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void SplineCtrl::splineChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SplineCtrl::pointSelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
