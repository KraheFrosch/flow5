/****************************************************************************
** Meta object code from reading C++ file 'graphtiles.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/graphs/controls/graphtiles.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphtiles.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10GraphTilesE_t {};
} // unnamed namespace

template <> constexpr inline auto GraphTiles::qt_create_metaobjectdata<qt_meta_tag_ZN10GraphTilesE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "GraphTiles",
        "varSetChanged",
        "",
        "graphChanged",
        "onGraphChanged",
        "Graph*",
        "pGraph",
        "onAllGraphSettings",
        "onGraph0",
        "onGraph1",
        "onGraph2",
        "onGraph3",
        "onGraph4",
        "onSingleGraph",
        "onTwoGraphs",
        "onFourGraphs",
        "onAllGraphs",
        "onSave1GraphSplitterSizes",
        "onSave2GraphSplitterSizes",
        "onSave4GraphSplitterSizes",
        "onSaveAllGraphSplitterSizes",
        "on4GraphsSubSubHSplitter1Moved",
        "on4GraphsSubSubHSplitter2Moved",
        "onAllGraphsSubSubHSplitter1Moved",
        "onAllGraphsSubSubHSplitter2Moved",
        "onExportGraphDataToClipboard",
        "onExportGraphDataToFile",
        "onCurGraphSettings",
        "onResetCurGraphScales",
        "onResetSplitters"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'varSetChanged'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'graphChanged'
        QtMocHelpers::SignalData<void(int)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'onGraphChanged'
        QtMocHelpers::SlotData<void(Graph *)>(4, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Slot 'onGraphChanged'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessProtected | QMC::MethodCloned, QMetaType::Void),
        // Slot 'onAllGraphSettings'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onGraph0'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onGraph1'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onGraph2'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onGraph3'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onGraph4'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onSingleGraph'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onTwoGraphs'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onFourGraphs'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onAllGraphs'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onSave1GraphSplitterSizes'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onSave2GraphSplitterSizes'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onSave4GraphSplitterSizes'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onSaveAllGraphSplitterSizes'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on4GraphsSubSubHSplitter1Moved'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on4GraphsSubSubHSplitter2Moved'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onAllGraphsSubSubHSplitter1Moved'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onAllGraphsSubSubHSplitter2Moved'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onExportGraphDataToClipboard'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onExportGraphDataToFile'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onCurGraphSettings'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onResetCurGraphScales'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onResetSplitters'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GraphTiles, qt_meta_tag_ZN10GraphTilesE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject GraphTiles::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10GraphTilesE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10GraphTilesE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10GraphTilesE_t>.metaTypes,
    nullptr
} };

void GraphTiles::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GraphTiles *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->varSetChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->graphChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->onGraphChanged((*reinterpret_cast< std::add_pointer_t<Graph*>>(_a[1]))); break;
        case 3: _t->onGraphChanged(); break;
        case 4: _t->onAllGraphSettings(); break;
        case 5: _t->onGraph0(); break;
        case 6: _t->onGraph1(); break;
        case 7: _t->onGraph2(); break;
        case 8: _t->onGraph3(); break;
        case 9: _t->onGraph4(); break;
        case 10: _t->onSingleGraph(); break;
        case 11: _t->onTwoGraphs(); break;
        case 12: _t->onFourGraphs(); break;
        case 13: _t->onAllGraphs(); break;
        case 14: _t->onSave1GraphSplitterSizes(); break;
        case 15: _t->onSave2GraphSplitterSizes(); break;
        case 16: _t->onSave4GraphSplitterSizes(); break;
        case 17: _t->onSaveAllGraphSplitterSizes(); break;
        case 18: _t->on4GraphsSubSubHSplitter1Moved(); break;
        case 19: _t->on4GraphsSubSubHSplitter2Moved(); break;
        case 20: _t->onAllGraphsSubSubHSplitter1Moved(); break;
        case 21: _t->onAllGraphsSubSubHSplitter2Moved(); break;
        case 22: _t->onExportGraphDataToClipboard(); break;
        case 23: _t->onExportGraphDataToFile(); break;
        case 24: _t->onCurGraphSettings(); break;
        case 25: _t->onResetCurGraphScales(); break;
        case 26: _t->onResetSplitters(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (GraphTiles::*)(int )>(_a, &GraphTiles::varSetChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (GraphTiles::*)(int )>(_a, &GraphTiles::graphChanged, 1))
            return;
    }
}

const QMetaObject *GraphTiles::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphTiles::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10GraphTilesE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GraphTiles::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void GraphTiles::varSetChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void GraphTiles::graphChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
QT_WARNING_POP
