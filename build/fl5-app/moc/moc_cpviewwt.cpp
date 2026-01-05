/****************************************************************************
** Meta object code from reading C++ file 'cpviewwt.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/modules/xplane/graphs/cpviewwt.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cpviewwt.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CpViewWt_t {
    uint offsetsAndSizes[14];
    char stringdata0[9];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[29];
    char stringdata5[19];
    char stringdata6[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CpViewWt_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CpViewWt_t qt_meta_stringdata_CpViewWt = {
    {
        QT_MOC_LITERAL(0, 8),  // "CpViewWt"
        QT_MOC_LITERAL(9, 21),  // "onResetCurGraphScales"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 23),  // "onExportGraphDataToFile"
        QT_MOC_LITERAL(56, 28),  // "onExportGraphDataToClipboard"
        QT_MOC_LITERAL(85, 18),  // "onCurGraphSettings"
        QT_MOC_LITERAL(104, 15)   // "onUpdateCpGraph"
    },
    "CpViewWt",
    "onResetCurGraphScales",
    "",
    "onExportGraphDataToFile",
    "onExportGraphDataToClipboard",
    "onCurGraphSettings",
    "onUpdateCpGraph"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CpViewWt[] = {

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
       1,    0,   44,    2, 0x0a,    1 /* Public */,
       3,    0,   45,    2, 0x0a,    2 /* Public */,
       4,    0,   46,    2, 0x0a,    3 /* Public */,
       5,    0,   47,    2, 0x0a,    4 /* Public */,
       6,    0,   48,    2, 0x0a,    5 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject CpViewWt::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CpViewWt.offsetsAndSizes,
    qt_meta_data_CpViewWt,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CpViewWt_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CpViewWt, std::true_type>,
        // method 'onResetCurGraphScales'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onExportGraphDataToFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onExportGraphDataToClipboard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCurGraphSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onUpdateCpGraph'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void CpViewWt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CpViewWt *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onResetCurGraphScales(); break;
        case 1: _t->onExportGraphDataToFile(); break;
        case 2: _t->onExportGraphDataToClipboard(); break;
        case 3: _t->onCurGraphSettings(); break;
        case 4: _t->onUpdateCpGraph(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *CpViewWt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CpViewWt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CpViewWt.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CpViewWt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
