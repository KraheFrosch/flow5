/****************************************************************************
** Meta object code from reading C++ file 'foilplrlistdlg.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/modules/xdirect/mgt/foilplrlistdlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'foilplrlistdlg.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_FoilPlrListDlg_t {
    uint offsetsAndSizes[18];
    char stringdata0[15];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[9];
    char stringdata5[17];
    char stringdata6[8];
    char stringdata7[12];
    char stringdata8[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_FoilPlrListDlg_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_FoilPlrListDlg_t qt_meta_stringdata_FoilPlrListDlg = {
    {
        QT_MOC_LITERAL(0, 14),  // "FoilPlrListDlg"
        QT_MOC_LITERAL(15, 21),  // "onDeleteSelectedFiles"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 21),  // "onImportSelectedFiles"
        QT_MOC_LITERAL(60, 8),  // "onButton"
        QT_MOC_LITERAL(69, 16),  // "QAbstractButton*"
        QT_MOC_LITERAL(86, 7),  // "pButton"
        QT_MOC_LITERAL(94, 11),  // "onChangeDir"
        QT_MOC_LITERAL(106, 15)   // "onScanDirectory"
    },
    "FoilPlrListDlg",
    "onDeleteSelectedFiles",
    "",
    "onImportSelectedFiles",
    "onButton",
    "QAbstractButton*",
    "pButton",
    "onChangeDir",
    "onScanDirectory"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_FoilPlrListDlg[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    1,   46,    2, 0x08,    3 /* Private */,
       7,    0,   49,    2, 0x08,    5 /* Private */,
       8,    0,   50,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject FoilPlrListDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<XflDialog::staticMetaObject>(),
    qt_meta_stringdata_FoilPlrListDlg.offsetsAndSizes,
    qt_meta_data_FoilPlrListDlg,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_FoilPlrListDlg_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FoilPlrListDlg, std::true_type>,
        // method 'onDeleteSelectedFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onImportSelectedFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractButton *, std::false_type>,
        // method 'onChangeDir'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onScanDirectory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void FoilPlrListDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FoilPlrListDlg *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onDeleteSelectedFiles(); break;
        case 1: _t->onImportSelectedFiles(); break;
        case 2: _t->onButton((*reinterpret_cast< std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        case 3: _t->onChangeDir(); break;
        case 4: _t->onScanDirectory(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractButton* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *FoilPlrListDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FoilPlrListDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FoilPlrListDlg.stringdata0))
        return static_cast<void*>(this);
    return XflDialog::qt_metacast(_clname);
}

int FoilPlrListDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XflDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
