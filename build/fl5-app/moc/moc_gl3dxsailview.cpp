/****************************************************************************
** Meta object code from reading C++ file 'gl3dxsailview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/modules/xsail/view/gl3dxsailview.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gl3dxsailview.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_gl3dXSailView_t {
    uint offsetsAndSizes[12];
    char stringdata0[14];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[16];
    char stringdata5[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_gl3dXSailView_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_gl3dXSailView_t qt_meta_stringdata_gl3dXSailView = {
    {
        QT_MOC_LITERAL(0, 13),  // "gl3dXSailView"
        QT_MOC_LITERAL(14, 10),  // "onWindBack"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 11),  // "onWindFront"
        QT_MOC_LITERAL(38, 15),  // "onCancelThreads"
        QT_MOC_LITERAL(54, 16)   // "onPartSelClicked"
    },
    "gl3dXSailView",
    "onWindBack",
    "",
    "onWindFront",
    "onCancelThreads",
    "onPartSelClicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_gl3dXSailView[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x09,    1 /* Protected */,
       3,    0,   39,    2, 0x09,    2 /* Protected */,
       4,    0,   40,    2, 0x09,    3 /* Protected */,
       5,    0,   41,    2, 0x09,    4 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject gl3dXSailView::staticMetaObject = { {
    QMetaObject::SuperData::link<gl3dXflView::staticMetaObject>(),
    qt_meta_stringdata_gl3dXSailView.offsetsAndSizes,
    qt_meta_data_gl3dXSailView,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_gl3dXSailView_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<gl3dXSailView, std::true_type>,
        // method 'onWindBack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onWindFront'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCancelThreads'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onPartSelClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void gl3dXSailView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<gl3dXSailView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onWindBack(); break;
        case 1: _t->onWindFront(); break;
        case 2: _t->onCancelThreads(); break;
        case 3: _t->onPartSelClicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *gl3dXSailView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gl3dXSailView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gl3dXSailView.stringdata0))
        return static_cast<void*>(this);
    return gl3dXflView::qt_metacast(_clname);
}

int gl3dXSailView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = gl3dXflView::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
