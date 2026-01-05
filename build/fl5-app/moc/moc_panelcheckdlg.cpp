/****************************************************************************
** Meta object code from reading C++ file 'panelcheckdlg.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/mesh/panelcheckdlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'panelcheckdlg.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_PanelCheckDlg_t {
    uint offsetsAndSizes[16];
    char stringdata0[14];
    char stringdata1[7];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[16];
    char stringdata5[15];
    char stringdata6[15];
    char stringdata7[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_PanelCheckDlg_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_PanelCheckDlg_t qt_meta_stringdata_PanelCheckDlg = {
    {
        QT_MOC_LITERAL(0, 13),  // "PanelCheckDlg"
        QT_MOC_LITERAL(14, 6),  // "accept"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 13),  // "onCheckSkinny"
        QT_MOC_LITERAL(36, 15),  // "onCheckMinAngle"
        QT_MOC_LITERAL(52, 14),  // "onCheckMinArea"
        QT_MOC_LITERAL(67, 14),  // "onCheckMinSize"
        QT_MOC_LITERAL(82, 15)   // "onCheckQuadWarp"
    },
    "PanelCheckDlg",
    "accept",
    "",
    "onCheckSkinny",
    "onCheckMinAngle",
    "onCheckMinArea",
    "onCheckMinSize",
    "onCheckQuadWarp"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_PanelCheckDlg[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    0,   54,    2, 0x08,    5 /* Private */,
       7,    0,   55,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject PanelCheckDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_PanelCheckDlg.offsetsAndSizes,
    qt_meta_data_PanelCheckDlg,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_PanelCheckDlg_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PanelCheckDlg, std::true_type>,
        // method 'accept'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCheckSkinny'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCheckMinAngle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCheckMinArea'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCheckMinSize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCheckQuadWarp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void PanelCheckDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PanelCheckDlg *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->onCheckSkinny(); break;
        case 2: _t->onCheckMinAngle(); break;
        case 3: _t->onCheckMinArea(); break;
        case 4: _t->onCheckMinSize(); break;
        case 5: _t->onCheckQuadWarp(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *PanelCheckDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PanelCheckDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PanelCheckDlg.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PanelCheckDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
