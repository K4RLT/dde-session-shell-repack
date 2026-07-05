/****************************************************************************
** Meta object code from reading C++ file 'imageeffect1interface.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/global_util/dbus/imageeffect1interface.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imageeffect1interface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.0. It"
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

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASS__OrgDeepinDdeImageEffect1InterfaceENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASS__OrgDeepinDdeImageEffect1InterfaceENDCLASS = QtMocHelpers::stringData(
    "__OrgDeepinDdeImageEffect1Interface",
    "Delete",
    "QDBusPendingReply<>",
    "",
    "effect",
    "filename",
    "DeleteQueued",
    "Get",
    "QDBusPendingReply<QString>",
    "CallQueued",
    "callName",
    "QList<QVariant>",
    "args",
    "onPendingCallFinished",
    "QDBusPendingCallWatcher*",
    "w"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASS__OrgDeepinDdeImageEffect1InterfaceENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   44,    3, 0x0a,    1 /* Public */,
       6,    2,   49,    3, 0x0a,    4 /* Public */,
       7,    2,   54,    3, 0x0a,    7 /* Public */,
       9,    2,   59,    3, 0x0a,   10 /* Public */,
      13,    1,   64,    3, 0x08,   13 /* Private */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QString, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    4,    5,
    0x80000000 | 8, QMetaType::QString, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 11,   10,   12,
    QMetaType::Void, 0x80000000 | 14,   15,

       0        // eod
};

Q_CONSTINIT const QMetaObject __OrgDeepinDdeImageEffect1Interface::staticMetaObject = { {
    QMetaObject::SuperData::link<Dtk::Core::DDBusExtendedAbstractInterface::staticMetaObject>(),
    qt_meta_stringdata_CLASS__OrgDeepinDdeImageEffect1InterfaceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASS__OrgDeepinDdeImageEffect1InterfaceENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASS__OrgDeepinDdeImageEffect1InterfaceENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<__OrgDeepinDdeImageEffect1Interface, std::true_type>,
        // method 'Delete'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'DeleteQueued'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'Get'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<QString>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'CallQueued'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QVariant> &, std::false_type>,
        // method 'onPendingCallFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDBusPendingCallWatcher *, std::false_type>
    >,
    nullptr
} };

void __OrgDeepinDdeImageEffect1Interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<__OrgDeepinDdeImageEffect1Interface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QDBusPendingReply<> _r = _t->Delete((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->DeleteQueued((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: { QDBusPendingReply<QString> _r = _t->Get((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString>*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->CallQueued((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QVariant>>>(_a[2]))); break;
        case 4: _t->onPendingCallFinished((*reinterpret_cast< std::add_pointer_t<QDBusPendingCallWatcher*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QDBusPendingCallWatcher* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *__OrgDeepinDdeImageEffect1Interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *__OrgDeepinDdeImageEffect1Interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASS__OrgDeepinDdeImageEffect1InterfaceENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Dtk::Core::DDBusExtendedAbstractInterface::qt_metacast(_clname);
}

int __OrgDeepinDdeImageEffect1Interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Dtk::Core::DDBusExtendedAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
