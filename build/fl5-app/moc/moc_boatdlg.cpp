/****************************************************************************
** Meta object code from reading C++ file 'boatdlg.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/editors/boatedit/boatdlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'boatdlg.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_BoatDlg_t {
    uint offsetsAndSizes[86];
    char stringdata0[8];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[13];
    char stringdata5[13];
    char stringdata6[16];
    char stringdata7[16];
    char stringdata8[11];
    char stringdata9[10];
    char stringdata10[15];
    char stringdata11[11];
    char stringdata12[10];
    char stringdata13[18];
    char stringdata14[9];
    char stringdata15[8];
    char stringdata16[18];
    char stringdata17[12];
    char stringdata18[6];
    char stringdata19[16];
    char stringdata20[16];
    char stringdata21[16];
    char stringdata22[21];
    char stringdata23[20];
    char stringdata24[20];
    char stringdata25[20];
    char stringdata26[16];
    char stringdata27[16];
    char stringdata28[15];
    char stringdata29[13];
    char stringdata30[15];
    char stringdata31[13];
    char stringdata32[15];
    char stringdata33[17];
    char stringdata34[19];
    char stringdata35[9];
    char stringdata36[13];
    char stringdata37[13];
    char stringdata38[21];
    char stringdata39[18];
    char stringdata40[18];
    char stringdata41[7];
    char stringdata42[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_BoatDlg_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_BoatDlg_t qt_meta_stringdata_BoatDlg = {
    {
        QT_MOC_LITERAL(0, 7),  // "BoatDlg"
        QT_MOC_LITERAL(8, 9),  // "onAddHull"
        QT_MOC_LITERAL(18, 0),  // ""
        QT_MOC_LITERAL(19, 9),  // "onAddSail"
        QT_MOC_LITERAL(29, 12),  // "onDeleteHull"
        QT_MOC_LITERAL(42, 12),  // "onDeleteSail"
        QT_MOC_LITERAL(55, 15),  // "onDuplicateHull"
        QT_MOC_LITERAL(71, 15),  // "onDuplicateSail"
        QT_MOC_LITERAL(87, 10),  // "onEditHull"
        QT_MOC_LITERAL(98, 9),  // "onEditJib"
        QT_MOC_LITERAL(108, 14),  // "onEditMainSail"
        QT_MOC_LITERAL(123, 10),  // "onEditSail"
        QT_MOC_LITERAL(134, 9),  // "onGetHull"
        QT_MOC_LITERAL(144, 17),  // "onHullCellChanged"
        QT_MOC_LITERAL(162, 8),  // "QWidget*"
        QT_MOC_LITERAL(171, 7),  // "pWidget"
        QT_MOC_LITERAL(179, 17),  // "onHullItemClicked"
        QT_MOC_LITERAL(197, 11),  // "QModelIndex"
        QT_MOC_LITERAL(209, 5),  // "index"
        QT_MOC_LITERAL(215, 15),  // "onImportHullCAD"
        QT_MOC_LITERAL(231, 15),  // "onImportHullSTL"
        QT_MOC_LITERAL(247, 15),  // "onImportHullXML"
        QT_MOC_LITERAL(263, 20),  // "onImportSailFromBoat"
        QT_MOC_LITERAL(284, 19),  // "onImportSailFromCAD"
        QT_MOC_LITERAL(304, 19),  // "onImportSailFromSTL"
        QT_MOC_LITERAL(324, 19),  // "onImportSailFromXml"
        QT_MOC_LITERAL(344, 15),  // "onInsertFuseStl"
        QT_MOC_LITERAL(360, 15),  // "onInsertFuseXfl"
        QT_MOC_LITERAL(376, 14),  // "onMoveHullDown"
        QT_MOC_LITERAL(391, 12),  // "onMoveHullUp"
        QT_MOC_LITERAL(404, 14),  // "onMoveSailDown"
        QT_MOC_LITERAL(419, 12),  // "onMoveSailUp"
        QT_MOC_LITERAL(432, 14),  // "onNodeDistance"
        QT_MOC_LITERAL(447, 16),  // "onPickedNodePair"
        QT_MOC_LITERAL(464, 18),  // "std::pair<int,int>"
        QT_MOC_LITERAL(483, 8),  // "nodepair"
        QT_MOC_LITERAL(492, 12),  // "onRenameHull"
        QT_MOC_LITERAL(505, 12),  // "onRenameSail"
        QT_MOC_LITERAL(518, 20),  // "onResizeTableColumns"
        QT_MOC_LITERAL(539, 17),  // "onSailCellChanged"
        QT_MOC_LITERAL(557, 17),  // "onSailItemClicked"
        QT_MOC_LITERAL(575, 6),  // "accept"
        QT_MOC_LITERAL(582, 6)   // "reject"
    },
    "BoatDlg",
    "onAddHull",
    "",
    "onAddSail",
    "onDeleteHull",
    "onDeleteSail",
    "onDuplicateHull",
    "onDuplicateSail",
    "onEditHull",
    "onEditJib",
    "onEditMainSail",
    "onEditSail",
    "onGetHull",
    "onHullCellChanged",
    "QWidget*",
    "pWidget",
    "onHullItemClicked",
    "QModelIndex",
    "index",
    "onImportHullCAD",
    "onImportHullSTL",
    "onImportHullXML",
    "onImportSailFromBoat",
    "onImportSailFromCAD",
    "onImportSailFromSTL",
    "onImportSailFromXml",
    "onInsertFuseStl",
    "onInsertFuseXfl",
    "onMoveHullDown",
    "onMoveHullUp",
    "onMoveSailDown",
    "onMoveSailUp",
    "onNodeDistance",
    "onPickedNodePair",
    "std::pair<int,int>",
    "nodepair",
    "onRenameHull",
    "onRenameSail",
    "onResizeTableColumns",
    "onSailCellChanged",
    "onSailItemClicked",
    "accept",
    "reject"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_BoatDlg[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  224,    2, 0x08,    1 /* Private */,
       3,    0,  225,    2, 0x08,    2 /* Private */,
       4,    0,  226,    2, 0x08,    3 /* Private */,
       5,    0,  227,    2, 0x08,    4 /* Private */,
       6,    0,  228,    2, 0x08,    5 /* Private */,
       7,    0,  229,    2, 0x08,    6 /* Private */,
       8,    0,  230,    2, 0x08,    7 /* Private */,
       9,    0,  231,    2, 0x08,    8 /* Private */,
      10,    0,  232,    2, 0x08,    9 /* Private */,
      11,    0,  233,    2, 0x08,   10 /* Private */,
      12,    0,  234,    2, 0x08,   11 /* Private */,
      13,    1,  235,    2, 0x08,   12 /* Private */,
      16,    1,  238,    2, 0x08,   14 /* Private */,
      19,    0,  241,    2, 0x08,   16 /* Private */,
      20,    0,  242,    2, 0x08,   17 /* Private */,
      21,    0,  243,    2, 0x08,   18 /* Private */,
      22,    0,  244,    2, 0x08,   19 /* Private */,
      23,    0,  245,    2, 0x08,   20 /* Private */,
      24,    0,  246,    2, 0x08,   21 /* Private */,
      25,    0,  247,    2, 0x08,   22 /* Private */,
      26,    0,  248,    2, 0x08,   23 /* Private */,
      27,    0,  249,    2, 0x08,   24 /* Private */,
      28,    0,  250,    2, 0x08,   25 /* Private */,
      29,    0,  251,    2, 0x08,   26 /* Private */,
      30,    0,  252,    2, 0x08,   27 /* Private */,
      31,    0,  253,    2, 0x08,   28 /* Private */,
      32,    0,  254,    2, 0x08,   29 /* Private */,
      33,    1,  255,    2, 0x08,   30 /* Private */,
      36,    0,  258,    2, 0x08,   32 /* Private */,
      37,    0,  259,    2, 0x08,   33 /* Private */,
      38,    0,  260,    2, 0x08,   34 /* Private */,
      39,    1,  261,    2, 0x08,   35 /* Private */,
      40,    1,  264,    2, 0x08,   37 /* Private */,
      41,    0,  267,    2, 0x08,   39 /* Private */,
      42,    0,  268,    2, 0x08,   40 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject BoatDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<XflDialog::staticMetaObject>(),
    qt_meta_stringdata_BoatDlg.offsetsAndSizes,
    qt_meta_data_BoatDlg,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_BoatDlg_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BoatDlg, std::true_type>,
        // method 'onAddHull'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onAddSail'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDeleteHull'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDeleteSail'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDuplicateHull'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDuplicateSail'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onEditHull'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onEditJib'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onEditMainSail'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onEditSail'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onGetHull'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onHullCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        // method 'onHullItemClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'onImportHullCAD'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onImportHullSTL'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onImportHullXML'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onImportSailFromBoat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onImportSailFromCAD'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onImportSailFromSTL'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onImportSailFromXml'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onInsertFuseStl'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onInsertFuseXfl'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMoveHullDown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMoveHullUp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMoveSailDown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMoveSailUp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onNodeDistance'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onPickedNodePair'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPair<int,int>, std::false_type>,
        // method 'onRenameHull'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRenameSail'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onResizeTableColumns'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSailCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        // method 'onSailItemClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'accept'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reject'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void BoatDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BoatDlg *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onAddHull(); break;
        case 1: _t->onAddSail(); break;
        case 2: _t->onDeleteHull(); break;
        case 3: _t->onDeleteSail(); break;
        case 4: _t->onDuplicateHull(); break;
        case 5: _t->onDuplicateSail(); break;
        case 6: _t->onEditHull(); break;
        case 7: _t->onEditJib(); break;
        case 8: _t->onEditMainSail(); break;
        case 9: _t->onEditSail(); break;
        case 10: _t->onGetHull(); break;
        case 11: _t->onHullCellChanged((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 12: _t->onHullItemClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 13: _t->onImportHullCAD(); break;
        case 14: _t->onImportHullSTL(); break;
        case 15: _t->onImportHullXML(); break;
        case 16: _t->onImportSailFromBoat(); break;
        case 17: _t->onImportSailFromCAD(); break;
        case 18: _t->onImportSailFromSTL(); break;
        case 19: _t->onImportSailFromXml(); break;
        case 20: _t->onInsertFuseStl(); break;
        case 21: _t->onInsertFuseXfl(); break;
        case 22: _t->onMoveHullDown(); break;
        case 23: _t->onMoveHullUp(); break;
        case 24: _t->onMoveSailDown(); break;
        case 25: _t->onMoveSailUp(); break;
        case 26: _t->onNodeDistance(); break;
        case 27: _t->onPickedNodePair((*reinterpret_cast< std::add_pointer_t<std::pair<int,int>>>(_a[1]))); break;
        case 28: _t->onRenameHull(); break;
        case 29: _t->onRenameSail(); break;
        case 30: _t->onResizeTableColumns(); break;
        case 31: _t->onSailCellChanged((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 32: _t->onSailItemClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 33: _t->accept(); break;
        case 34: _t->reject(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *BoatDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BoatDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BoatDlg.stringdata0))
        return static_cast<void*>(this);
    return XflDialog::qt_metacast(_clname);
}

int BoatDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XflDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
