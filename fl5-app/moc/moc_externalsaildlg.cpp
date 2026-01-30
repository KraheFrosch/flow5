/****************************************************************************
** Meta object code from reading C++ file 'externalsaildlg.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/editors/boatedit/externalsaildlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'externalsaildlg.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15ExternalSailDlgE_t {};
} // unnamed namespace

template <> constexpr inline auto ExternalSailDlg::qt_create_metaobjectdata<qt_meta_tag_ZN15ExternalSailDlgE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ExternalSailDlg",
        "onSelectSection",
        "",
        "onAlignLuffPoints",
        "onCurrentSectionChanged",
        "QModelIndex",
        "onCurrentPointChanged",
        "onPickedNode",
        "Vector3d",
        "I",
        "onCornerPoint",
        "bChecked",
        "onSectionItemClicked",
        "onPointItemClicked",
        "onInsertSectionBefore",
        "onInsertSectionAfter",
        "onDeleteSection",
        "onTranslateSection",
        "onRotateSail",
        "onTranslateSail"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onSelectSection'
        QtMocHelpers::SlotData<void(int)>(1, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'onAlignLuffPoints'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onCurrentSectionChanged'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(4, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 5, 2 },
        }}),
        // Slot 'onCurrentPointChanged'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(6, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 5, 2 },
        }}),
        // Slot 'onPickedNode'
        QtMocHelpers::SlotData<void(Vector3d)>(7, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'onCornerPoint'
        QtMocHelpers::SlotData<void(bool)>(10, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Bool, 11 },
        }}),
        // Slot 'onSectionItemClicked'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(12, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 5, 2 },
        }}),
        // Slot 'onPointItemClicked'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(13, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 5, 2 },
        }}),
        // Slot 'onInsertSectionBefore'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onInsertSectionAfter'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onDeleteSection'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onTranslateSection'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onRotateSail'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onTranslateSail'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ExternalSailDlg, qt_meta_tag_ZN15ExternalSailDlgE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ExternalSailDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<SailDlg::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15ExternalSailDlgE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15ExternalSailDlgE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15ExternalSailDlgE_t>.metaTypes,
    nullptr
} };

void ExternalSailDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ExternalSailDlg *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onSelectSection((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->onAlignLuffPoints(); break;
        case 2: _t->onCurrentSectionChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 3: _t->onCurrentPointChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 4: _t->onPickedNode((*reinterpret_cast< std::add_pointer_t<Vector3d>>(_a[1]))); break;
        case 5: _t->onCornerPoint((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->onSectionItemClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 7: _t->onPointItemClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 8: _t->onInsertSectionBefore(); break;
        case 9: _t->onInsertSectionAfter(); break;
        case 10: _t->onDeleteSection(); break;
        case 11: _t->onTranslateSection(); break;
        case 12: _t->onRotateSail(); break;
        case 13: _t->onTranslateSail(); break;
        default: ;
        }
    }
}

const QMetaObject *ExternalSailDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExternalSailDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15ExternalSailDlgE_t>.strings))
        return static_cast<void*>(this);
    return SailDlg::qt_metacast(_clname);
}

int ExternalSailDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SailDlg::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
