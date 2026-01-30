/****************************************************************************
** Meta object code from reading C++ file 'sailwingdlg.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/editors/boatedit/sailwingdlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sailwingdlg.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11SailWingDlgE_t {};
} // unnamed namespace

template <> constexpr inline auto SailWingDlg::qt_create_metaobjectdata<qt_meta_tag_ZN11SailWingDlgE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SailWingDlg",
        "onAlignLuffPoints",
        "",
        "onCurrentSectionChanged",
        "QModelIndex",
        "index",
        "onDeleteSection",
        "onInsertSectionAfter",
        "onInsertSectionBefore",
        "accept",
        "onSectionDataChanged",
        "onSectionItemClicked",
        "onSelectCtrlPoint",
        "onSelectSection",
        "iSection",
        "onTranslateSection",
        "onUpdate"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onAlignLuffPoints'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onCurrentSectionChanged'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(3, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 4, 5 },
        }}),
        // Slot 'onDeleteSection'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onInsertSectionAfter'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onInsertSectionBefore'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'accept'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onSectionDataChanged'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onSectionItemClicked'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(11, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 4, 5 },
        }}),
        // Slot 'onSelectCtrlPoint'
        QtMocHelpers::SlotData<void(int)>(12, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'onSelectSection'
        QtMocHelpers::SlotData<void(int)>(13, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 14 },
        }}),
        // Slot 'onTranslateSection'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onUpdate'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SailWingDlg, qt_meta_tag_ZN11SailWingDlgE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SailWingDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<SailDlg::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11SailWingDlgE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11SailWingDlgE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11SailWingDlgE_t>.metaTypes,
    nullptr
} };

void SailWingDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SailWingDlg *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onAlignLuffPoints(); break;
        case 1: _t->onCurrentSectionChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 2: _t->onDeleteSection(); break;
        case 3: _t->onInsertSectionAfter(); break;
        case 4: _t->onInsertSectionBefore(); break;
        case 5: _t->accept(); break;
        case 6: _t->onSectionDataChanged(); break;
        case 7: _t->onSectionItemClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 8: _t->onSelectCtrlPoint((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->onSelectSection((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->onTranslateSection(); break;
        case 11: _t->onUpdate(); break;
        default: ;
        }
    }
}

const QMetaObject *SailWingDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SailWingDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11SailWingDlgE_t>.strings))
        return static_cast<void*>(this);
    return SailDlg::qt_metacast(_clname);
}

int SailWingDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SailDlg::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
