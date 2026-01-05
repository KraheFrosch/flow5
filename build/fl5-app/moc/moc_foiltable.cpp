/****************************************************************************
** Meta object code from reading C++ file 'foiltable.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/modules/xdirect/controls/foiltable.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'foiltable.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_FoilTable_t {
    uint offsetsAndSizes[20];
    char stringdata0[10];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[13];
    char stringdata5[14];
    char stringdata6[6];
    char stringdata7[11];
    char stringdata8[6];
    char stringdata9[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_FoilTable_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_FoilTable_t qt_meta_stringdata_FoilTable = {
    {
        QT_MOC_LITERAL(0, 9),  // "FoilTable"
        QT_MOC_LITERAL(10, 19),  // "onCurrentRowChanged"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 11),  // "QModelIndex"
        QT_MOC_LITERAL(43, 12),  // "currentIndex"
        QT_MOC_LITERAL(56, 13),  // "onItemClicked"
        QT_MOC_LITERAL(70, 5),  // "index"
        QT_MOC_LITERAL(76, 10),  // "selectFoil"
        QT_MOC_LITERAL(87, 5),  // "Foil*"
        QT_MOC_LITERAL(93, 5)   // "pFoil"
    },
    "FoilTable",
    "onCurrentRowChanged",
    "",
    "QModelIndex",
    "currentIndex",
    "onItemClicked",
    "index",
    "selectFoil",
    "Foil*",
    "pFoil"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_FoilTable[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   32,    2, 0x08,    1 /* Private */,
       5,    1,   37,    2, 0x08,    4 /* Private */,
       7,    1,   40,    2, 0x0a,    6 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    2,
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject FoilTable::staticMetaObject = { {
    QMetaObject::SuperData::link<CPTableView::staticMetaObject>(),
    qt_meta_stringdata_FoilTable.offsetsAndSizes,
    qt_meta_data_FoilTable,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_FoilTable_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FoilTable, std::true_type>,
        // method 'onCurrentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        // method 'onItemClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'selectFoil'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Foil *, std::false_type>
    >,
    nullptr
} };

void FoilTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FoilTable *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onCurrentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 1: _t->onItemClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 2: _t->selectFoil((*reinterpret_cast< std::add_pointer_t<Foil*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *FoilTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FoilTable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FoilTable.stringdata0))
        return static_cast<void*>(this);
    return CPTableView::qt_metacast(_clname);
}

int FoilTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CPTableView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
