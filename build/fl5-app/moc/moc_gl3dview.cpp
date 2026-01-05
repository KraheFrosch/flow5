/****************************************************************************
** Meta object code from reading C++ file 'gl3dview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../fl5-app/interfaces/opengl/views/gl3dview.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gl3dview.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_gl3dView_t {
    uint offsetsAndSizes[86];
    char stringdata0[9];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[8];
    char stringdata5[10];
    char stringdata6[10];
    char stringdata7[8];
    char stringdata8[8];
    char stringdata9[9];
    char stringdata10[10];
    char stringdata11[10];
    char stringdata12[9];
    char stringdata13[10];
    char stringdata14[7];
    char stringdata15[9];
    char stringdata16[12];
    char stringdata17[4];
    char stringdata18[18];
    char stringdata19[6];
    char stringdata20[11];
    char stringdata21[10];
    char stringdata22[20];
    char stringdata23[17];
    char stringdata24[20];
    char stringdata25[23];
    char stringdata26[19];
    char stringdata27[13];
    char stringdata28[8];
    char stringdata29[4];
    char stringdata30[17];
    char stringdata31[16];
    char stringdata32[22];
    char stringdata33[15];
    char stringdata34[7];
    char stringdata35[7];
    char stringdata36[7];
    char stringdata37[7];
    char stringdata38[7];
    char stringdata39[12];
    char stringdata40[20];
    char stringdata41[7];
    char stringdata42[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_gl3dView_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_gl3dView_t qt_meta_stringdata_gl3dView = {
    {
        QT_MOC_LITERAL(0, 8),  // "gl3dView"
        QT_MOC_LITERAL(9, 12),  // "viewModified"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 13),  // "onIdleAnimate"
        QT_MOC_LITERAL(37, 7),  // "on3dIso"
        QT_MOC_LITERAL(45, 9),  // "on3dFlipH"
        QT_MOC_LITERAL(55, 9),  // "on3dFlipV"
        QT_MOC_LITERAL(65, 7),  // "on3dBot"
        QT_MOC_LITERAL(73, 7),  // "on3dTop"
        QT_MOC_LITERAL(81, 8),  // "on3dLeft"
        QT_MOC_LITERAL(90, 9),  // "on3dRight"
        QT_MOC_LITERAL(100, 9),  // "on3dFront"
        QT_MOC_LITERAL(110, 8),  // "on3dRear"
        QT_MOC_LITERAL(119, 9),  // "on3dReset"
        QT_MOC_LITERAL(129, 6),  // "onAxes"
        QT_MOC_LITERAL(136, 8),  // "bChecked"
        QT_MOC_LITERAL(145, 11),  // "onClipPlane"
        QT_MOC_LITERAL(157, 3),  // "pos"
        QT_MOC_LITERAL(161, 17),  // "onClipScreenPlane"
        QT_MOC_LITERAL(179, 5),  // "bClip"
        QT_MOC_LITERAL(185, 10),  // "onZAnimate"
        QT_MOC_LITERAL(196, 9),  // "bZAnimate"
        QT_MOC_LITERAL(206, 19),  // "onBackImageSettings"
        QT_MOC_LITERAL(226, 16),  // "onResetIncrement"
        QT_MOC_LITERAL(243, 19),  // "onRotationIncrement"
        QT_MOC_LITERAL(263, 22),  // "onTranslationIncrement"
        QT_MOC_LITERAL(286, 18),  // "onDynamicIncrement"
        QT_MOC_LITERAL(305, 12),  // "onSetupLight"
        QT_MOC_LITERAL(318, 7),  // "onLight"
        QT_MOC_LITERAL(326, 3),  // "bOn"
        QT_MOC_LITERAL(330, 16),  // "onClearBackImage"
        QT_MOC_LITERAL(347, 15),  // "onLoadBackImage"
        QT_MOC_LITERAL(363, 21),  // "onUpdateImageSettings"
        QT_MOC_LITERAL(385, 14),  // "bScaleWithView"
        QT_MOC_LITERAL(400, 6),  // "bFlipH"
        QT_MOC_LITERAL(407, 6),  // "bFlipV"
        QT_MOC_LITERAL(414, 6),  // "offset"
        QT_MOC_LITERAL(421, 6),  // "xscale"
        QT_MOC_LITERAL(428, 6),  // "yscale"
        QT_MOC_LITERAL(435, 11),  // "onOglLogMsg"
        QT_MOC_LITERAL(447, 19),  // "QOpenGLDebugMessage"
        QT_MOC_LITERAL(467, 6),  // "logmsg"
        QT_MOC_LITERAL(474, 11)   // "onSaveImage"
    },
    "gl3dView",
    "viewModified",
    "",
    "onIdleAnimate",
    "on3dIso",
    "on3dFlipH",
    "on3dFlipV",
    "on3dBot",
    "on3dTop",
    "on3dLeft",
    "on3dRight",
    "on3dFront",
    "on3dRear",
    "on3dReset",
    "onAxes",
    "bChecked",
    "onClipPlane",
    "pos",
    "onClipScreenPlane",
    "bClip",
    "onZAnimate",
    "bZAnimate",
    "onBackImageSettings",
    "onResetIncrement",
    "onRotationIncrement",
    "onTranslationIncrement",
    "onDynamicIncrement",
    "onSetupLight",
    "onLight",
    "bOn",
    "onClearBackImage",
    "onLoadBackImage",
    "onUpdateImageSettings",
    "bScaleWithView",
    "bFlipH",
    "bFlipV",
    "offset",
    "xscale",
    "yscale",
    "onOglLogMsg",
    "QOpenGLDebugMessage",
    "logmsg",
    "onSaveImage"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_gl3dView[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  182,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,  183,    2, 0x0a,    2 /* Public */,
       4,    0,  184,    2, 0x0a,    3 /* Public */,
       5,    0,  185,    2, 0x0a,    4 /* Public */,
       6,    0,  186,    2, 0x0a,    5 /* Public */,
       7,    0,  187,    2, 0x0a,    6 /* Public */,
       8,    0,  188,    2, 0x0a,    7 /* Public */,
       9,    0,  189,    2, 0x0a,    8 /* Public */,
      10,    0,  190,    2, 0x0a,    9 /* Public */,
      11,    0,  191,    2, 0x0a,   10 /* Public */,
      12,    0,  192,    2, 0x0a,   11 /* Public */,
      13,    0,  193,    2, 0x0a,   12 /* Public */,
      14,    1,  194,    2, 0x0a,   13 /* Public */,
      16,    1,  197,    2, 0x0a,   15 /* Public */,
      18,    1,  200,    2, 0x0a,   17 /* Public */,
      20,    1,  203,    2, 0x0a,   19 /* Public */,
      22,    0,  206,    2, 0x0a,   21 /* Public */,
      23,    0,  207,    2, 0x0a,   22 /* Public */,
      24,    0,  208,    2, 0x0a,   23 /* Public */,
      25,    0,  209,    2, 0x0a,   24 /* Public */,
      26,    0,  210,    2, 0x0a,   25 /* Public */,
      27,    0,  211,    2, 0x0a,   26 /* Public */,
      28,    1,  212,    2, 0x0a,   27 /* Public */,
      30,    0,  215,    2, 0x0a,   29 /* Public */,
      31,    0,  216,    2, 0x0a,   30 /* Public */,
      32,    6,  217,    2, 0x0a,   31 /* Public */,
      39,    1,  230,    2, 0x0a,   38 /* Public */,
      42,    0,  233,    2, 0x0a,   40 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::QPointF, QMetaType::Double, QMetaType::Double,   33,   34,   35,   36,   37,   38,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject gl3dView::staticMetaObject = { {
    QMetaObject::SuperData::link<QOpenGLWidget::staticMetaObject>(),
    qt_meta_stringdata_gl3dView.offsetsAndSizes,
    qt_meta_data_gl3dView,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_gl3dView_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<gl3dView, std::true_type>,
        // method 'viewModified'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onIdleAnimate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on3dIso'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on3dFlipH'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on3dFlipV'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on3dBot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on3dTop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on3dLeft'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on3dRight'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on3dFront'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on3dRear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on3dReset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onAxes'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onClipPlane'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onClipScreenPlane'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onZAnimate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onBackImageSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onResetIncrement'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRotationIncrement'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTranslationIncrement'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDynamicIncrement'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSetupLight'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onLight'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onClearBackImage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onLoadBackImage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onUpdateImageSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPointF const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'onOglLogMsg'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QOpenGLDebugMessage const &, std::false_type>,
        // method 'onSaveImage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void gl3dView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<gl3dView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->viewModified(); break;
        case 1: _t->onIdleAnimate(); break;
        case 2: _t->on3dIso(); break;
        case 3: _t->on3dFlipH(); break;
        case 4: _t->on3dFlipV(); break;
        case 5: _t->on3dBot(); break;
        case 6: _t->on3dTop(); break;
        case 7: _t->on3dLeft(); break;
        case 8: _t->on3dRight(); break;
        case 9: _t->on3dFront(); break;
        case 10: _t->on3dRear(); break;
        case 11: _t->on3dReset(); break;
        case 12: _t->onAxes((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->onClipPlane((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->onClipScreenPlane((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->onZAnimate((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->onBackImageSettings(); break;
        case 17: _t->onResetIncrement(); break;
        case 18: _t->onRotationIncrement(); break;
        case 19: _t->onTranslationIncrement(); break;
        case 20: _t->onDynamicIncrement(); break;
        case 21: _t->onSetupLight(); break;
        case 22: _t->onLight((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 23: _t->onClearBackImage(); break;
        case 24: _t->onLoadBackImage(); break;
        case 25: _t->onUpdateImageSettings((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[6]))); break;
        case 26: _t->onOglLogMsg((*reinterpret_cast< std::add_pointer_t<QOpenGLDebugMessage>>(_a[1]))); break;
        case 27: _t->onSaveImage(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QOpenGLDebugMessage >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (gl3dView::*)();
            if (_t _q_method = &gl3dView::viewModified; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *gl3dView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gl3dView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gl3dView.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QOpenGLExtraFunctions"))
        return static_cast< QOpenGLExtraFunctions*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int gl3dView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    return _id;
}

// SIGNAL 0
void gl3dView::viewModified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
