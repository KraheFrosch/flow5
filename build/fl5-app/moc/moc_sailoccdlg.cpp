/****************************************************************************
** Meta object code from reading C++ file 'sailoccdlg.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/editors/boatedit/sailoccdlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sailoccdlg.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_SailOccDlg_t {
    uint offsetsAndSizes[26];
    char stringdata0[11];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[15];
    char stringdata5[9];
    char stringdata6[13];
    char stringdata7[11];
    char stringdata8[6];
    char stringdata9[13];
    char stringdata10[6];
    char stringdata11[6];
    char stringdata12[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_SailOccDlg_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_SailOccDlg_t qt_meta_stringdata_SailOccDlg = {
    {
        QT_MOC_LITERAL(0, 10),  // "SailOccDlg"
        QT_MOC_LITERAL(11, 16),  // "onUpdateSailView"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 17),  // "onFlipTessNormals"
        QT_MOC_LITERAL(47, 14),  // "onTessellation"
        QT_MOC_LITERAL(62, 8),  // "onShapes"
        QT_MOC_LITERAL(71, 12),  // "onTabChanged"
        QT_MOC_LITERAL(84, 10),  // "onPickEdge"
        QT_MOC_LITERAL(95, 5),  // "bPick"
        QT_MOC_LITERAL(101, 12),  // "onPickedEdge"
        QT_MOC_LITERAL(114, 5),  // "iFace"
        QT_MOC_LITERAL(120, 5),  // "iEdge"
        QT_MOC_LITERAL(126, 16)   // "onMakeEdgeSplits"
    },
    "SailOccDlg",
    "onUpdateSailView",
    "",
    "onFlipTessNormals",
    "onTessellation",
    "onShapes",
    "onTabChanged",
    "onPickEdge",
    "bPick",
    "onPickedEdge",
    "iFace",
    "iEdge",
    "onMakeEdgeSplits"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_SailOccDlg[] = {

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
       6,    1,   66,    2, 0x08,    5 /* Private */,
       7,    1,   69,    2, 0x08,    7 /* Private */,
       9,    2,   72,    2, 0x08,    9 /* Private */,
      12,    0,   77,    2, 0x08,   12 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject SailOccDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<ExternalSailDlg::staticMetaObject>(),
    qt_meta_stringdata_SailOccDlg.offsetsAndSizes,
    qt_meta_data_SailOccDlg,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_SailOccDlg_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SailOccDlg, std::true_type>,
        // method 'onUpdateSailView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFlipTessNormals'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTessellation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onShapes'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTabChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onPickEdge'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onPickedEdge'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onMakeEdgeSplits'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SailOccDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SailOccDlg *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onUpdateSailView(); break;
        case 1: _t->onFlipTessNormals(); break;
        case 2: _t->onTessellation(); break;
        case 3: _t->onShapes(); break;
        case 4: _t->onTabChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->onPickEdge((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->onPickedEdge((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 7: _t->onMakeEdgeSplits(); break;
        default: ;
        }
    }
}

const QMetaObject *SailOccDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SailOccDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SailOccDlg.stringdata0))
        return static_cast<void*>(this);
    return ExternalSailDlg::qt_metacast(_clname);
}

int SailOccDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ExternalSailDlg::qt_metacall(_c, _id, _a);
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
