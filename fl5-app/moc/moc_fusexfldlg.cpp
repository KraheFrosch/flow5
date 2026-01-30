/****************************************************************************
** Meta object code from reading C++ file 'fusexfldlg.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/editors/fuseedit/xflfuseedit/fusexfldlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fusexfldlg.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10FuseXflDlgE_t {};
} // unnamed namespace

template <> constexpr inline auto FuseXflDlg::qt_create_metaobjectdata<qt_meta_tag_ZN10FuseXflDlgE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FuseXflDlg",
        "onFrameClickedIn2dView",
        "",
        "onPointClickedIn2dView",
        "setPicture",
        "onScaleFuse",
        "bFrameOnly",
        "onTranslateFuse",
        "onConvertToFlatFace",
        "onRemoveFrame",
        "iFrame",
        "onInsertFrame",
        "Vector3d",
        "pos",
        "onRemovePoint",
        "iPt",
        "onInsertPoint",
        "onExportFuseToXML",
        "onResetFuse",
        "accept",
        "onResetScales",
        "onUndo",
        "onRedo"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onFrameClickedIn2dView'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onPointClickedIn2dView'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'setPicture'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onScaleFuse'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onScaleFuse'
        QtMocHelpers::SlotData<void(bool)>(5, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Slot 'onTranslateFuse'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onConvertToFlatFace'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onRemoveFrame'
        QtMocHelpers::SlotData<void(int)>(9, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 10 },
        }}),
        // Slot 'onInsertFrame'
        QtMocHelpers::SlotData<void(Vector3d const &)>(11, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
        // Slot 'onRemovePoint'
        QtMocHelpers::SlotData<void(int)>(14, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Int, 15 },
        }}),
        // Slot 'onInsertPoint'
        QtMocHelpers::SlotData<void(const Vector3d &)>(16, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
        // Slot 'onExportFuseToXML'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onResetFuse'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'accept'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onResetScales'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onUndo'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onRedo'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FuseXflDlg, qt_meta_tag_ZN10FuseXflDlgE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject FuseXflDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<FuseDlg::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10FuseXflDlgE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10FuseXflDlgE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10FuseXflDlgE_t>.metaTypes,
    nullptr
} };

void FuseXflDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FuseXflDlg *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onFrameClickedIn2dView(); break;
        case 1: _t->onPointClickedIn2dView(); break;
        case 2: _t->setPicture(); break;
        case 3: _t->onScaleFuse(); break;
        case 4: _t->onScaleFuse((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->onTranslateFuse(); break;
        case 6: _t->onConvertToFlatFace(); break;
        case 7: _t->onRemoveFrame((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->onInsertFrame((*reinterpret_cast< std::add_pointer_t<Vector3d>>(_a[1]))); break;
        case 9: _t->onRemovePoint((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->onInsertPoint((*reinterpret_cast< std::add_pointer_t<Vector3d>>(_a[1]))); break;
        case 11: _t->onExportFuseToXML(); break;
        case 12: _t->onResetFuse(); break;
        case 13: _t->accept(); break;
        case 14: _t->onResetScales(); break;
        case 15: _t->onUndo(); break;
        case 16: _t->onRedo(); break;
        default: ;
        }
    }
}

const QMetaObject *FuseXflDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FuseXflDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10FuseXflDlgE_t>.strings))
        return static_cast<void*>(this);
    return FuseDlg::qt_metacast(_clname);
}

int FuseXflDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FuseDlg::qt_metacall(_c, _id, _a);
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
