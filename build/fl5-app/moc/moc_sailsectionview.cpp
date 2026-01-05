/****************************************************************************
** Meta object code from reading C++ file 'sailsectionview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/editors/boatedit/sailsectionview.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sailsectionview.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_SailSectionView_t {
    uint offsetsAndSizes[16];
    char stringdata0[16];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[11];
    char stringdata5[14];
    char stringdata6[11];
    char stringdata7[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_SailSectionView_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_SailSectionView_t qt_meta_stringdata_SailSectionView = {
    {
        QT_MOC_LITERAL(0, 15),  // "SailSectionView"
        QT_MOC_LITERAL(16, 15),  // "sectionSelected"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 10),  // "onInsertPt"
        QT_MOC_LITERAL(44, 10),  // "onRemovePt"
        QT_MOC_LITERAL(55, 13),  // "onShowNormals"
        QT_MOC_LITERAL(69, 10),  // "onFillFoil"
        QT_MOC_LITERAL(80, 5)   // "bFill"
    },
    "SailSectionView",
    "sectionSelected",
    "",
    "onInsertPt",
    "onRemovePt",
    "onShowNormals",
    "onFillFoil",
    "bFill"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_SailSectionView[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   47,    2, 0x0a,    3 /* Public */,
       4,    0,   48,    2, 0x0a,    4 /* Public */,
       5,    0,   49,    2, 0x0a,    5 /* Public */,
       6,    1,   50,    2, 0x0a,    6 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject SailSectionView::staticMetaObject = { {
    QMetaObject::SuperData::link<Section2dWt::staticMetaObject>(),
    qt_meta_stringdata_SailSectionView.offsetsAndSizes,
    qt_meta_data_SailSectionView,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_SailSectionView_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SailSectionView, std::true_type>,
        // method 'sectionSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onInsertPt'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRemovePt'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onShowNormals'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFillFoil'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void SailSectionView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SailSectionView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sectionSelected((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->onInsertPt(); break;
        case 2: _t->onRemovePt(); break;
        case 3: _t->onShowNormals(); break;
        case 4: _t->onFillFoil((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SailSectionView::*)(int );
            if (_t _q_method = &SailSectionView::sectionSelected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *SailSectionView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SailSectionView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SailSectionView.stringdata0))
        return static_cast<void*>(this);
    return Section2dWt::qt_metacast(_clname);
}

int SailSectionView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Section2dWt::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void SailSectionView::sectionSelected(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
