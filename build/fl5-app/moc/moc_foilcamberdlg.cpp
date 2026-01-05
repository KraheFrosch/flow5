/****************************************************************************
** Meta object code from reading C++ file 'foilcamberdlg.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/editors/foiledit/foilcamberdlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'foilcamberdlg.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_FoilCamberDlg_t {
    uint offsetsAndSizes[20];
    char stringdata0[14];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[16];
    char stringdata5[7];
    char stringdata6[7];
    char stringdata7[12];
    char stringdata8[14];
    char stringdata9[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_FoilCamberDlg_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_FoilCamberDlg_t qt_meta_stringdata_FoilCamberDlg = {
    {
        QT_MOC_LITERAL(0, 13),  // "FoilCamberDlg"
        QT_MOC_LITERAL(14, 7),  // "onApply"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 7),  // "onReset"
        QT_MOC_LITERAL(31, 15),  // "onSplitterMoved"
        QT_MOC_LITERAL(47, 6),  // "onUndo"
        QT_MOC_LITERAL(54, 6),  // "onRedo"
        QT_MOC_LITERAL(61, 11),  // "onNewSpline"
        QT_MOC_LITERAL(73, 13),  // "onTakePicture"
        QT_MOC_LITERAL(87, 12)   // "onApproxFoil"
    },
    "FoilCamberDlg",
    "onApply",
    "",
    "onReset",
    "onSplitterMoved",
    "onUndo",
    "onRedo",
    "onNewSpline",
    "onTakePicture",
    "onApproxFoil"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_FoilCamberDlg[] = {

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
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    0,   67,    2, 0x08,    6 /* Private */,
       8,    0,   68,    2, 0x08,    7 /* Private */,
       9,    0,   69,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject FoilCamberDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<FoilDlg::staticMetaObject>(),
    qt_meta_stringdata_FoilCamberDlg.offsetsAndSizes,
    qt_meta_data_FoilCamberDlg,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_FoilCamberDlg_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FoilCamberDlg, std::true_type>,
        // method 'onApply'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onReset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSplitterMoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onUndo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRedo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onNewSpline'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTakePicture'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onApproxFoil'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void FoilCamberDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FoilCamberDlg *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onApply(); break;
        case 1: _t->onReset(); break;
        case 2: _t->onSplitterMoved(); break;
        case 3: _t->onUndo(); break;
        case 4: _t->onRedo(); break;
        case 5: _t->onNewSpline(); break;
        case 6: _t->onTakePicture(); break;
        case 7: _t->onApproxFoil(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *FoilCamberDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FoilCamberDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FoilCamberDlg.stringdata0))
        return static_cast<void*>(this);
    return FoilDlg::qt_metacast(_clname);
}

int FoilCamberDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FoilDlg::qt_metacall(_c, _id, _a);
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
