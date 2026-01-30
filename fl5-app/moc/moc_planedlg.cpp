/****************************************************************************
** Meta object code from reading C++ file 'planedlg.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/editors/planeedit/planedlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'planedlg.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8PlaneDlgE_t {};
} // unnamed namespace

template <> constexpr inline auto PlaneDlg::qt_create_metaobjectdata<qt_meta_tag_ZN8PlaneDlgE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PlaneDlg",
        "onButton",
        "",
        "QAbstractButton*",
        "pButton",
        "onFlipNormals",
        "onOK",
        "iExitCode",
        "onPlaneInertia",
        "onCenterViewOnPanel",
        "onCheckFreeEdges",
        "onCheckMesh",
        "onClearHighlighted",
        "onConnectPanels",
        "onNodeDistance",
        "onMergeFuseToWingNodes",
        "onMetaDataChanged",
        "onPickedNode",
        "iNode",
        "onUpdatePlane",
        "onUpdatePlaneProps",
        "reject"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onButton'
        QtMocHelpers::SlotData<void(QAbstractButton *)>(1, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'onFlipNormals'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onOK'
        QtMocHelpers::SlotData<void(int)>(6, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Slot 'onOK'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessProtected | QMC::MethodCloned, QMetaType::Void),
        // Slot 'onPlaneInertia'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onCenterViewOnPanel'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onCheckFreeEdges'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onCheckMesh'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onClearHighlighted'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onConnectPanels'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onNodeDistance'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onMergeFuseToWingNodes'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onMetaDataChanged'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onPickedNode'
        QtMocHelpers::SlotData<void(int)>(17, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 18 },
        }}),
        // Slot 'onUpdatePlane'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onUpdatePlaneProps'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'reject'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PlaneDlg, qt_meta_tag_ZN8PlaneDlgE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PlaneDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<XflDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8PlaneDlgE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8PlaneDlgE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8PlaneDlgE_t>.metaTypes,
    nullptr
} };

void PlaneDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PlaneDlg *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onButton((*reinterpret_cast< std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        case 1: _t->onFlipNormals(); break;
        case 2: _t->onOK((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->onOK(); break;
        case 4: _t->onPlaneInertia(); break;
        case 5: _t->onCenterViewOnPanel(); break;
        case 6: _t->onCheckFreeEdges(); break;
        case 7: _t->onCheckMesh(); break;
        case 8: _t->onClearHighlighted(); break;
        case 9: _t->onConnectPanels(); break;
        case 10: _t->onNodeDistance(); break;
        case 11: _t->onMergeFuseToWingNodes(); break;
        case 12: _t->onMetaDataChanged(); break;
        case 13: _t->onPickedNode((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->onUpdatePlane(); break;
        case 15: _t->onUpdatePlaneProps(); break;
        case 16: _t->reject(); break;
        default: ;
        }
    }
}

const QMetaObject *PlaneDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlaneDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8PlaneDlgE_t>.strings))
        return static_cast<void*>(this);
    return XflDialog::qt_metacast(_clname);
}

int PlaneDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XflDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
