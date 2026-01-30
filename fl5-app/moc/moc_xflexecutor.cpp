/****************************************************************************
** Meta object code from reading C++ file 'xflexecutor.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/script/xflexecutor.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xflexecutor.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11XflExecutorE_t {};
} // unnamed namespace

template <> constexpr inline auto XflExecutor::qt_create_metaobjectdata<qt_meta_tag_ZN11XflExecutorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "XflExecutor",
        "outputMessage",
        "",
        "msg",
        "cancelTask",
        "taskFinished",
        "taskStarted",
        "onRunExecutor",
        "onCancel"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'outputMessage'
        QtMocHelpers::SignalData<void(const QString &) const>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'cancelTask'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'taskFinished'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'taskStarted'
        QtMocHelpers::SignalData<void(int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'onRunExecutor'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onCancel'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XflExecutor, qt_meta_tag_ZN11XflExecutorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject XflExecutor::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11XflExecutorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11XflExecutorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11XflExecutorE_t>.metaTypes,
    nullptr
} };

void XflExecutor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XflExecutor *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->outputMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->cancelTask(); break;
        case 2: _t->taskFinished(); break;
        case 3: _t->taskStarted((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->onRunExecutor(); break;
        case 5: _t->onCancel(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (XflExecutor::*)(const QString & ) const>(_a, &XflExecutor::outputMessage, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (XflExecutor::*)()>(_a, &XflExecutor::cancelTask, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (XflExecutor::*)()>(_a, &XflExecutor::taskFinished, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (XflExecutor::*)(int )>(_a, &XflExecutor::taskStarted, 3))
            return;
    }
}

const QMetaObject *XflExecutor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XflExecutor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11XflExecutorE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int XflExecutor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void XflExecutor::outputMessage(const QString & _t1)const
{
    QMetaObject::activate<void>(const_cast< XflExecutor *>(this), &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void XflExecutor::cancelTask()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void XflExecutor::taskFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void XflExecutor::taskStarted(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}
QT_WARNING_POP
