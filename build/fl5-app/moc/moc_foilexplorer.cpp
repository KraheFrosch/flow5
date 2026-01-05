/****************************************************************************
** Meta object code from reading C++ file 'foilexplorer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/modules/xdirect/controls/foilexplorer.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'foilexplorer.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_FoilExplorer_t {
    uint offsetsAndSizes[42];
    char stringdata0[13];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[6];
    char stringdata5[20];
    char stringdata6[13];
    char stringdata7[14];
    char stringdata8[20];
    char stringdata9[11];
    char stringdata10[6];
    char stringdata11[6];
    char stringdata12[12];
    char stringdata13[7];
    char stringdata14[7];
    char stringdata15[14];
    char stringdata16[9];
    char stringdata17[5];
    char stringdata18[12];
    char stringdata19[9];
    char stringdata20[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_FoilExplorer_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_FoilExplorer_t qt_meta_stringdata_FoilExplorer = {
    {
        QT_MOC_LITERAL(0, 12),  // "FoilExplorer"
        QT_MOC_LITERAL(13, 13),  // "onItemClicked"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 11),  // "QModelIndex"
        QT_MOC_LITERAL(40, 5),  // "index"
        QT_MOC_LITERAL(46, 19),  // "onCurrentRowChanged"
        QT_MOC_LITERAL(66, 12),  // "currentIndex"
        QT_MOC_LITERAL(79, 13),  // "previousIndex"
        QT_MOC_LITERAL(93, 19),  // "onItemDoubleClicked"
        QT_MOC_LITERAL(113, 10),  // "selectFoil"
        QT_MOC_LITERAL(124, 5),  // "Foil*"
        QT_MOC_LITERAL(130, 5),  // "pFoil"
        QT_MOC_LITERAL(136, 11),  // "selectPolar"
        QT_MOC_LITERAL(148, 6),  // "Polar*"
        QT_MOC_LITERAL(155, 6),  // "pPolar"
        QT_MOC_LITERAL(162, 13),  // "selectOpPoint"
        QT_MOC_LITERAL(176, 8),  // "OpPoint*"
        QT_MOC_LITERAL(185, 4),  // "pOpp"
        QT_MOC_LITERAL(190, 11),  // "onSwitchAll"
        QT_MOC_LITERAL(202, 8),  // "bChecked"
        QT_MOC_LITERAL(211, 11)   // "onSetFilter"
    },
    "FoilExplorer",
    "onItemClicked",
    "",
    "QModelIndex",
    "index",
    "onCurrentRowChanged",
    "currentIndex",
    "previousIndex",
    "onItemDoubleClicked",
    "selectFoil",
    "Foil*",
    "pFoil",
    "selectPolar",
    "Polar*",
    "pPolar",
    "selectOpPoint",
    "OpPoint*",
    "pOpp",
    "onSwitchAll",
    "bChecked",
    "onSetFilter"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_FoilExplorer[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x0a,    1 /* Public */,
       5,    2,   71,    2, 0x0a,    3 /* Public */,
       8,    1,   76,    2, 0x0a,    6 /* Public */,
       9,    1,   79,    2, 0x0a,    8 /* Public */,
      12,    1,   82,    2, 0x0a,   10 /* Public */,
      15,    1,   85,    2, 0x0a,   12 /* Public */,
      15,    0,   88,    2, 0x2a,   14 /* Public | MethodCloned */,
      18,    1,   89,    2, 0x0a,   15 /* Public */,
      20,    0,   92,    2, 0x0a,   17 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    6,    7,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject FoilExplorer::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_FoilExplorer.offsetsAndSizes,
    qt_meta_data_FoilExplorer,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_FoilExplorer_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FoilExplorer, std::true_type>,
        // method 'onItemClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'onCurrentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        // method 'onItemDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'selectFoil'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Foil *, std::false_type>,
        // method 'selectPolar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Polar *, std::false_type>,
        // method 'selectOpPoint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OpPoint *, std::false_type>,
        // method 'selectOpPoint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSwitchAll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onSetFilter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void FoilExplorer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FoilExplorer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onItemClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 1: _t->onCurrentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 2: _t->onItemDoubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 3: _t->selectFoil((*reinterpret_cast< std::add_pointer_t<Foil*>>(_a[1]))); break;
        case 4: _t->selectPolar((*reinterpret_cast< std::add_pointer_t<Polar*>>(_a[1]))); break;
        case 5: _t->selectOpPoint((*reinterpret_cast< std::add_pointer_t<OpPoint*>>(_a[1]))); break;
        case 6: _t->selectOpPoint(); break;
        case 7: _t->onSwitchAll((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->onSetFilter(); break;
        default: ;
        }
    }
}

const QMetaObject *FoilExplorer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FoilExplorer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FoilExplorer.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FoilExplorer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
