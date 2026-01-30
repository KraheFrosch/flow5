/****************************************************************************
** Meta object code from reading C++ file 'wingdlg.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interfaces/editors/wingedit/wingdlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wingdlg.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7WingDlgE_t {};
} // unnamed namespace

template <> constexpr inline auto WingDlg::qt_create_metaobjectdata<qt_meta_tag_ZN7WingDlgE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "WingDlg",
        "onOK",
        "",
        "onMetaDataChanged",
        "onWingColor",
        "onSurfaceColor",
        "onInsertNBefore",
        "onInsertNAfter",
        "onDuplicateSection",
        "onDeleteSection",
        "onResetSection",
        "onResetMesh",
        "onScaleWing",
        "onTranslateWing",
        "onInertia",
        "onExportWingToXML",
        "onExportWingToCADFile",
        "onExportWingToStlFile",
        "onButton",
        "QAbstractButton*",
        "pButton",
        "onSplitterMoved",
        "onNodeDistance",
        "onPickedNodePair",
        "std::pair<int,int>",
        "nodepair",
        "onPaste"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onOK'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onMetaDataChanged'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onWingColor'
        QtMocHelpers::SlotData<void(QColor)>(4, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QColor, 2 },
        }}),
        // Slot 'onSurfaceColor'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onInsertNBefore'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onInsertNAfter'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onDuplicateSection'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onDeleteSection'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onResetSection'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onResetMesh'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onScaleWing'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onTranslateWing'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onInertia'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onExportWingToXML'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onExportWingToCADFile'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onExportWingToStlFile'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onButton'
        QtMocHelpers::SlotData<void(QAbstractButton *)>(18, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 19, 20 },
        }}),
        // Slot 'onSplitterMoved'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onNodeDistance'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onPickedNodePair'
        QtMocHelpers::SlotData<void(QPair<int,int>)>(23, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 24, 25 },
        }}),
        // Slot 'onPaste'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<WingDlg, qt_meta_tag_ZN7WingDlgE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject WingDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<XflDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7WingDlgE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7WingDlgE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7WingDlgE_t>.metaTypes,
    nullptr
} };

void WingDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WingDlg *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onOK(); break;
        case 1: _t->onMetaDataChanged(); break;
        case 2: _t->onWingColor((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 3: _t->onSurfaceColor(); break;
        case 4: _t->onInsertNBefore(); break;
        case 5: _t->onInsertNAfter(); break;
        case 6: _t->onDuplicateSection(); break;
        case 7: _t->onDeleteSection(); break;
        case 8: _t->onResetSection(); break;
        case 9: _t->onResetMesh(); break;
        case 10: _t->onScaleWing(); break;
        case 11: _t->onTranslateWing(); break;
        case 12: _t->onInertia(); break;
        case 13: _t->onExportWingToXML(); break;
        case 14: _t->onExportWingToCADFile(); break;
        case 15: _t->onExportWingToStlFile(); break;
        case 16: _t->onButton((*reinterpret_cast< std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        case 17: _t->onSplitterMoved(); break;
        case 18: _t->onNodeDistance(); break;
        case 19: _t->onPickedNodePair((*reinterpret_cast< std::add_pointer_t<std::pair<int,int>>>(_a[1]))); break;
        case 20: _t->onPaste(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractButton* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *WingDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WingDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7WingDlgE_t>.strings))
        return static_cast<void*>(this);
    return XflDialog::qt_metacast(_clname);
}

int WingDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XflDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}
QT_WARNING_POP
