/****************************************************************************
** Meta object code from reading C++ file 'gl2dview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/opengl/views/gl2dview.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gl2dview.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_gl2dView_t {
    uint offsetsAndSizes[16];
    char stringdata0[9];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[23];
    char stringdata5[17];
    char stringdata6[10];
    char stringdata7[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_gl2dView_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_gl2dView_t qt_meta_stringdata_gl2dView = {
    {
        QT_MOC_LITERAL(0, 8),  // "gl2dView"
        QT_MOC_LITERAL(9, 7),  // "ready2d"
        QT_MOC_LITERAL(17, 0),  // ""
        QT_MOC_LITERAL(18, 18),  // "onDynamicIncrement"
        QT_MOC_LITERAL(37, 22),  // "onTranslationIncrement"
        QT_MOC_LITERAL(60, 16),  // "onResetIncrement"
        QT_MOC_LITERAL(77, 9),  // "on2dReset"
        QT_MOC_LITERAL(87, 11)   // "onSaveImage"
    },
    "gl2dView",
    "ready2d",
    "",
    "onDynamicIncrement",
    "onTranslationIncrement",
    "onResetIncrement",
    "on2dReset",
    "onSaveImage"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_gl2dView[] = {

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
       3,    0,   51,    2, 0x09,    2 /* Protected */,
       4,    0,   52,    2, 0x09,    3 /* Protected */,
       5,    0,   53,    2, 0x09,    4 /* Protected */,
       6,    0,   54,    2, 0x09,    5 /* Protected */,
       7,    0,   55,    2, 0x09,    6 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject gl2dView::staticMetaObject = { {
    QMetaObject::SuperData::link<QOpenGLWidget::staticMetaObject>(),
    qt_meta_stringdata_gl2dView.offsetsAndSizes,
    qt_meta_data_gl2dView,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_gl2dView_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<gl2dView, std::true_type>,
        // method 'ready2d'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDynamicIncrement'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTranslationIncrement'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onResetIncrement'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on2dReset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSaveImage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void gl2dView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<gl2dView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ready2d(); break;
        case 1: _t->onDynamicIncrement(); break;
        case 2: _t->onTranslationIncrement(); break;
        case 3: _t->onResetIncrement(); break;
        case 4: _t->on2dReset(); break;
        case 5: _t->onSaveImage(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (gl2dView::*)();
            if (_t _q_method = &gl2dView::ready2d; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *gl2dView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gl2dView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gl2dView.stringdata0))
        return static_cast<void*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int gl2dView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void gl2dView::ready2d()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
