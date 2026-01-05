/****************************************************************************
** Meta object code from reading C++ file 'graphtilectrls.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/graphs/controls/graphtilectrls.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphtilectrls.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_GraphTileCtrls_t {
    uint offsetsAndSizes[24];
    char stringdata0[15];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[6];
    char stringdata5[16];
    char stringdata6[9];
    char stringdata7[14];
    char stringdata8[15];
    char stringdata9[14];
    char stringdata10[9];
    char stringdata11[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_GraphTileCtrls_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_GraphTileCtrls_t qt_meta_stringdata_GraphTileCtrls = {
    {
        QT_MOC_LITERAL(0, 14),  // "GraphTileCtrls"
        QT_MOC_LITERAL(15, 19),  // "onCurrentRowChanged"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 11),  // "QModelIndex"
        QT_MOC_LITERAL(48, 5),  // "index"
        QT_MOC_LITERAL(54, 15),  // "onVarSetClicked"
        QT_MOC_LITERAL(70, 8),  // "onDelete"
        QT_MOC_LITERAL(79, 13),  // "onInsertAfter"
        QT_MOC_LITERAL(93, 14),  // "onInsertBefore"
        QT_MOC_LITERAL(108, 13),  // "onCellChanged"
        QT_MOC_LITERAL(122, 8),  // "onMoveUp"
        QT_MOC_LITERAL(131, 10)   // "onMoveDown"
    },
    "GraphTileCtrls",
    "onCurrentRowChanged",
    "",
    "QModelIndex",
    "index",
    "onVarSetClicked",
    "onDelete",
    "onInsertAfter",
    "onInsertBefore",
    "onCellChanged",
    "onMoveUp",
    "onMoveDown"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_GraphTileCtrls[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   62,    2, 0x09,    1 /* Protected */,
       5,    1,   67,    2, 0x09,    4 /* Protected */,
       6,    0,   70,    2, 0x09,    6 /* Protected */,
       7,    0,   71,    2, 0x09,    7 /* Protected */,
       8,    0,   72,    2, 0x09,    8 /* Protected */,
       9,    2,   73,    2, 0x09,    9 /* Protected */,
      10,    0,   78,    2, 0x09,   12 /* Protected */,
      11,    0,   79,    2, 0x09,   13 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    2,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject GraphTileCtrls::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_GraphTileCtrls.offsetsAndSizes,
    qt_meta_data_GraphTileCtrls,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_GraphTileCtrls_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GraphTileCtrls, std::true_type>,
        // method 'onCurrentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        // method 'onVarSetClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        // method 'onDelete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onInsertAfter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onInsertBefore'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        // method 'onMoveUp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMoveDown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void GraphTileCtrls::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GraphTileCtrls *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onCurrentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 1: _t->onVarSetClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 2: _t->onDelete(); break;
        case 3: _t->onInsertAfter(); break;
        case 4: _t->onInsertBefore(); break;
        case 5: _t->onCellChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 6: _t->onMoveUp(); break;
        case 7: _t->onMoveDown(); break;
        default: ;
        }
    }
}

const QMetaObject *GraphTileCtrls::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphTileCtrls::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GraphTileCtrls.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GraphTileCtrls::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
