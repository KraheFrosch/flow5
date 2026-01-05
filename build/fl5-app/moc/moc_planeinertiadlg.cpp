/****************************************************************************
** Meta object code from reading C++ file 'planeinertiadlg.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/editors/inertia/planeinertiadlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'planeinertiadlg.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_PlaneInertiaDlg_t {
    uint offsetsAndSizes[36];
    char stringdata0[16];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[10];
    char stringdata5[25];
    char stringdata6[14];
    char stringdata7[17];
    char stringdata8[24];
    char stringdata9[12];
    char stringdata10[6];
    char stringdata11[23];
    char stringdata12[22];
    char stringdata13[17];
    char stringdata14[9];
    char stringdata15[9];
    char stringdata16[17];
    char stringdata17[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_PlaneInertiaDlg_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_PlaneInertiaDlg_t qt_meta_stringdata_PlaneInertiaDlg = {
    {
        QT_MOC_LITERAL(0, 15),  // "PlaneInertiaDlg"
        QT_MOC_LITERAL(16, 15),  // "onResizeColumns"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 4),  // "onOK"
        QT_MOC_LITERAL(38, 9),  // "iExitCode"
        QT_MOC_LITERAL(48, 24),  // "onCopyInertiaToClipboard"
        QT_MOC_LITERAL(73, 13),  // "onExportToAVL"
        QT_MOC_LITERAL(87, 16),  // "onImportExisting"
        QT_MOC_LITERAL(104, 23),  // "onManInertiaCellChanged"
        QT_MOC_LITERAL(128, 11),  // "QModelIndex"
        QT_MOC_LITERAL(140, 5),  // "index"
        QT_MOC_LITERAL(146, 22),  // "onPointMassCellChanged"
        QT_MOC_LITERAL(169, 21),  // "onPointMassDataPasted"
        QT_MOC_LITERAL(191, 16),  // "onMassRowChanged"
        QT_MOC_LITERAL(208, 8),  // "onRedraw"
        QT_MOC_LITERAL(217, 8),  // "onButton"
        QT_MOC_LITERAL(226, 16),  // "QAbstractButton*"
        QT_MOC_LITERAL(243, 7)   // "pButton"
    },
    "PlaneInertiaDlg",
    "onResizeColumns",
    "",
    "onOK",
    "iExitCode",
    "onCopyInertiaToClipboard",
    "onExportToAVL",
    "onImportExisting",
    "onManInertiaCellChanged",
    "QModelIndex",
    "index",
    "onPointMassCellChanged",
    "onPointMassDataPasted",
    "onMassRowChanged",
    "onRedraw",
    "onButton",
    "QAbstractButton*",
    "pButton"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_PlaneInertiaDlg[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x09,    1 /* Protected */,
       3,    1,   87,    2, 0x09,    2 /* Protected */,
       3,    0,   90,    2, 0x29,    4 /* Protected | MethodCloned */,
       5,    0,   91,    2, 0x09,    5 /* Protected */,
       6,    0,   92,    2, 0x09,    6 /* Protected */,
       7,    0,   93,    2, 0x09,    7 /* Protected */,
       8,    1,   94,    2, 0x09,    8 /* Protected */,
      11,    0,   97,    2, 0x09,   10 /* Protected */,
      12,    0,   98,    2, 0x09,   11 /* Protected */,
      13,    1,   99,    2, 0x09,   12 /* Protected */,
      14,    0,  102,    2, 0x09,   14 /* Protected */,
      15,    1,  103,    2, 0x09,   15 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,

       0        // eod
};

Q_CONSTINIT const QMetaObject PlaneInertiaDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_PlaneInertiaDlg.offsetsAndSizes,
    qt_meta_data_PlaneInertiaDlg,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_PlaneInertiaDlg_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PlaneInertiaDlg, std::true_type>,
        // method 'onResizeColumns'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onOK'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onOK'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCopyInertiaToClipboard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onExportToAVL'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onImportExisting'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onManInertiaCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        // method 'onPointMassCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onPointMassDataPasted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMassRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        // method 'onRedraw'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractButton *, std::false_type>
    >,
    nullptr
} };

void PlaneInertiaDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlaneInertiaDlg *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onResizeColumns(); break;
        case 1: _t->onOK((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->onOK(); break;
        case 3: _t->onCopyInertiaToClipboard(); break;
        case 4: _t->onExportToAVL(); break;
        case 5: _t->onImportExisting(); break;
        case 6: _t->onManInertiaCellChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 7: _t->onPointMassCellChanged(); break;
        case 8: _t->onPointMassDataPasted(); break;
        case 9: _t->onMassRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 10: _t->onRedraw(); break;
        case 11: _t->onButton((*reinterpret_cast< std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractButton* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *PlaneInertiaDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlaneInertiaDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlaneInertiaDlg.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PlaneInertiaDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
