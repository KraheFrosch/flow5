/****************************************************************************
** Meta object code from reading C++ file 'planepolardlg.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/editors/analysis3ddef/planepolardlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'planepolardlg.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13PlanePolarDlgE_t {};
} // unnamed namespace

template <> constexpr inline auto PlanePolarDlg::qt_create_metaobjectdata<qt_meta_tag_ZN13PlanePolarDlgE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PlanePolarDlg",
        "onReset",
        "",
        "onArea",
        "onAeroData",
        "onPlaneInertia",
        "onWingSurfaces",
        "onNameOptions",
        "onViscous",
        "onGroundEffect",
        "onFuseDrag",
        "onVortonWake",
        "onFlapControls"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onReset'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onArea'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onAeroData'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onPlaneInertia'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onWingSurfaces'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onNameOptions'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onViscous'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onGroundEffect'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onFuseDrag'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onVortonWake'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onFlapControls'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PlanePolarDlg, qt_meta_tag_ZN13PlanePolarDlgE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PlanePolarDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<Polar3dDlg::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13PlanePolarDlgE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13PlanePolarDlgE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13PlanePolarDlgE_t>.metaTypes,
    nullptr
} };

void PlanePolarDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PlanePolarDlg *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onReset(); break;
        case 1: _t->onArea(); break;
        case 2: _t->onAeroData(); break;
        case 3: _t->onPlaneInertia(); break;
        case 4: _t->onWingSurfaces(); break;
        case 5: _t->onNameOptions(); break;
        case 6: _t->onViscous(); break;
        case 7: _t->onGroundEffect(); break;
        case 8: _t->onFuseDrag(); break;
        case 9: _t->onVortonWake(); break;
        case 10: _t->onFlapControls(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *PlanePolarDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlanePolarDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13PlanePolarDlgE_t>.strings))
        return static_cast<void*>(this);
    return Polar3dDlg::qt_metacast(_clname);
}

int PlanePolarDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Polar3dDlg::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
