/****************************************************************************
** Meta object code from reading C++ file 'graphwt.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/graphs/containers/graphwt.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphwt.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7GraphWtE_t {};
} // unnamed namespace

template <> constexpr inline auto GraphWt::qt_create_metaobjectdata<qt_meta_tag_ZN7GraphWtE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "GraphWt",
        "graphChanged",
        "",
        "Graph*",
        "graphResized",
        "curveClicked",
        "Curve*",
        "curveDoubleClicked",
        "widgetClosed",
        "GraphWt*",
        "graphWindow",
        "graphExport",
        "onResetGraphScales",
        "onCloseWindow",
        "onCopyData",
        "onDynamicIncrement",
        "onExportGraphDataToFile",
        "onExportGraphDataToSvg",
        "onGraphSettings",
        "onHovered",
        "onShowGraphLegend"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'graphChanged'
        QtMocHelpers::SignalData<void(Graph *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Signal 'graphResized'
        QtMocHelpers::SignalData<void(Graph *)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Signal 'curveClicked'
        QtMocHelpers::SignalData<void(Curve *, int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 2 }, { QMetaType::Int, 2 },
        }}),
        // Signal 'curveDoubleClicked'
        QtMocHelpers::SignalData<void(Curve *)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 2 },
        }}),
        // Signal 'widgetClosed'
        QtMocHelpers::SignalData<void(GraphWt *)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 2 },
        }}),
        // Signal 'graphWindow'
        QtMocHelpers::SignalData<void(Graph *)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Signal 'graphExport'
        QtMocHelpers::SignalData<void(Graph *)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Slot 'onResetGraphScales'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onCloseWindow'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onCopyData'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onDynamicIncrement'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onExportGraphDataToFile'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onExportGraphDataToSvg'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onGraphSettings'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onHovered'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onShowGraphLegend'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GraphWt, qt_meta_tag_ZN7GraphWtE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject GraphWt::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7GraphWtE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7GraphWtE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7GraphWtE_t>.metaTypes,
    nullptr
} };

void GraphWt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GraphWt *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->graphChanged((*reinterpret_cast< std::add_pointer_t<Graph*>>(_a[1]))); break;
        case 1: _t->graphResized((*reinterpret_cast< std::add_pointer_t<Graph*>>(_a[1]))); break;
        case 2: _t->curveClicked((*reinterpret_cast< std::add_pointer_t<Curve*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->curveDoubleClicked((*reinterpret_cast< std::add_pointer_t<Curve*>>(_a[1]))); break;
        case 4: _t->widgetClosed((*reinterpret_cast< std::add_pointer_t<GraphWt*>>(_a[1]))); break;
        case 5: _t->graphWindow((*reinterpret_cast< std::add_pointer_t<Graph*>>(_a[1]))); break;
        case 6: _t->graphExport((*reinterpret_cast< std::add_pointer_t<Graph*>>(_a[1]))); break;
        case 7: _t->onResetGraphScales(); break;
        case 8: _t->onCloseWindow(); break;
        case 9: _t->onCopyData(); break;
        case 10: _t->onDynamicIncrement(); break;
        case 11: _t->onExportGraphDataToFile(); break;
        case 12: _t->onExportGraphDataToSvg(); break;
        case 13: _t->onGraphSettings(); break;
        case 14: _t->onHovered(); break;
        case 15: _t->onShowGraphLegend(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< GraphWt* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (GraphWt::*)(Graph * )>(_a, &GraphWt::graphChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (GraphWt::*)(Graph * )>(_a, &GraphWt::graphResized, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (GraphWt::*)(Curve * , int )>(_a, &GraphWt::curveClicked, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (GraphWt::*)(Curve * )>(_a, &GraphWt::curveDoubleClicked, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (GraphWt::*)(GraphWt * )>(_a, &GraphWt::widgetClosed, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (GraphWt::*)(Graph * )>(_a, &GraphWt::graphWindow, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (GraphWt::*)(Graph * )>(_a, &GraphWt::graphExport, 6))
            return;
    }
}

const QMetaObject *GraphWt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphWt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7GraphWtE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GraphWt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void GraphWt::graphChanged(Graph * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void GraphWt::graphResized(Graph * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void GraphWt::curveClicked(Curve * _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}

// SIGNAL 3
void GraphWt::curveDoubleClicked(Curve * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void GraphWt::widgetClosed(GraphWt * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void GraphWt::graphWindow(Graph * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void GraphWt::graphExport(Graph * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}
QT_WARNING_POP
