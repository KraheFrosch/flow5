/****************************************************************************
** Meta object code from reading C++ file 'pointmasstable.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/editors/inertia/pointmasstable.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pointmasstable.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14PointMassTableE_t {};
} // unnamed namespace

template <> constexpr inline auto PointMassTable::qt_create_metaobjectdata<qt_meta_tag_ZN14PointMassTableE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PointMassTable",
        "pointMassChanged",
        "",
        "onInsertMassBefore",
        "onInsertMassAfter",
        "onDeleteMassRow",
        "onDuplicateMassRow",
        "onMassTableClicked",
        "QModelIndex",
        "onPointMassCellChanged",
        "QWidget*",
        "onMoveUp",
        "onMoveDown"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'pointMassChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onInsertMassBefore'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onInsertMassAfter'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onDeleteMassRow'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onDuplicateMassRow'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onMassTableClicked'
        QtMocHelpers::SlotData<void(QModelIndex)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 8, 2 },
        }}),
        // Slot 'onPointMassCellChanged'
        QtMocHelpers::SlotData<void(QWidget *)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 10, 2 },
        }}),
        // Slot 'onMoveUp'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onMoveDown'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PointMassTable, qt_meta_tag_ZN14PointMassTableE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PointMassTable::staticMetaObject = { {
    QMetaObject::SuperData::link<CPTableView::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14PointMassTableE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14PointMassTableE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14PointMassTableE_t>.metaTypes,
    nullptr
} };

void PointMassTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PointMassTable *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->pointMassChanged(); break;
        case 1: _t->onInsertMassBefore(); break;
        case 2: _t->onInsertMassAfter(); break;
        case 3: _t->onDeleteMassRow(); break;
        case 4: _t->onDuplicateMassRow(); break;
        case 5: _t->onMassTableClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 6: _t->onPointMassCellChanged((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 7: _t->onMoveUp(); break;
        case 8: _t->onMoveDown(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PointMassTable::*)()>(_a, &PointMassTable::pointMassChanged, 0))
            return;
    }
}

const QMetaObject *PointMassTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PointMassTable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14PointMassTableE_t>.strings))
        return static_cast<void*>(this);
    return CPTableView::qt_metacast(_clname);
}

int PointMassTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CPTableView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void PointMassTable::pointMassChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
