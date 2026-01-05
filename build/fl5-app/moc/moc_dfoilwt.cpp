/****************************************************************************
** Meta object code from reading C++ file 'dfoilwt.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/modules/xdirect/view2d/dfoilwt.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dfoilwt.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_DFoilWt_t {
    uint offsetsAndSizes[16];
    char stringdata0[8];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[10];
    char stringdata5[12];
    char stringdata6[11];
    char stringdata7[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_DFoilWt_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_DFoilWt_t qt_meta_stringdata_DFoilWt = {
    {
        QT_MOC_LITERAL(0, 7),  // "DFoilWt"
        QT_MOC_LITERAL(8, 12),  // "foilSelected"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 5),  // "Foil*"
        QT_MOC_LITERAL(28, 9),  // "onHovered"
        QT_MOC_LITERAL(38, 11),  // "onSaveToSvg"
        QT_MOC_LITERAL(50, 10),  // "onFillFoil"
        QT_MOC_LITERAL(61, 5)   // "bFill"
    },
    "DFoilWt",
    "foilSelected",
    "",
    "Foil*",
    "onHovered",
    "onSaveToSvg",
    "onFillFoil",
    "bFill"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_DFoilWt[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   41,    2, 0x08,    3 /* Private */,
       5,    0,   42,    2, 0x08,    4 /* Private */,
       6,    1,   43,    2, 0x08,    5 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject DFoilWt::staticMetaObject = { {
    QMetaObject::SuperData::link<Section2dWt::staticMetaObject>(),
    qt_meta_stringdata_DFoilWt.offsetsAndSizes,
    qt_meta_data_DFoilWt,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_DFoilWt_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DFoilWt, std::true_type>,
        // method 'foilSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Foil *, std::false_type>,
        // method 'onHovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSaveToSvg'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFillFoil'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void DFoilWt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DFoilWt *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->foilSelected((*reinterpret_cast< std::add_pointer_t<Foil*>>(_a[1]))); break;
        case 1: _t->onHovered(); break;
        case 2: _t->onSaveToSvg(); break;
        case 3: _t->onFillFoil((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DFoilWt::*)(Foil * );
            if (_t _q_method = &DFoilWt::foilSelected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *DFoilWt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DFoilWt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DFoilWt.stringdata0))
        return static_cast<void*>(this);
    return Section2dWt::qt_metacast(_clname);
}

int DFoilWt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Section2dWt::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void DFoilWt::foilSelected(Foil * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
