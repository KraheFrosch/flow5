/****************************************************************************
** Meta object code from reading C++ file 'xfldialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/widgets/customdlg/xfldialog.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xfldialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_XflDialog_t {
    uint offsetsAndSizes[24];
    char stringdata0[10];
    char stringdata1[7];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[11];
    char stringdata5[7];
    char stringdata6[9];
    char stringdata7[17];
    char stringdata8[8];
    char stringdata9[8];
    char stringdata10[8];
    char stringdata11[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_XflDialog_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_XflDialog_t qt_meta_stringdata_XflDialog = {
    {
        QT_MOC_LITERAL(0, 9),  // "XflDialog"
        QT_MOC_LITERAL(10, 6),  // "reject"
        QT_MOC_LITERAL(17, 0),  // ""
        QT_MOC_LITERAL(18, 13),  // "keyPressEvent"
        QT_MOC_LITERAL(32, 10),  // "QKeyEvent*"
        QT_MOC_LITERAL(43, 6),  // "pEvent"
        QT_MOC_LITERAL(50, 8),  // "onButton"
        QT_MOC_LITERAL(59, 16),  // "QAbstractButton*"
        QT_MOC_LITERAL(76, 7),  // "pButton"
        QT_MOC_LITERAL(84, 7),  // "onApply"
        QT_MOC_LITERAL(92, 7),  // "onReset"
        QT_MOC_LITERAL(100, 10)   // "onDefaults"
    },
    "XflDialog",
    "reject",
    "",
    "keyPressEvent",
    "QKeyEvent*",
    "pEvent",
    "onButton",
    "QAbstractButton*",
    "pButton",
    "onApply",
    "onReset",
    "onDefaults"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_XflDialog[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x09,    1 /* Protected */,
       3,    1,   51,    2, 0x09,    2 /* Protected */,
       6,    1,   54,    2, 0x09,    4 /* Protected */,
       9,    0,   57,    2, 0x09,    6 /* Protected */,
      10,    0,   58,    2, 0x09,    7 /* Protected */,
      11,    0,   59,    2, 0x09,    8 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject XflDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_XflDialog.offsetsAndSizes,
    qt_meta_data_XflDialog,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_XflDialog_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<XflDialog, std::true_type>,
        // method 'reject'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'keyPressEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QKeyEvent *, std::false_type>,
        // method 'onButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractButton *, std::false_type>,
        // method 'onApply'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onReset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDefaults'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void XflDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<XflDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->reject(); break;
        case 1: _t->keyPressEvent((*reinterpret_cast< std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        case 2: _t->onButton((*reinterpret_cast< std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        case 3: _t->onApply(); break;
        case 4: _t->onReset(); break;
        case 5: _t->onDefaults(); break;
        default: ;
        }
    }
}

const QMetaObject *XflDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XflDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_XflDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int XflDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
