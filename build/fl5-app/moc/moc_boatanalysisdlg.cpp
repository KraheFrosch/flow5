/****************************************************************************
** Meta object code from reading C++ file 'boatanalysisdlg.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/modules/xsail/analysis/boatanalysisdlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'boatanalysisdlg.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_BoatAnalysisDlg_t {
    uint offsetsAndSizes[24];
    char stringdata0[16];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[14];
    char stringdata5[14];
    char stringdata6[17];
    char stringdata7[17];
    char stringdata8[19];
    char stringdata9[12];
    char stringdata10[4];
    char stringdata11[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_BoatAnalysisDlg_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_BoatAnalysisDlg_t qt_meta_stringdata_BoatAnalysisDlg = {
    {
        QT_MOC_LITERAL(0, 15),  // "BoatAnalysisDlg"
        QT_MOC_LITERAL(16, 16),  // "analysisFinished"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 14),  // "onTaskFinished"
        QT_MOC_LITERAL(49, 13),  // "onCancelClose"
        QT_MOC_LITERAL(63, 13),  // "onLiveVortons"
        QT_MOC_LITERAL(77, 16),  // "onKeepOpenErrors"
        QT_MOC_LITERAL(94, 16),  // "onStopIterations"
        QT_MOC_LITERAL(111, 18),  // "onOutputStdMessage"
        QT_MOC_LITERAL(130, 11),  // "std::string"
        QT_MOC_LITERAL(142, 3),  // "msg"
        QT_MOC_LITERAL(146, 15)   // "onOutputMessage"
    },
    "BoatAnalysisDlg",
    "analysisFinished",
    "",
    "onTaskFinished",
    "onCancelClose",
    "onLiveVortons",
    "onKeepOpenErrors",
    "onStopIterations",
    "onOutputStdMessage",
    "std::string",
    "msg",
    "onOutputMessage"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_BoatAnalysisDlg[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   63,    2, 0x09,    2 /* Protected */,
       4,    0,   64,    2, 0x09,    3 /* Protected */,
       5,    0,   65,    2, 0x09,    4 /* Protected */,
       6,    0,   66,    2, 0x09,    5 /* Protected */,
       7,    0,   67,    2, 0x09,    6 /* Protected */,
       8,    1,   68,    2, 0x09,    7 /* Protected */,
      11,    1,   71,    2, 0x09,    9 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

Q_CONSTINIT const QMetaObject BoatAnalysisDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_BoatAnalysisDlg.offsetsAndSizes,
    qt_meta_data_BoatAnalysisDlg,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_BoatAnalysisDlg_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BoatAnalysisDlg, std::true_type>,
        // method 'analysisFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTaskFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCancelClose'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onLiveVortons'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onKeepOpenErrors'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onStopIterations'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onOutputStdMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::string const &, std::false_type>,
        // method 'onOutputMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>
    >,
    nullptr
} };

void BoatAnalysisDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BoatAnalysisDlg *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->analysisFinished(); break;
        case 1: _t->onTaskFinished(); break;
        case 2: _t->onCancelClose(); break;
        case 3: _t->onLiveVortons(); break;
        case 4: _t->onKeepOpenErrors(); break;
        case 5: _t->onStopIterations(); break;
        case 6: _t->onOutputStdMessage((*reinterpret_cast< std::add_pointer_t<std::string>>(_a[1]))); break;
        case 7: _t->onOutputMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BoatAnalysisDlg::*)();
            if (_t _q_method = &BoatAnalysisDlg::analysisFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *BoatAnalysisDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BoatAnalysisDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BoatAnalysisDlg.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int BoatAnalysisDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void BoatAnalysisDlg::analysisFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
