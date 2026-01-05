/****************************************************************************
** Meta object code from reading C++ file 'fusemesherdlg.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/editors/fuseedit/fusemesherdlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fusemesherdlg.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_FuseMesherDlg_t {
    uint offsetsAndSizes[42];
    char stringdata0[14];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[8];
    char stringdata5[12];
    char stringdata6[19];
    char stringdata7[15];
    char stringdata8[26];
    char stringdata9[16];
    char stringdata10[14];
    char stringdata11[13];
    char stringdata12[7];
    char stringdata13[17];
    char stringdata14[19];
    char stringdata15[9];
    char stringdata16[16];
    char stringdata17[19];
    char stringdata18[17];
    char stringdata19[15];
    char stringdata20[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_FuseMesherDlg_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_FuseMesherDlg_t qt_meta_stringdata_FuseMesherDlg = {
    {
        QT_MOC_LITERAL(0, 13),  // "FuseMesherDlg"
        QT_MOC_LITERAL(14, 8),  // "onButton"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 16),  // "QAbstractButton*"
        QT_MOC_LITERAL(41, 7),  // "pButton"
        QT_MOC_LITERAL(49, 11),  // "onCheckMesh"
        QT_MOC_LITERAL(61, 18),  // "onClearHighlighted"
        QT_MOC_LITERAL(80, 14),  // "onUpdate3dView"
        QT_MOC_LITERAL(95, 25),  // "onUpdateHighlightedPanels"
        QT_MOC_LITERAL(121, 15),  // "onResetFuseMesh"
        QT_MOC_LITERAL(137, 13),  // "onDoubleNodes"
        QT_MOC_LITERAL(151, 12),  // "onMergeNodes"
        QT_MOC_LITERAL(164, 6),  // "bMerge"
        QT_MOC_LITERAL(171, 16),  // "onPickedNodePair"
        QT_MOC_LITERAL(188, 18),  // "std::pair<int,int>"
        QT_MOC_LITERAL(207, 8),  // "nodepair"
        QT_MOC_LITERAL(216, 15),  // "onUndoLastMerge"
        QT_MOC_LITERAL(232, 18),  // "onConnectTriangles"
        QT_MOC_LITERAL(251, 16),  // "onCheckFreeEdges"
        QT_MOC_LITERAL(268, 14),  // "onNodeDistance"
        QT_MOC_LITERAL(283, 11)   // "onSelMesher"
    },
    "FuseMesherDlg",
    "onButton",
    "",
    "QAbstractButton*",
    "pButton",
    "onCheckMesh",
    "onClearHighlighted",
    "onUpdate3dView",
    "onUpdateHighlightedPanels",
    "onResetFuseMesh",
    "onDoubleNodes",
    "onMergeNodes",
    "bMerge",
    "onPickedNodePair",
    "std::pair<int,int>",
    "nodepair",
    "onUndoLastMerge",
    "onConnectTriangles",
    "onCheckFreeEdges",
    "onNodeDistance",
    "onSelMesher"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_FuseMesherDlg[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   98,    2, 0x0a,    1 /* Public */,
       5,    0,  101,    2, 0x0a,    3 /* Public */,
       6,    0,  102,    2, 0x0a,    4 /* Public */,
       7,    0,  103,    2, 0x0a,    5 /* Public */,
       8,    0,  104,    2, 0x0a,    6 /* Public */,
       9,    0,  105,    2, 0x0a,    7 /* Public */,
      10,    0,  106,    2, 0x0a,    8 /* Public */,
      11,    1,  107,    2, 0x0a,    9 /* Public */,
      13,    1,  110,    2, 0x0a,   11 /* Public */,
      16,    0,  113,    2, 0x0a,   13 /* Public */,
      17,    0,  114,    2, 0x0a,   14 /* Public */,
      18,    0,  115,    2, 0x0a,   15 /* Public */,
      19,    0,  116,    2, 0x0a,   16 /* Public */,
      20,    0,  117,    2, 0x0a,   17 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject FuseMesherDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_FuseMesherDlg.offsetsAndSizes,
    qt_meta_data_FuseMesherDlg,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_FuseMesherDlg_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FuseMesherDlg, std::true_type>,
        // method 'onButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractButton *, std::false_type>,
        // method 'onCheckMesh'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onClearHighlighted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onUpdate3dView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onUpdateHighlightedPanels'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onResetFuseMesh'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDoubleNodes'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMergeNodes'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onPickedNodePair'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPair<int,int>, std::false_type>,
        // method 'onUndoLastMerge'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onConnectTriangles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCheckFreeEdges'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onNodeDistance'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSelMesher'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void FuseMesherDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FuseMesherDlg *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onButton((*reinterpret_cast< std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        case 1: _t->onCheckMesh(); break;
        case 2: _t->onClearHighlighted(); break;
        case 3: _t->onUpdate3dView(); break;
        case 4: _t->onUpdateHighlightedPanels(); break;
        case 5: _t->onResetFuseMesh(); break;
        case 6: _t->onDoubleNodes(); break;
        case 7: _t->onMergeNodes((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->onPickedNodePair((*reinterpret_cast< std::add_pointer_t<std::pair<int,int>>>(_a[1]))); break;
        case 9: _t->onUndoLastMerge(); break;
        case 10: _t->onConnectTriangles(); break;
        case 11: _t->onCheckFreeEdges(); break;
        case 12: _t->onNodeDistance(); break;
        case 13: _t->onSelMesher(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractButton* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *FuseMesherDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FuseMesherDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FuseMesherDlg.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int FuseMesherDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
