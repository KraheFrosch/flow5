/****************************************************************************
** Meta object code from reading C++ file 'saildlg.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/editors/boatedit/saildlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'saildlg.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7SailDlgE_t {};
} // unnamed namespace

template <> constexpr inline auto SailDlg::qt_create_metaobjectdata<qt_meta_tag_ZN7SailDlgE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SailDlg",
        "onSailColor",
        "",
        "onExportToXml",
        "onExportMeshToStl",
        "onExportTrianglesToStl",
        "onExportToStep",
        "onLineStyle",
        "LineStyle",
        "onUpdateMesh",
        "onNodeDistance",
        "onPickedNodePair",
        "std::pair<int,int>",
        "nodepair",
        "onDefinitions",
        "onSetChanged",
        "accept",
        "onBotTEPanels",
        "bChecked",
        "onCheckFreeEdges",
        "onCheckTEPanels",
        "onClearHighlighted",
        "onClearTEPanels",
        "onConnectPanels",
        "onGuessTE",
        "onPanelSelected",
        "i3",
        "onThinSurface",
        "onTopTEPanels",
        "onSelectSection",
        "iSection",
        "onAlignLuffPoints",
        "onFlipXZ",
        "onScaleSize",
        "onScaleShape",
        "onTranslateSail",
        "onScaleSection",
        "onSelectCtrlPoint",
        "onUpdate",
        "onSectionDataChanged",
        "onPointDataChanged",
        "onCurrentSectionChanged",
        "QModelIndex",
        "index",
        "onCurrentPointChanged",
        "onSectionItemClicked",
        "onPointItemClicked",
        "onInsertSectionBefore",
        "onInsertSectionAfter",
        "onDeleteSection",
        "onTranslateSection",
        "onInsertPointBefore",
        "onInsertPointAfter",
        "onDeletePoint",
        "onResizeTableColumns",
        "deselectButtons",
        "onPickEdge",
        "bPick",
        "onPickedEdge",
        "iFace",
        "iEdge",
        "onMakeEdgeSplits",
        "onReadEdgeSplits",
        "onRuledMesh"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onSailColor'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onExportToXml'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onExportMeshToStl'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onExportTrianglesToStl'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onExportToStep'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onLineStyle'
        QtMocHelpers::SlotData<void(const LineStyle &)>(7, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 8, 2 },
        }}),
        // Slot 'onUpdateMesh'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onNodeDistance'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onPickedNodePair'
        QtMocHelpers::SlotData<void(QPair<int,int>)>(11, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
        // Slot 'onDefinitions'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onSetChanged'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'accept'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onBotTEPanels'
        QtMocHelpers::SlotData<void(bool)>(17, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Bool, 18 },
        }}),
        // Slot 'onCheckFreeEdges'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onCheckTEPanels'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onClearHighlighted'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onClearTEPanels'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onConnectPanels'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onGuessTE'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onPanelSelected'
        QtMocHelpers::SlotData<void(int)>(25, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 26 },
        }}),
        // Slot 'onThinSurface'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onTopTEPanels'
        QtMocHelpers::SlotData<void(bool)>(28, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Bool, 18 },
        }}),
        // Slot 'onSelectSection'
        QtMocHelpers::SlotData<void(int)>(29, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 30 },
        }}),
        // Slot 'onAlignLuffPoints'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onFlipXZ'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onScaleSize'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onScaleShape'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onTranslateSail'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onScaleSection'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onSelectCtrlPoint'
        QtMocHelpers::SlotData<void(int)>(37, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'onUpdate'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onSectionDataChanged'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onPointDataChanged'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onCurrentSectionChanged'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(41, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 42, 43 },
        }}),
        // Slot 'onCurrentPointChanged'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(44, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 42, 2 },
        }}),
        // Slot 'onSectionItemClicked'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(45, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 42, 43 },
        }}),
        // Slot 'onPointItemClicked'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(46, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 42, 2 },
        }}),
        // Slot 'onInsertSectionBefore'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onInsertSectionAfter'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onDeleteSection'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onTranslateSection'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onInsertPointBefore'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onInsertPointAfter'
        QtMocHelpers::SlotData<void()>(52, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onDeletePoint'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onResizeTableColumns'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'deselectButtons'
        QtMocHelpers::SlotData<bool()>(55, 2, QMC::AccessProtected, QMetaType::Bool),
        // Slot 'onPickEdge'
        QtMocHelpers::SlotData<void(bool)>(56, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Bool, 57 },
        }}),
        // Slot 'onPickedEdge'
        QtMocHelpers::SlotData<void(int, int)>(58, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 59 }, { QMetaType::Int, 60 },
        }}),
        // Slot 'onMakeEdgeSplits'
        QtMocHelpers::SlotData<void()>(61, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onReadEdgeSplits'
        QtMocHelpers::SlotData<void()>(62, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onRuledMesh'
        QtMocHelpers::SlotData<void()>(63, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SailDlg, qt_meta_tag_ZN7SailDlgE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SailDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<XflDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7SailDlgE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7SailDlgE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7SailDlgE_t>.metaTypes,
    nullptr
} };

void SailDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SailDlg *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onSailColor(); break;
        case 1: _t->onExportToXml(); break;
        case 2: _t->onExportMeshToStl(); break;
        case 3: _t->onExportTrianglesToStl(); break;
        case 4: _t->onExportToStep(); break;
        case 5: _t->onLineStyle((*reinterpret_cast< std::add_pointer_t<LineStyle>>(_a[1]))); break;
        case 6: _t->onUpdateMesh(); break;
        case 7: _t->onNodeDistance(); break;
        case 8: _t->onPickedNodePair((*reinterpret_cast< std::add_pointer_t<std::pair<int,int>>>(_a[1]))); break;
        case 9: _t->onDefinitions(); break;
        case 10: _t->onSetChanged(); break;
        case 11: _t->accept(); break;
        case 12: _t->onBotTEPanels((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->onCheckFreeEdges(); break;
        case 14: _t->onCheckTEPanels(); break;
        case 15: _t->onClearHighlighted(); break;
        case 16: _t->onClearTEPanels(); break;
        case 17: _t->onConnectPanels(); break;
        case 18: _t->onGuessTE(); break;
        case 19: _t->onPanelSelected((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->onThinSurface(); break;
        case 21: _t->onTopTEPanels((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 22: _t->onSelectSection((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 23: _t->onAlignLuffPoints(); break;
        case 24: _t->onFlipXZ(); break;
        case 25: _t->onScaleSize(); break;
        case 26: _t->onScaleShape(); break;
        case 27: _t->onTranslateSail(); break;
        case 28: _t->onScaleSection(); break;
        case 29: _t->onSelectCtrlPoint((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 30: _t->onUpdate(); break;
        case 31: _t->onSectionDataChanged(); break;
        case 32: _t->onPointDataChanged(); break;
        case 33: _t->onCurrentSectionChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 34: _t->onCurrentPointChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 35: _t->onSectionItemClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 36: _t->onPointItemClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 37: _t->onInsertSectionBefore(); break;
        case 38: _t->onInsertSectionAfter(); break;
        case 39: _t->onDeleteSection(); break;
        case 40: _t->onTranslateSection(); break;
        case 41: _t->onInsertPointBefore(); break;
        case 42: _t->onInsertPointAfter(); break;
        case 43: _t->onDeletePoint(); break;
        case 44: _t->onResizeTableColumns(); break;
        case 45: { bool _r = _t->deselectButtons();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 46: _t->onPickEdge((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 47: _t->onPickedEdge((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 48: _t->onMakeEdgeSplits(); break;
        case 49: _t->onReadEdgeSplits(); break;
        case 50: _t->onRuledMesh(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< LineStyle >(); break;
            }
            break;
        }
    }
}

const QMetaObject *SailDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SailDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7SailDlgE_t>.strings))
        return static_cast<void*>(this);
    return XflDialog::qt_metacast(_clname);
}

int SailDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XflDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 51)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 51)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    }
    return _id;
}
QT_WARNING_POP
