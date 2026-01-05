/****************************************************************************
** Meta object code from reading C++ file 'legendwt.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/graphs/containers/legendwt.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'legendwt.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_LegendWt_t {
    uint offsetsAndSizes[20];
    char stringdata0[9];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[23];
    char stringdata5[10];
    char stringdata6[19];
    char stringdata7[3];
    char stringdata8[20];
    char stringdata9[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_LegendWt_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_LegendWt_t qt_meta_stringdata_LegendWt = {
    {
        QT_MOC_LITERAL(0, 8),  // "LegendWt"
        QT_MOC_LITERAL(9, 12),  // "updateGraphs"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 17),  // "onClickedCurveBtn"
        QT_MOC_LITERAL(41, 22),  // "onRightClickedCurveBtn"
        QT_MOC_LITERAL(64, 9),  // "LineStyle"
        QT_MOC_LITERAL(74, 18),  // "onClickedCurveLine"
        QT_MOC_LITERAL(93, 2),  // "ls"
        QT_MOC_LITERAL(96, 19),  // "onDeleteActiveCurve"
        QT_MOC_LITERAL(116, 19)   // "onRenameActiveCurve"
    },
    "LegendWt",
    "updateGraphs",
    "",
    "onClickedCurveBtn",
    "onRightClickedCurveBtn",
    "LineStyle",
    "onClickedCurveLine",
    "ls",
    "onDeleteActiveCurve",
    "onRenameActiveCurve"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_LegendWt[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    1,   52,    2, 0x08,    3 /* Private */,
       6,    1,   55,    2, 0x08,    5 /* Private */,
       8,    0,   58,    2, 0x08,    7 /* Private */,
       9,    0,   59,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 5,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject LegendWt::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_LegendWt.offsetsAndSizes,
    qt_meta_data_LegendWt,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_LegendWt_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LegendWt, std::true_type>,
        // method 'updateGraphs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onClickedCurveBtn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRightClickedCurveBtn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<LineStyle, std::false_type>,
        // method 'onClickedCurveLine'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<LineStyle, std::false_type>,
        // method 'onDeleteActiveCurve'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRenameActiveCurve'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void LegendWt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LegendWt *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateGraphs(); break;
        case 1: _t->onClickedCurveBtn(); break;
        case 2: _t->onRightClickedCurveBtn((*reinterpret_cast< std::add_pointer_t<LineStyle>>(_a[1]))); break;
        case 3: _t->onClickedCurveLine((*reinterpret_cast< std::add_pointer_t<LineStyle>>(_a[1]))); break;
        case 4: _t->onDeleteActiveCurve(); break;
        case 5: _t->onRenameActiveCurve(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LineStyle >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LineStyle >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LegendWt::*)();
            if (_t _q_method = &LegendWt::updateGraphs; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *LegendWt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LegendWt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LegendWt.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int LegendWt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void LegendWt::updateGraphs()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
