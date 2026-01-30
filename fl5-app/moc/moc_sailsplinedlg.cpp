/****************************************************************************
** Meta object code from reading C++ file 'sailsplinedlg.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/editors/boatedit/sailsplinedlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sailsplinedlg.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13SailSplineDlgE_t {};
} // unnamed namespace

template <> constexpr inline auto SailSplineDlg::qt_create_metaobjectdata<qt_meta_tag_ZN13SailSplineDlgE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SailSplineDlg",
        "onAlignLuffPoints",
        "",
        "onSelectCtrlPoint",
        "iPoint",
        "onSectionItemClicked",
        "QModelIndex",
        "index",
        "onPointItemClicked",
        "onCurrentSectionChanged",
        "onCurrentPointChanged",
        "onInsertSectionBefore",
        "onInsertSectionAfter",
        "onDeleteSection",
        "onTranslateSection",
        "onInsertPointBefore",
        "onInsertPointAfter",
        "onDeletePoint",
        "onSelectSection",
        "iSection",
        "onUpdate",
        "onConvertSplines",
        "onBSplineDegreeChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onAlignLuffPoints'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onSelectCtrlPoint'
        QtMocHelpers::SlotData<void(int)>(3, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 4 },
        }}),
        // Slot 'onSectionItemClicked'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(5, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'onPointItemClicked'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(8, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'onCurrentSectionChanged'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(9, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'onCurrentPointChanged'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(10, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'onInsertSectionBefore'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onInsertSectionAfter'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onDeleteSection'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onTranslateSection'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onInsertPointBefore'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onInsertPointAfter'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onDeletePoint'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onSelectSection'
        QtMocHelpers::SlotData<void(int)>(18, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 19 },
        }}),
        // Slot 'onUpdate'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onConvertSplines'
        QtMocHelpers::SlotData<void(int)>(21, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Slot 'onBSplineDegreeChanged'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SailSplineDlg, qt_meta_tag_ZN13SailSplineDlgE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SailSplineDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<ThinSailDlg::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13SailSplineDlgE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13SailSplineDlgE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13SailSplineDlgE_t>.metaTypes,
    nullptr
} };

void SailSplineDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SailSplineDlg *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onAlignLuffPoints(); break;
        case 1: _t->onSelectCtrlPoint((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->onSectionItemClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 3: _t->onPointItemClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 4: _t->onCurrentSectionChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 5: _t->onCurrentPointChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 6: _t->onInsertSectionBefore(); break;
        case 7: _t->onInsertSectionAfter(); break;
        case 8: _t->onDeleteSection(); break;
        case 9: _t->onTranslateSection(); break;
        case 10: _t->onInsertPointBefore(); break;
        case 11: _t->onInsertPointAfter(); break;
        case 12: _t->onDeletePoint(); break;
        case 13: _t->onSelectSection((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->onUpdate(); break;
        case 15: _t->onConvertSplines((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->onBSplineDegreeChanged(); break;
        default: ;
        }
    }
}

const QMetaObject *SailSplineDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SailSplineDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13SailSplineDlgE_t>.strings))
        return static_cast<void*>(this);
    return ThinSailDlg::qt_metacast(_clname);
}

int SailSplineDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ThinSailDlg::qt_metacall(_c, _id, _a);
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
