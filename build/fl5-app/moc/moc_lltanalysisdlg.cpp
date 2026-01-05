/****************************************************************************
** Meta object code from reading C++ file 'lltanalysisdlg.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/modules/xplane/analysis/lltanalysisdlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lltanalysisdlg.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_LLTAnalysisDlg_t {
    uint offsetsAndSizes[18];
    char stringdata0[15];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[17];
    char stringdata5[14];
    char stringdata6[15];
    char stringdata7[16];
    char stringdata8[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_LLTAnalysisDlg_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_LLTAnalysisDlg_t qt_meta_stringdata_LLTAnalysisDlg = {
    {
        QT_MOC_LITERAL(0, 14),  // "LLTAnalysisDlg"
        QT_MOC_LITERAL(15, 16),  // "analysisFinished"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 11),  // "PlanePolar*"
        QT_MOC_LITERAL(45, 16),  // "onCancelAnalysis"
        QT_MOC_LITERAL(62, 13),  // "onClearCurves"
        QT_MOC_LITERAL(76, 14),  // "onTaskFinished"
        QT_MOC_LITERAL(91, 15),  // "onOutputMessage"
        QT_MOC_LITERAL(107, 3)   // "msg"
    },
    "LLTAnalysisDlg",
    "analysisFinished",
    "",
    "PlanePolar*",
    "onCancelAnalysis",
    "onClearCurves",
    "onTaskFinished",
    "onOutputMessage",
    "msg"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_LLTAnalysisDlg[] = {

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
       4,    0,   47,    2, 0x08,    3 /* Private */,
       5,    0,   48,    2, 0x08,    4 /* Private */,
       6,    0,   49,    2, 0x08,    5 /* Private */,
       7,    1,   50,    2, 0x08,    6 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject LLTAnalysisDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_LLTAnalysisDlg.offsetsAndSizes,
    qt_meta_data_LLTAnalysisDlg,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_LLTAnalysisDlg_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LLTAnalysisDlg, std::true_type>,
        // method 'analysisFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<PlanePolar *, std::false_type>,
        // method 'onCancelAnalysis'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onClearCurves'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTaskFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onOutputMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>
    >,
    nullptr
} };

void LLTAnalysisDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LLTAnalysisDlg *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->analysisFinished((*reinterpret_cast< std::add_pointer_t<PlanePolar*>>(_a[1]))); break;
        case 1: _t->onCancelAnalysis(); break;
        case 2: _t->onClearCurves(); break;
        case 3: _t->onTaskFinished(); break;
        case 4: _t->onOutputMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LLTAnalysisDlg::*)(PlanePolar * );
            if (_t _q_method = &LLTAnalysisDlg::analysisFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *LLTAnalysisDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LLTAnalysisDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LLTAnalysisDlg.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int LLTAnalysisDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void LLTAnalysisDlg::analysisFinished(PlanePolar * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
