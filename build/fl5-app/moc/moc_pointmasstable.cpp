/****************************************************************************
** Meta object code from reading C++ file 'pointmasstable.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/editors/inertia/pointmasstable.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pointmasstable.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_PointMassTable_t {
    uint offsetsAndSizes[26];
    char stringdata0[15];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[18];
    char stringdata5[16];
    char stringdata6[19];
    char stringdata7[19];
    char stringdata8[12];
    char stringdata9[23];
    char stringdata10[9];
    char stringdata11[9];
    char stringdata12[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_PointMassTable_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_PointMassTable_t qt_meta_stringdata_PointMassTable = {
    {
        QT_MOC_LITERAL(0, 14),  // "PointMassTable"
        QT_MOC_LITERAL(15, 16),  // "pointMassChanged"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 18),  // "onInsertMassBefore"
        QT_MOC_LITERAL(52, 17),  // "onInsertMassAfter"
        QT_MOC_LITERAL(70, 15),  // "onDeleteMassRow"
        QT_MOC_LITERAL(86, 18),  // "onDuplicateMassRow"
        QT_MOC_LITERAL(105, 18),  // "onMassTableClicked"
        QT_MOC_LITERAL(124, 11),  // "QModelIndex"
        QT_MOC_LITERAL(136, 22),  // "onPointMassCellChanged"
        QT_MOC_LITERAL(159, 8),  // "QWidget*"
        QT_MOC_LITERAL(168, 8),  // "onMoveUp"
        QT_MOC_LITERAL(177, 10)   // "onMoveDown"
    },
    "PointMassTable",
    "pointMassChanged",
    "",
    "onInsertMassBefore",
    "onInsertMassAfter",
    "onDeleteMassRow",
    "onDuplicateMassRow",
    "onMassTableClicked",
    "QModelIndex",
    "onPointMassCellChanged",
    "QWidget*",
    "onMoveUp",
    "onMoveDown"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_PointMassTable[] = {

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
       7,    1,   73,    2, 0x08,    6 /* Private */,
       9,    1,   76,    2, 0x08,    8 /* Private */,
      11,    0,   79,    2, 0x08,   10 /* Private */,
      12,    0,   80,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject PointMassTable::staticMetaObject = { {
    QMetaObject::SuperData::link<CPTableView::staticMetaObject>(),
    qt_meta_stringdata_PointMassTable.offsetsAndSizes,
    qt_meta_data_PointMassTable,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_PointMassTable_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PointMassTable, std::true_type>,
        // method 'pointMassChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onInsertMassBefore'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onInsertMassAfter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDeleteMassRow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDuplicateMassRow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMassTableClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        // method 'onPointMassCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        // method 'onMoveUp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMoveDown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void PointMassTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PointMassTable *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pointMassChanged(); break;
        case 1: _t->onInsertMassBefore(); break;
        case 2: _t->onInsertMassAfter(); break;
        case 3: _t->onDeleteMassRow(); break;
        case 4: _t->onDuplicateMassRow(); break;
        case 5: _t->onMassTableClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 6: _t->onPointMassCellChanged((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 7: _t->onMoveUp(); break;
        case 8: _t->onMoveDown(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PointMassTable::*)();
            if (_t _q_method = &PointMassTable::pointMassChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *PointMassTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PointMassTable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PointMassTable.stringdata0))
        return static_cast<void*>(this);
    return CPTableView::qt_metacast(_clname);
}

int PointMassTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CPTableView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void PointMassTable::pointMassChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
