/****************************************************************************
** Meta object code from reading C++ file 'analysisrangetable.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/controls/analysisrangetable.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'analysisrangetable.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18AnalysisRangeTableE_t {};
} // unnamed namespace

template <> constexpr inline auto AnalysisRangeTable::qt_create_metaobjectdata<qt_meta_tag_ZN18AnalysisRangeTableE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "AnalysisRangeTable",
        "onRangeModelChanged",
        "",
        "onRangeTableClicked",
        "QModelIndex",
        "index",
        "onActivate",
        "onDeActivateAll",
        "onMoveUp",
        "onMoveDown",
        "onDeleteRow",
        "onDuplicateRow",
        "onInsertBefore",
        "onInsertAfter",
        "onResizeColumns"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onRangeModelChanged'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onRangeTableClicked'
        QtMocHelpers::SlotData<void(QModelIndex)>(3, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 4, 5 },
        }}),
        // Slot 'onActivate'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onDeActivateAll'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onMoveUp'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onMoveDown'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onDeleteRow'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onDuplicateRow'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onInsertBefore'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onInsertAfter'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onResizeColumns'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AnalysisRangeTable, qt_meta_tag_ZN18AnalysisRangeTableE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject AnalysisRangeTable::staticMetaObject = { {
    QMetaObject::SuperData::link<CPTableView::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18AnalysisRangeTableE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18AnalysisRangeTableE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18AnalysisRangeTableE_t>.metaTypes,
    nullptr
} };

void AnalysisRangeTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AnalysisRangeTable *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onRangeModelChanged(); break;
        case 1: _t->onRangeTableClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 2: _t->onActivate(); break;
        case 3: _t->onDeActivateAll(); break;
        case 4: _t->onMoveUp(); break;
        case 5: _t->onMoveDown(); break;
        case 6: _t->onDeleteRow(); break;
        case 7: _t->onDuplicateRow(); break;
        case 8: _t->onInsertBefore(); break;
        case 9: _t->onInsertAfter(); break;
        case 10: _t->onResizeColumns(); break;
        default: ;
        }
    }
}

const QMetaObject *AnalysisRangeTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AnalysisRangeTable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18AnalysisRangeTableE_t>.strings))
        return static_cast<void*>(this);
    return CPTableView::qt_metacast(_clname);
}

int AnalysisRangeTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CPTableView::qt_metacall(_c, _id, _a);
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
