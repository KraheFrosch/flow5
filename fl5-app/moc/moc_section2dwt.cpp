/****************************************************************************
** Meta object code from reading C++ file 'section2dwt.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/widgets/view/section2dwt.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'section2dwt.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11Section2dWtE_t {};
} // unnamed namespace

template <> constexpr inline auto Section2dWt::qt_create_metaobjectdata<qt_meta_tag_ZN11Section2dWtE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Section2dWt",
        "objectModified",
        "",
        "selectedChanged",
        "mouseDragReleased",
        "onClearBackImage",
        "onGridSettings",
        "onLoadBackImage",
        "onBackImageSettings",
        "onDynamicIncrement",
        "onResetScales",
        "onResetXScale",
        "onResetYScale",
        "onResetIncrement",
        "onTranslationIncrement",
        "onZoomIn",
        "onZoomLess",
        "onZoomYOnly",
        "onUpdateImageSettings",
        "bScaleWithView",
        "bFlipH",
        "bFlipV",
        "offset",
        "xscale",
        "yscale",
        "onInsertPt",
        "onRemovePt",
        "onSaveToSvg"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'objectModified'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'selectedChanged'
        QtMocHelpers::SignalData<void(int)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'mouseDragReleased'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onClearBackImage'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onGridSettings'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onLoadBackImage'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onBackImageSettings'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onDynamicIncrement'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onResetScales'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onResetXScale'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onResetYScale'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onResetIncrement'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onTranslationIncrement'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onZoomIn'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onZoomLess'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onZoomYOnly'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onUpdateImageSettings'
        QtMocHelpers::SlotData<void(bool, bool, bool, const QPointF &, double, double)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 19 }, { QMetaType::Bool, 20 }, { QMetaType::Bool, 21 }, { QMetaType::QPointF, 22 },
            { QMetaType::Double, 23 }, { QMetaType::Double, 24 },
        }}),
        // Slot 'onInsertPt'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onRemovePt'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onSaveToSvg'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Section2dWt, qt_meta_tag_ZN11Section2dWtE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Section2dWt::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11Section2dWtE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11Section2dWtE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11Section2dWtE_t>.metaTypes,
    nullptr
} };

void Section2dWt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Section2dWt *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->objectModified(); break;
        case 1: _t->selectedChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->mouseDragReleased(); break;
        case 3: _t->onClearBackImage(); break;
        case 4: _t->onGridSettings(); break;
        case 5: _t->onLoadBackImage(); break;
        case 6: _t->onBackImageSettings(); break;
        case 7: _t->onDynamicIncrement(); break;
        case 8: _t->onResetScales(); break;
        case 9: _t->onResetXScale(); break;
        case 10: _t->onResetYScale(); break;
        case 11: _t->onResetIncrement(); break;
        case 12: _t->onTranslationIncrement(); break;
        case 13: _t->onZoomIn(); break;
        case 14: _t->onZoomLess(); break;
        case 15: _t->onZoomYOnly(); break;
        case 16: _t->onUpdateImageSettings((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[6]))); break;
        case 17: _t->onInsertPt(); break;
        case 18: _t->onRemovePt(); break;
        case 19: _t->onSaveToSvg(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Section2dWt::*)()>(_a, &Section2dWt::objectModified, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Section2dWt::*)(int )>(_a, &Section2dWt::selectedChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Section2dWt::*)()>(_a, &Section2dWt::mouseDragReleased, 2))
            return;
    }
}

const QMetaObject *Section2dWt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Section2dWt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11Section2dWtE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Section2dWt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void Section2dWt::objectModified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Section2dWt::selectedChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void Section2dWt::mouseDragReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
