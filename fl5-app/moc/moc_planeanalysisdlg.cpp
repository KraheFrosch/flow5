/****************************************************************************
** Meta object code from reading C++ file 'planeanalysisdlg.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../modules/xplane/analysis/planeanalysisdlg.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'planeanalysisdlg.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN16PlaneAnalysisDlgE_t {};
} // unnamed namespace

template <> constexpr inline auto PlaneAnalysisDlg::qt_create_metaobjectdata<qt_meta_tag_ZN16PlaneAnalysisDlgE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PlaneAnalysisDlg",
        "analysisFinished",
        "",
        "PlanePolar*",
        "onCancelClose",
        "onKeepOpenErrors",
        "onLiveVortons",
        "onOutputMessage",
        "msg",
        "onStopIterations",
        "onTaskFinished"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'analysisFinished'
        QtMocHelpers::SignalData<void(PlanePolar *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Slot 'onCancelClose'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onKeepOpenErrors'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onLiveVortons'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onOutputMessage'
        QtMocHelpers::SlotData<void(const QString &)>(7, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QString, 8 },
        }}),
        // Slot 'onStopIterations'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onTaskFinished'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PlaneAnalysisDlg, qt_meta_tag_ZN16PlaneAnalysisDlgE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PlaneAnalysisDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16PlaneAnalysisDlgE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16PlaneAnalysisDlgE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16PlaneAnalysisDlgE_t>.metaTypes,
    nullptr
} };

void PlaneAnalysisDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PlaneAnalysisDlg *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->analysisFinished((*reinterpret_cast< std::add_pointer_t<PlanePolar*>>(_a[1]))); break;
        case 1: _t->onCancelClose(); break;
        case 2: _t->onKeepOpenErrors(); break;
        case 3: _t->onLiveVortons(); break;
        case 4: _t->onOutputMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->onStopIterations(); break;
        case 6: _t->onTaskFinished(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PlaneAnalysisDlg::*)(PlanePolar * )>(_a, &PlaneAnalysisDlg::analysisFinished, 0))
            return;
    }
}

const QMetaObject *PlaneAnalysisDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlaneAnalysisDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16PlaneAnalysisDlgE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PlaneAnalysisDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void PlaneAnalysisDlg::analysisFinished(PlanePolar * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
