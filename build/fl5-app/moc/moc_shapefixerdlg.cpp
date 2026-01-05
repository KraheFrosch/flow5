/****************************************************************************
** Meta object code from reading C++ file 'shapefixerdlg.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/editors/fuseedit/shapefixerdlg.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shapefixerdlg.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_ShapeFixerDlg_t {
    uint offsetsAndSizes[24];
    char stringdata0[14];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[8];
    char stringdata5[13];
    char stringdata6[13];
    char stringdata7[16];
    char stringdata8[15];
    char stringdata9[13];
    char stringdata10[10];
    char stringdata11[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ShapeFixerDlg_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_ShapeFixerDlg_t qt_meta_stringdata_ShapeFixerDlg = {
    {
        QT_MOC_LITERAL(0, 13),  // "ShapeFixerDlg"
        QT_MOC_LITERAL(14, 8),  // "onButton"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 16),  // "QAbstractButton*"
        QT_MOC_LITERAL(41, 7),  // "pButton"
        QT_MOC_LITERAL(49, 12),  // "onReadParams"
        QT_MOC_LITERAL(62, 12),  // "onListShapes"
        QT_MOC_LITERAL(75, 15),  // "onReverseShapes"
        QT_MOC_LITERAL(91, 14),  // "onStitchShapes"
        QT_MOC_LITERAL(106, 12),  // "onSmallEdges"
        QT_MOC_LITERAL(119, 9),  // "onFixGaps"
        QT_MOC_LITERAL(129, 8)   // "onFixAll"
    },
    "ShapeFixerDlg",
    "onButton",
    "",
    "QAbstractButton*",
    "pButton",
    "onReadParams",
    "onListShapes",
    "onReverseShapes",
    "onStitchShapes",
    "onSmallEdges",
    "onFixGaps",
    "onFixAll"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_ShapeFixerDlg[] = {

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
       1,    1,   62,    2, 0x08,    1 /* Private */,
       5,    0,   65,    2, 0x08,    3 /* Private */,
       6,    0,   66,    2, 0x08,    4 /* Private */,
       7,    0,   67,    2, 0x08,    5 /* Private */,
       8,    0,   68,    2, 0x08,    6 /* Private */,
       9,    0,   69,    2, 0x08,    7 /* Private */,
      10,    0,   70,    2, 0x08,    8 /* Private */,
      11,    0,   71,    2, 0x08,    9 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ShapeFixerDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ShapeFixerDlg.offsetsAndSizes,
    qt_meta_data_ShapeFixerDlg,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_ShapeFixerDlg_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ShapeFixerDlg, std::true_type>,
        // method 'onButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractButton *, std::false_type>,
        // method 'onReadParams'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onListShapes'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onReverseShapes'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onStitchShapes'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSmallEdges'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFixGaps'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFixAll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ShapeFixerDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShapeFixerDlg *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onButton((*reinterpret_cast< std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        case 1: _t->onReadParams(); break;
        case 2: _t->onListShapes(); break;
        case 3: _t->onReverseShapes(); break;
        case 4: _t->onStitchShapes(); break;
        case 5: _t->onSmallEdges(); break;
        case 6: _t->onFixGaps(); break;
        case 7: _t->onFixAll(); break;
        default: ;
        }
    }
}

const QMetaObject *ShapeFixerDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShapeFixerDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ShapeFixerDlg.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ShapeFixerDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
