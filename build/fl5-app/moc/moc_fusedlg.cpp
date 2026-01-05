/****************************************************************************
** Meta object code from reading C++ file 'fusedlg.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/editors/fuseedit/fusedlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fusedlg.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_FuseDlg_t {
    uint offsetsAndSizes[38];
    char stringdata0[8];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[14];
    char stringdata5[8];
    char stringdata6[12];
    char stringdata7[9];
    char stringdata8[22];
    char stringdata9[27];
    char stringdata10[22];
    char stringdata11[12];
    char stringdata12[15];
    char stringdata13[17];
    char stringdata14[19];
    char stringdata15[9];
    char stringdata16[9];
    char stringdata17[17];
    char stringdata18[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_FuseDlg_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_FuseDlg_t qt_meta_stringdata_FuseDlg = {
    {
        QT_MOC_LITERAL(0, 7),  // "FuseDlg"
        QT_MOC_LITERAL(8, 17),  // "onMetaDataChanged"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 14),  // "onTessellation"
        QT_MOC_LITERAL(42, 13),  // "onFuseInertia"
        QT_MOC_LITERAL(56, 7),  // "onScale"
        QT_MOC_LITERAL(64, 11),  // "onTranslate"
        QT_MOC_LITERAL(76, 8),  // "onRotate"
        QT_MOC_LITERAL(85, 21),  // "onExportMeshToSTLFile"
        QT_MOC_LITERAL(107, 26),  // "onExportTrianglesToSTLFile"
        QT_MOC_LITERAL(134, 21),  // "onExportFuseToCADFile"
        QT_MOC_LITERAL(156, 11),  // "onFuseColor"
        QT_MOC_LITERAL(168, 14),  // "onNodeDistance"
        QT_MOC_LITERAL(183, 16),  // "onPickedNodePair"
        QT_MOC_LITERAL(200, 18),  // "std::pair<int,int>"
        QT_MOC_LITERAL(219, 8),  // "nodepair"
        QT_MOC_LITERAL(228, 8),  // "onButton"
        QT_MOC_LITERAL(237, 16),  // "QAbstractButton*"
        QT_MOC_LITERAL(254, 7)   // "pButton"
    },
    "FuseDlg",
    "onMetaDataChanged",
    "",
    "onTessellation",
    "onFuseInertia",
    "onScale",
    "onTranslate",
    "onRotate",
    "onExportMeshToSTLFile",
    "onExportTrianglesToSTLFile",
    "onExportFuseToCADFile",
    "onFuseColor",
    "onNodeDistance",
    "onPickedNodePair",
    "std::pair<int,int>",
    "nodepair",
    "onButton",
    "QAbstractButton*",
    "pButton"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_FuseDlg[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x09,    1 /* Protected */,
       3,    0,   93,    2, 0x09,    2 /* Protected */,
       4,    0,   94,    2, 0x09,    3 /* Protected */,
       5,    0,   95,    2, 0x09,    4 /* Protected */,
       6,    0,   96,    2, 0x09,    5 /* Protected */,
       7,    0,   97,    2, 0x09,    6 /* Protected */,
       8,    0,   98,    2, 0x09,    7 /* Protected */,
       9,    0,   99,    2, 0x09,    8 /* Protected */,
      10,    0,  100,    2, 0x09,    9 /* Protected */,
      11,    0,  101,    2, 0x09,   10 /* Protected */,
      12,    0,  102,    2, 0x09,   11 /* Protected */,
      13,    1,  103,    2, 0x09,   12 /* Protected */,
      16,    1,  106,    2, 0x09,   14 /* Protected */,

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

       0        // eod
};

Q_CONSTINIT const QMetaObject FuseDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<XflDialog::staticMetaObject>(),
    qt_meta_stringdata_FuseDlg.offsetsAndSizes,
    qt_meta_data_FuseDlg,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_FuseDlg_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FuseDlg, std::true_type>,
        // method 'onMetaDataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTessellation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFuseInertia'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onScale'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTranslate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRotate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onExportMeshToSTLFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onExportTrianglesToSTLFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onExportFuseToCADFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFuseColor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onNodeDistance'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onPickedNodePair'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPair<int,int>, std::false_type>,
        // method 'onButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractButton *, std::false_type>
    >,
    nullptr
} };

void FuseDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FuseDlg *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onMetaDataChanged(); break;
        case 1: _t->onTessellation(); break;
        case 2: _t->onFuseInertia(); break;
        case 3: _t->onScale(); break;
        case 4: _t->onTranslate(); break;
        case 5: _t->onRotate(); break;
        case 6: _t->onExportMeshToSTLFile(); break;
        case 7: _t->onExportTrianglesToSTLFile(); break;
        case 8: _t->onExportFuseToCADFile(); break;
        case 9: _t->onFuseColor(); break;
        case 10: _t->onNodeDistance(); break;
        case 11: _t->onPickedNodePair((*reinterpret_cast< std::add_pointer_t<std::pair<int,int>>>(_a[1]))); break;
        case 12: _t->onButton((*reinterpret_cast< std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractButton* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *FuseDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FuseDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FuseDlg.stringdata0))
        return static_cast<void*>(this);
    return XflDialog::qt_metacast(_clname);
}

int FuseDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XflDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
