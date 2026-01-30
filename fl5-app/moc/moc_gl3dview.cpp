/****************************************************************************
** Meta object code from reading C++ file 'gl3dview.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/opengl/views/gl3dview.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gl3dview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN8gl3dViewE_t {};
} // unnamed namespace

template <> constexpr inline auto gl3dView::qt_create_metaobjectdata<qt_meta_tag_ZN8gl3dViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
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

    QtMocHelpers::UintData qt_methods {
        // Signal 'viewModified'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onIdleAnimate'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on3dIso'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on3dFlipH'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on3dFlipV'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on3dBot'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on3dTop'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on3dLeft'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on3dRight'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on3dFront'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on3dRear'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on3dReset'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onAxes'
        QtMocHelpers::SlotData<void(bool)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 15 },
        }}),
        // Slot 'onClipPlane'
        QtMocHelpers::SlotData<void(int)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 17 },
        }}),
        // Slot 'onClipScreenPlane'
        QtMocHelpers::SlotData<void(bool)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 19 },
        }}),
        // Slot 'onZAnimate'
        QtMocHelpers::SlotData<void(bool)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 21 },
        }}),
        // Slot 'onBackImageSettings'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onResetIncrement'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onRotationIncrement'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onTranslationIncrement'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onDynamicIncrement'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onSetupLight'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onLight'
        QtMocHelpers::SlotData<void(bool)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 29 },
        }}),
        // Slot 'onClearBackImage'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onLoadBackImage'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onUpdateImageSettings'
        QtMocHelpers::SlotData<void(bool, bool, bool, QPointF const &, double, double)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 33 }, { QMetaType::Bool, 34 }, { QMetaType::Bool, 35 }, { QMetaType::QPointF, 36 },
            { QMetaType::Double, 37 }, { QMetaType::Double, 38 },
        }}),
        // Slot 'onOglLogMsg'
        QtMocHelpers::SlotData<void(QOpenGLDebugMessage const &)>(39, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 40, 41 },
        }}),
        // Slot 'onSaveImage'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<gl3dView, qt_meta_tag_ZN8gl3dViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject gl3dView::staticMetaObject = { {
    QMetaObject::SuperData::link<QOpenGLWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8gl3dViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8gl3dViewE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8gl3dViewE_t>.metaTypes,
    nullptr
} };

void gl3dView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<gl3dView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
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
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
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
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (gl3dView::*)()>(_a, &gl3dView::viewModified, 0))
            return;
    }
}

const QMetaObject *gl3dView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gl3dView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8gl3dViewE_t>.strings))
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
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
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
