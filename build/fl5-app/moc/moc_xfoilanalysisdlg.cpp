/****************************************************************************
** Meta object code from reading C++ file 'xfoilanalysisdlg.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/modules/xdirect/analysis/xfoilanalysisdlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xfoilanalysisdlg.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_XFoilAnalysisDlg_t {
    uint offsetsAndSizes[16];
    char stringdata0[17];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[11];
    char stringdata5[9];
    char stringdata6[16];
    char stringdata7[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_XFoilAnalysisDlg_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_XFoilAnalysisDlg_t qt_meta_stringdata_XFoilAnalysisDlg = {
    {
        QT_MOC_LITERAL(0, 16),  // "XFoilAnalysisDlg"
        QT_MOC_LITERAL(17, 16),  // "analysisFinished"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 13),  // "onCancelClose"
        QT_MOC_LITERAL(49, 10),  // "onKeepOpen"
        QT_MOC_LITERAL(60, 8),  // "bChecked"
        QT_MOC_LITERAL(69, 15),  // "onOutputMessage"
        QT_MOC_LITERAL(85, 3)   // "msg"
    },
    "XFoilAnalysisDlg",
    "analysisFinished",
    "",
    "onCancelClose",
    "onKeepOpen",
    "bChecked",
    "onOutputMessage",
    "msg"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_XFoilAnalysisDlg[] = {

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
       1,    0,   38,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    1,   40,    2, 0x08,    3 /* Private */,
       6,    1,   43,    2, 0x08,    5 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject XFoilAnalysisDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_XFoilAnalysisDlg.offsetsAndSizes,
    qt_meta_data_XFoilAnalysisDlg,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_XFoilAnalysisDlg_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<XFoilAnalysisDlg, std::true_type>,
        // method 'analysisFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCancelClose'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onKeepOpen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onOutputMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void XFoilAnalysisDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<XFoilAnalysisDlg *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->analysisFinished(); break;
        case 1: _t->onCancelClose(); break;
        case 2: _t->onKeepOpen((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->onOutputMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (XFoilAnalysisDlg::*)();
            if (_t _q_method = &XFoilAnalysisDlg::analysisFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *XFoilAnalysisDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XFoilAnalysisDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_XFoilAnalysisDlg.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int XFoilAnalysisDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void XFoilAnalysisDlg::analysisFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
