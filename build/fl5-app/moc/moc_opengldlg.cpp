/****************************************************************************
** Meta object code from reading C++ file 'opengldlg.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/opengl/globals/opengldlg.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'opengldlg.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_OpenGlDlg_t {
    uint offsetsAndSizes[28];
    char stringdata0[10];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[20];
    char stringdata5[4];
    char stringdata6[18];
    char stringdata7[16];
    char stringdata8[9];
    char stringdata9[17];
    char stringdata10[8];
    char stringdata11[8];
    char stringdata12[7];
    char stringdata13[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_OpenGlDlg_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_OpenGlDlg_t qt_meta_stringdata_OpenGlDlg = {
    {
        QT_MOC_LITERAL(0, 9),  // "OpenGlDlg"
        QT_MOC_LITERAL(10, 15),  // "onCreateContext"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 19),  // "onRenderWindowReady"
        QT_MOC_LITERAL(47, 19),  // "onRenderWindowError"
        QT_MOC_LITERAL(67, 3),  // "msg"
        QT_MOC_LITERAL(71, 17),  // "onSettingsChanged"
        QT_MOC_LITERAL(89, 15),  // "onMultiSampling"
        QT_MOC_LITERAL(105, 8),  // "onButton"
        QT_MOC_LITERAL(114, 16),  // "QAbstractButton*"
        QT_MOC_LITERAL(131, 7),  // "pButton"
        QT_MOC_LITERAL(139, 7),  // "onApply"
        QT_MOC_LITERAL(147, 6),  // "reject"
        QT_MOC_LITERAL(154, 10)   // "onViewType"
    },
    "OpenGlDlg",
    "onCreateContext",
    "",
    "onRenderWindowReady",
    "onRenderWindowError",
    "msg",
    "onSettingsChanged",
    "onMultiSampling",
    "onButton",
    "QAbstractButton*",
    "pButton",
    "onApply",
    "reject",
    "onViewType"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_OpenGlDlg[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x08,    1 /* Private */,
       3,    0,   69,    2, 0x08,    2 /* Private */,
       4,    1,   70,    2, 0x08,    3 /* Private */,
       6,    0,   73,    2, 0x08,    5 /* Private */,
       7,    0,   74,    2, 0x08,    6 /* Private */,
       8,    1,   75,    2, 0x08,    7 /* Private */,
      11,    0,   78,    2, 0x08,    9 /* Private */,
      12,    0,   79,    2, 0x08,   10 /* Private */,
      13,    0,   80,    2, 0x08,   11 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject OpenGlDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_OpenGlDlg.offsetsAndSizes,
    qt_meta_data_OpenGlDlg,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_OpenGlDlg_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<OpenGlDlg, std::true_type>,
        // method 'onCreateContext'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRenderWindowReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRenderWindowError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onSettingsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMultiSampling'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractButton *, std::false_type>,
        // method 'onApply'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reject'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onViewType'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OpenGlDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OpenGlDlg *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onCreateContext(); break;
        case 1: _t->onRenderWindowReady(); break;
        case 2: _t->onRenderWindowError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->onSettingsChanged(); break;
        case 4: _t->onMultiSampling(); break;
        case 5: _t->onButton((*reinterpret_cast< std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        case 6: _t->onApply(); break;
        case 7: _t->reject(); break;
        case 8: _t->onViewType(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractButton* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *OpenGlDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenGlDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenGlDlg.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int OpenGlDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
