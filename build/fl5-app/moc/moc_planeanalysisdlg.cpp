/****************************************************************************
** Meta object code from reading C++ file 'planeanalysisdlg.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/modules/xplane/analysis/planeanalysisdlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'planeanalysisdlg.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_PlaneAnalysisDlg_t {
    uint offsetsAndSizes[22];
    char stringdata0[17];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[14];
    char stringdata5[17];
    char stringdata6[14];
    char stringdata7[16];
    char stringdata8[4];
    char stringdata9[17];
    char stringdata10[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_PlaneAnalysisDlg_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_PlaneAnalysisDlg_t qt_meta_stringdata_PlaneAnalysisDlg = {
    {
        QT_MOC_LITERAL(0, 16),  // "PlaneAnalysisDlg"
        QT_MOC_LITERAL(17, 16),  // "analysisFinished"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 11),  // "PlanePolar*"
        QT_MOC_LITERAL(47, 13),  // "onCancelClose"
        QT_MOC_LITERAL(61, 16),  // "onKeepOpenErrors"
        QT_MOC_LITERAL(78, 13),  // "onLiveVortons"
        QT_MOC_LITERAL(92, 15),  // "onOutputMessage"
        QT_MOC_LITERAL(108, 3),  // "msg"
        QT_MOC_LITERAL(112, 16),  // "onStopIterations"
        QT_MOC_LITERAL(129, 14)   // "onTaskFinished"
    },
    "PlaneAnalysisDlg",
    "analysisFinished",
    "",
    "PlanePolar*",
    "onCancelClose",
    "onKeepOpenErrors",
    "onLiveVortons",
    "onOutputMessage",
    "msg",
    "onStopIterations",
    "onTaskFinished"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_PlaneAnalysisDlg[] = {

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
       4,    0,   59,    2, 0x09,    3 /* Protected */,
       5,    0,   60,    2, 0x09,    4 /* Protected */,
       6,    0,   61,    2, 0x09,    5 /* Protected */,
       7,    1,   62,    2, 0x09,    6 /* Protected */,
       9,    0,   65,    2, 0x09,    8 /* Protected */,
      10,    0,   66,    2, 0x09,    9 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject PlaneAnalysisDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_PlaneAnalysisDlg.offsetsAndSizes,
    qt_meta_data_PlaneAnalysisDlg,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_PlaneAnalysisDlg_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PlaneAnalysisDlg, std::true_type>,
        // method 'analysisFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<PlanePolar *, std::false_type>,
        // method 'onCancelClose'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onKeepOpenErrors'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onLiveVortons'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onOutputMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onStopIterations'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTaskFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void PlaneAnalysisDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlaneAnalysisDlg *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->analysisFinished((*reinterpret_cast< std::add_pointer_t<PlanePolar*>>(_a[1]))); break;
        case 1: _t->onCancelClose(); break;
        case 2: _t->onKeepOpenErrors(); break;
        case 3: _t->onLiveVortons(); break;
        case 4: _t->onOutputMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->onStopIterations(); break;
        case 6: _t->onTaskFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlaneAnalysisDlg::*)(PlanePolar * );
            if (_t _q_method = &PlaneAnalysisDlg::analysisFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *PlaneAnalysisDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlaneAnalysisDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlaneAnalysisDlg.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PlaneAnalysisDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void PlaneAnalysisDlg::analysisFinished(PlanePolar * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
