/****************************************************************************
** Meta object code from reading C++ file 'foilcamberdlg.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/editors/foiledit/foilcamberdlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'foilcamberdlg.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13FoilCamberDlgE_t {};
} // unnamed namespace

template <> constexpr inline auto FoilCamberDlg::qt_create_metaobjectdata<qt_meta_tag_ZN13FoilCamberDlgE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FoilCamberDlg",
        "onApply",
        "",
        "onReset",
        "onSplitterMoved",
        "onUndo",
        "onRedo",
        "onNewSpline",
        "onTakePicture",
        "onApproxFoil"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onApply'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onReset'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onSplitterMoved'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onUndo'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onRedo'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onNewSpline'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onTakePicture'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onApproxFoil'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FoilCamberDlg, qt_meta_tag_ZN13FoilCamberDlgE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject FoilCamberDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<FoilDlg::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13FoilCamberDlgE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13FoilCamberDlgE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13FoilCamberDlgE_t>.metaTypes,
    nullptr
} };

void FoilCamberDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FoilCamberDlg *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onApply(); break;
        case 1: _t->onReset(); break;
        case 2: _t->onSplitterMoved(); break;
        case 3: _t->onUndo(); break;
        case 4: _t->onRedo(); break;
        case 5: _t->onNewSpline(); break;
        case 6: _t->onTakePicture(); break;
        case 7: _t->onApproxFoil(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *FoilCamberDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FoilCamberDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13FoilCamberDlgE_t>.strings))
        return static_cast<void*>(this);
    return FoilDlg::qt_metacast(_clname);
}

int FoilCamberDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FoilDlg::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
