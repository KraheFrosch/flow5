/****************************************************************************
** Meta object code from reading C++ file 'expandabletreeview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/widgets/mvc/expandabletreeview.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'expandabletreeview.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_ExpandableTreeView_t {
    uint offsetsAndSizes[20];
    char stringdata0[19];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[13];
    char stringdata5[15];
    char stringdata6[13];
    char stringdata7[12];
    char stringdata8[14];
    char stringdata9[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ExpandableTreeView_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_ExpandableTreeView_t qt_meta_stringdata_ExpandableTreeView = {
    {
        QT_MOC_LITERAL(0, 18),  // "ExpandableTreeView"
        QT_MOC_LITERAL(19, 9),  // "switchAll"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 13),  // "onObjectLevel"
        QT_MOC_LITERAL(44, 12),  // "onPolarLevel"
        QT_MOC_LITERAL(57, 14),  // "onOpPointLevel"
        QT_MOC_LITERAL(72, 12),  // "onLevelMinus"
        QT_MOC_LITERAL(85, 11),  // "onLevelPlus"
        QT_MOC_LITERAL(97, 13),  // "onHideShowAll"
        QT_MOC_LITERAL(111, 8)   // "bChecked"
    },
    "ExpandableTreeView",
    "switchAll",
    "",
    "onObjectLevel",
    "onPolarLevel",
    "onOpPointLevel",
    "onLevelMinus",
    "onLevelPlus",
    "onHideShowAll",
    "bChecked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_ExpandableTreeView[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   59,    2, 0x0a,    3 /* Public */,
       4,    0,   60,    2, 0x0a,    4 /* Public */,
       5,    0,   61,    2, 0x0a,    5 /* Public */,
       6,    0,   62,    2, 0x0a,    6 /* Public */,
       7,    0,   63,    2, 0x0a,    7 /* Public */,
       8,    1,   64,    2, 0x0a,    8 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject ExpandableTreeView::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeView::staticMetaObject>(),
    qt_meta_stringdata_ExpandableTreeView.offsetsAndSizes,
    qt_meta_data_ExpandableTreeView,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_ExpandableTreeView_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ExpandableTreeView, std::true_type>,
        // method 'switchAll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onObjectLevel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onPolarLevel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onOpPointLevel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onLevelMinus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onLevelPlus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onHideShowAll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void ExpandableTreeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ExpandableTreeView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->switchAll((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->onObjectLevel(); break;
        case 2: _t->onPolarLevel(); break;
        case 3: _t->onOpPointLevel(); break;
        case 4: _t->onLevelMinus(); break;
        case 5: _t->onLevelPlus(); break;
        case 6: _t->onHideShowAll((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ExpandableTreeView::*)(bool );
            if (_t _q_method = &ExpandableTreeView::switchAll; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *ExpandableTreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExpandableTreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ExpandableTreeView.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int ExpandableTreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ExpandableTreeView::switchAll(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
