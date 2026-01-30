/****************************************************************************
** Meta object code from reading C++ file 'fusedlg.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/editors/fuseedit/fusedlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fusedlg.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7FuseDlgE_t {};
} // unnamed namespace

template <> constexpr inline auto FuseDlg::qt_create_metaobjectdata<qt_meta_tag_ZN7FuseDlgE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FuseDlg",
        "onMetaDataChanged",
        "",
        "onTessellation",
        "onFuseInertia",
        "onScale",
        "onTranslate",
        "onRotate",
        "onExportMeshToSTLFile",
        "onExportTrianglesToSTLFile",
        "onExportFuseToCADFile",
        "onFuseColor",
        "onNodeDistance",
        "onPickedNodePair",
        "std::pair<int,int>",
        "nodepair",
        "onButton",
        "QAbstractButton*",
        "pButton"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onMetaDataChanged'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onTessellation'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onFuseInertia'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onScale'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onTranslate'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onRotate'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onExportMeshToSTLFile'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onExportTrianglesToSTLFile'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onExportFuseToCADFile'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onFuseColor'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onNodeDistance'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onPickedNodePair'
        QtMocHelpers::SlotData<void(QPair<int,int>)>(13, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 14, 15 },
        }}),
        // Slot 'onButton'
        QtMocHelpers::SlotData<void(QAbstractButton *)>(16, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 17, 18 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FuseDlg, qt_meta_tag_ZN7FuseDlgE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject FuseDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<XflDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7FuseDlgE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7FuseDlgE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7FuseDlgE_t>.metaTypes,
    nullptr
} };

void FuseDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FuseDlg *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onMetaDataChanged(); break;
        case 1: _t->onTessellation(); break;
        case 2: _t->onFuseInertia(); break;
        case 3: _t->onScale(); break;
        case 4: _t->onTranslate(); break;
        case 5: _t->onRotate(); break;
        case 6: _t->onExportMeshToSTLFile(); break;
        case 7: _t->onExportTrianglesToSTLFile(); break;
        case 8: _t->onExportFuseToCADFile(); break;
        case 9: _t->onFuseColor(); break;
        case 10: _t->onNodeDistance(); break;
        case 11: _t->onPickedNodePair((*reinterpret_cast< std::add_pointer_t<std::pair<int,int>>>(_a[1]))); break;
        case 12: _t->onButton((*reinterpret_cast< std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractButton* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *FuseDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FuseDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7FuseDlgE_t>.strings))
        return static_cast<void*>(this);
    return XflDialog::qt_metacast(_clname);
}

int FuseDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XflDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
