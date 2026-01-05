/****************************************************************************
** Meta object code from reading C++ file 'wingobjectdlg.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/editors/wingedit/wingobjectdlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wingobjectdlg.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_WingObjectDlg_t {
    uint offsetsAndSizes[14];
    char stringdata0[14];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[12];
    char stringdata5[6];
    char stringdata6[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_WingObjectDlg_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_WingObjectDlg_t qt_meta_stringdata_WingObjectDlg = {
    {
        QT_MOC_LITERAL(0, 13),  // "WingObjectDlg"
        QT_MOC_LITERAL(14, 9),  // "onEndEdit"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 13),  // "onItemClicked"
        QT_MOC_LITERAL(39, 11),  // "QModelIndex"
        QT_MOC_LITERAL(51, 5),  // "index"
        QT_MOC_LITERAL(57, 15)   // "onResizeColumns"
    },
    "WingObjectDlg",
    "onEndEdit",
    "",
    "onItemClicked",
    "QModelIndex",
    "index",
    "onResizeColumns"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_WingObjectDlg[] = {

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
       1,    0,   32,    2, 0x08,    1 /* Private */,
       3,    1,   33,    2, 0x08,    2 /* Private */,
       6,    0,   36,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject WingObjectDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<WingDlg::staticMetaObject>(),
    qt_meta_stringdata_WingObjectDlg.offsetsAndSizes,
    qt_meta_data_WingObjectDlg,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_WingObjectDlg_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<WingObjectDlg, std::true_type>,
        // method 'onEndEdit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onItemClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'onResizeColumns'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void WingObjectDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WingObjectDlg *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onEndEdit(); break;
        case 1: _t->onItemClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 2: _t->onResizeColumns(); break;
        default: ;
        }
    }
}

const QMetaObject *WingObjectDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WingObjectDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WingObjectDlg.stringdata0))
        return static_cast<void*>(this);
    return WingDlg::qt_metacast(_clname);
}

int WingObjectDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WingDlg::qt_metacall(_c, _id, _a);
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
