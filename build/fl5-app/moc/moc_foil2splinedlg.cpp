/****************************************************************************
** Meta object code from reading C++ file 'foil2splinedlg.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/editors/foiledit/foil2splinedlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'foil2splinedlg.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_Foil2SplineDlg_t {
    uint offsetsAndSizes[18];
    char stringdata0[15];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[16];
    char stringdata5[7];
    char stringdata6[7];
    char stringdata7[12];
    char stringdata8[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Foil2SplineDlg_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Foil2SplineDlg_t qt_meta_stringdata_Foil2SplineDlg = {
    {
        QT_MOC_LITERAL(0, 14),  // "Foil2SplineDlg"
        QT_MOC_LITERAL(15, 7),  // "onApply"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 7),  // "onReset"
        QT_MOC_LITERAL(32, 15),  // "onSplitterMoved"
        QT_MOC_LITERAL(48, 6),  // "onUndo"
        QT_MOC_LITERAL(55, 6),  // "onRedo"
        QT_MOC_LITERAL(62, 11),  // "onNewSpline"
        QT_MOC_LITERAL(74, 13)   // "onTakePicture"
    },
    "Foil2SplineDlg",
    "onApply",
    "",
    "onReset",
    "onSplitterMoved",
    "onUndo",
    "onRedo",
    "onNewSpline",
    "onTakePicture"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Foil2SplineDlg[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    0,   61,    2, 0x08,    6 /* Private */,
       8,    0,   62,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Foil2SplineDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<FoilDlg::staticMetaObject>(),
    qt_meta_stringdata_Foil2SplineDlg.offsetsAndSizes,
    qt_meta_data_Foil2SplineDlg,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Foil2SplineDlg_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Foil2SplineDlg, std::true_type>,
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
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Foil2SplineDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Foil2SplineDlg *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onApply(); break;
        case 1: _t->onReset(); break;
        case 2: _t->onSplitterMoved(); break;
        case 3: _t->onUndo(); break;
        case 4: _t->onRedo(); break;
        case 5: _t->onNewSpline(); break;
        case 6: _t->onTakePicture(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *Foil2SplineDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Foil2SplineDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Foil2SplineDlg.stringdata0))
        return static_cast<void*>(this);
    return FoilDlg::qt_metacast(_clname);
}

int Foil2SplineDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FoilDlg::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
