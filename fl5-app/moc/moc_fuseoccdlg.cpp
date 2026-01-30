/****************************************************************************
** Meta object code from reading C++ file 'fuseoccdlg.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/editors/fuseedit/fuseoccdlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fuseoccdlg.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10FuseOccDlgE_t {};
} // unnamed namespace

template <> constexpr inline auto FuseOccDlg::qt_create_metaobjectdata<qt_meta_tag_ZN10FuseOccDlgE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FuseOccDlg",
        "onCenterViewOnPanel",
        "",
        "onCheckFreeEdges",
        "onCheckMesh",
        "onClearHighlighted",
        "onConnectTriangles",
        "onDoubleNodes",
        "onExportBodyToCADFile",
        "onFlipTessNormals",
        "onSelMesher",
        "onShapeFix",
        "onUpdateFuseView",
        "onScale",
        "onTranslate",
        "onRotate"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onCenterViewOnPanel'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onCheckFreeEdges'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onCheckMesh'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onClearHighlighted'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onConnectTriangles'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onDoubleNodes'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onExportBodyToCADFile'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onFlipTessNormals'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onSelMesher'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onShapeFix'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onUpdateFuseView'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onScale'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onTranslate'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onRotate'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FuseOccDlg, qt_meta_tag_ZN10FuseOccDlgE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject FuseOccDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<FuseDlg::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10FuseOccDlgE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10FuseOccDlgE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10FuseOccDlgE_t>.metaTypes,
    nullptr
} };

void FuseOccDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FuseOccDlg *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onCenterViewOnPanel(); break;
        case 1: _t->onCheckFreeEdges(); break;
        case 2: _t->onCheckMesh(); break;
        case 3: _t->onClearHighlighted(); break;
        case 4: _t->onConnectTriangles(); break;
        case 5: _t->onDoubleNodes(); break;
        case 6: _t->onExportBodyToCADFile(); break;
        case 7: _t->onFlipTessNormals(); break;
        case 8: _t->onSelMesher(); break;
        case 9: _t->onShapeFix(); break;
        case 10: _t->onUpdateFuseView(); break;
        case 11: _t->onScale(); break;
        case 12: _t->onTranslate(); break;
        case 13: _t->onRotate(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *FuseOccDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FuseOccDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10FuseOccDlgE_t>.strings))
        return static_cast<void*>(this);
    return FuseDlg::qt_metacast(_clname);
}

int FuseOccDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FuseDlg::qt_metacall(_c, _id, _a);
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
