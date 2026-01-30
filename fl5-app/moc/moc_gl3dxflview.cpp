/****************************************************************************
** Meta object code from reading C++ file 'gl3dxflview.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/opengl/fl5views/gl3dxflview.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gl3dxflview.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11gl3dXflViewE_t {};
} // unnamed namespace

template <> constexpr inline auto gl3dXflView::qt_create_metaobjectdata<qt_meta_tag_ZN11gl3dXflViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "gl3dXflView",
        "pickedNode",
        "",
        "Vector3d",
        "pickedNodeIndex",
        "pickedNodePair",
        "std::pair<int,int>",
        "pickedEdge",
        "pickedFace",
        "panelSelected",
        "partSelected",
        "Part*",
        "onSurfaces",
        "bChecked",
        "onPanels",
        "onNormals",
        "onOutline",
        "onFoilNames",
        "onShowMasses",
        "onTessellation",
        "onHighlightPanel",
        "onCtrlPoints",
        "onCornerPts",
        "onPartSelClicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'pickedNode'
        QtMocHelpers::SignalData<void(Vector3d)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Signal 'pickedNodeIndex'
        QtMocHelpers::SignalData<void(int)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'pickedNodePair'
        QtMocHelpers::SignalData<void(QPair<int,int>)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 2 },
        }}),
        // Signal 'pickedEdge'
        QtMocHelpers::SignalData<void(int, int)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 }, { QMetaType::Int, 2 },
        }}),
        // Signal 'pickedFace'
        QtMocHelpers::SignalData<void(int, int)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 }, { QMetaType::Int, 2 },
        }}),
        // Signal 'panelSelected'
        QtMocHelpers::SignalData<void(int)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'partSelected'
        QtMocHelpers::SignalData<void(Part *)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 2 },
        }}),
        // Slot 'onSurfaces'
        QtMocHelpers::SlotData<void(bool)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 13 },
        }}),
        // Slot 'onPanels'
        QtMocHelpers::SlotData<void(bool)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 13 },
        }}),
        // Slot 'onNormals'
        QtMocHelpers::SlotData<void(bool)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 13 },
        }}),
        // Slot 'onOutline'
        QtMocHelpers::SlotData<void(bool)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 13 },
        }}),
        // Slot 'onFoilNames'
        QtMocHelpers::SlotData<void(bool)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 13 },
        }}),
        // Slot 'onShowMasses'
        QtMocHelpers::SlotData<void(bool)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 13 },
        }}),
        // Slot 'onTessellation'
        QtMocHelpers::SlotData<void(bool)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 13 },
        }}),
        // Slot 'onHighlightPanel'
        QtMocHelpers::SlotData<void(bool)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 13 },
        }}),
        // Slot 'onCtrlPoints'
        QtMocHelpers::SlotData<void(bool)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 13 },
        }}),
        // Slot 'onCornerPts'
        QtMocHelpers::SlotData<void(bool)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 13 },
        }}),
        // Slot 'onPartSelClicked'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<gl3dXflView, qt_meta_tag_ZN11gl3dXflViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject gl3dXflView::staticMetaObject = { {
    QMetaObject::SuperData::link<gl3dView::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11gl3dXflViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11gl3dXflViewE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11gl3dXflViewE_t>.metaTypes,
    nullptr
} };

void gl3dXflView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<gl3dXflView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->pickedNode((*reinterpret_cast< std::add_pointer_t<Vector3d>>(_a[1]))); break;
        case 1: _t->pickedNodeIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->pickedNodePair((*reinterpret_cast< std::add_pointer_t<std::pair<int,int>>>(_a[1]))); break;
        case 3: _t->pickedEdge((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 4: _t->pickedFace((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 5: _t->panelSelected((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->partSelected((*reinterpret_cast< std::add_pointer_t<Part*>>(_a[1]))); break;
        case 7: _t->onSurfaces((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->onPanels((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->onNormals((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->onOutline((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->onFoilNames((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->onShowMasses((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->onTessellation((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->onHighlightPanel((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->onCtrlPoints((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->onCornerPts((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: _t->onPartSelClicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (gl3dXflView::*)(Vector3d )>(_a, &gl3dXflView::pickedNode, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (gl3dXflView::*)(int )>(_a, &gl3dXflView::pickedNodeIndex, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (gl3dXflView::*)(QPair<int,int> )>(_a, &gl3dXflView::pickedNodePair, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (gl3dXflView::*)(int , int )>(_a, &gl3dXflView::pickedEdge, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (gl3dXflView::*)(int , int )>(_a, &gl3dXflView::pickedFace, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (gl3dXflView::*)(int )>(_a, &gl3dXflView::panelSelected, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (gl3dXflView::*)(Part * )>(_a, &gl3dXflView::partSelected, 6))
            return;
    }
}

const QMetaObject *gl3dXflView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gl3dXflView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11gl3dXflViewE_t>.strings))
        return static_cast<void*>(this);
    return gl3dView::qt_metacast(_clname);
}

int gl3dXflView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = gl3dView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void gl3dXflView::pickedNode(Vector3d _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void gl3dXflView::pickedNodeIndex(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void gl3dXflView::pickedNodePair(QPair<int,int> _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void gl3dXflView::pickedEdge(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2);
}

// SIGNAL 4
void gl3dXflView::pickedFace(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2);
}

// SIGNAL 5
void gl3dXflView::panelSelected(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void gl3dXflView::partSelected(Part * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}
QT_WARNING_POP
