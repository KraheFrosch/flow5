/****************************************************************************
** Meta object code from reading C++ file 'saveoptionswt.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../options/saveoptionswt.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'saveoptionswt.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13SaveOptionsWtE_t {};
} // unnamed namespace

template <> constexpr inline auto SaveOptionsWt::qt_create_metaobjectdata<qt_meta_tag_ZN13SaveOptionsWtE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SaveOptionsWt",
        "onLastUsedDir",
        "",
        "onActiveDir",
        "onDatFoilDir",
        "onExportFormat",
        "onPlrPolarDir",
        "onXmlPolarDir",
        "onXmlPlaneDir",
        "onXmlWPolarDir",
        "onXmlScriptDir",
        "onCADDir",
        "onSTLDir",
        "onCheckTempDir",
        "onTempDir",
        "readData"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onLastUsedDir'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onActiveDir'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onDatFoilDir'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onExportFormat'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onPlrPolarDir'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onXmlPolarDir'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onXmlPlaneDir'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onXmlWPolarDir'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onXmlScriptDir'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onCADDir'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onSTLDir'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onCheckTempDir'
        QtMocHelpers::SlotData<bool()>(13, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'onTempDir'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'readData'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SaveOptionsWt, qt_meta_tag_ZN13SaveOptionsWtE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SaveOptionsWt::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13SaveOptionsWtE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13SaveOptionsWtE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13SaveOptionsWtE_t>.metaTypes,
    nullptr
} };

void SaveOptionsWt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SaveOptionsWt *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onLastUsedDir(); break;
        case 1: _t->onActiveDir(); break;
        case 2: _t->onDatFoilDir(); break;
        case 3: _t->onExportFormat(); break;
        case 4: _t->onPlrPolarDir(); break;
        case 5: _t->onXmlPolarDir(); break;
        case 6: _t->onXmlPlaneDir(); break;
        case 7: _t->onXmlWPolarDir(); break;
        case 8: _t->onXmlScriptDir(); break;
        case 9: _t->onCADDir(); break;
        case 10: _t->onSTLDir(); break;
        case 11: { bool _r = _t->onCheckTempDir();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->onTempDir(); break;
        case 13: _t->readData(); break;
        default: ;
        }
    }
}

const QMetaObject *SaveOptionsWt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SaveOptionsWt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13SaveOptionsWtE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SaveOptionsWt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
