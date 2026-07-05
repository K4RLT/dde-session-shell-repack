/****************************************************************************
** Meta object code from reading C++ file 'loginedinterface.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/global_util/dbus/loginedinterface.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loginedinterface.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASS__OrgDeepinDdeLoginedInterfaceENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASS__OrgDeepinDdeLoginedInterfaceENDCLASS = QtMocHelpers::stringData(
    "__OrgDeepinDdeLoginedInterface",
    "LastLogoutUserChanged",
    "",
    "value",
    "UserListChanged",
    "CallQueued",
    "callName",
    "QList<QVariant>",
    "args",
    "onPendingCallFinished",
    "QDBusPendingCallWatcher*",
    "w",
    "onPropertyChanged",
    "propName",
    "QVariant",
    "LastLogoutUser",
    "UserList"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASS__OrgDeepinDdeLoginedInterfaceENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       2,   63, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x106,    3 /* Public | MethodIsConst  */,
       4,    1,   47,    2, 0x106,    5 /* Public | MethodIsConst  */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    2,   50,    2, 0x0a,    7 /* Public */,
       9,    1,   55,    2, 0x08,   10 /* Private */,
      12,    2,   58,    2, 0x08,   12 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 7,    6,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 14,   13,    3,

 // properties: name, type, flags, notifyId, revision
      15, QMetaType::UInt, 0x00015001, uint(0), 0,
      16, QMetaType::QString, 0x00015001, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject __OrgDeepinDdeLoginedInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<Dtk::Core::DDBusExtendedAbstractInterface::staticMetaObject>(),
    qt_meta_stringdata_CLASS__OrgDeepinDdeLoginedInterfaceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASS__OrgDeepinDdeLoginedInterfaceENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASS__OrgDeepinDdeLoginedInterfaceENDCLASS_t,
        // property 'LastLogoutUser'
        QtPrivate::TypeAndForceComplete<uint, std::true_type>,
        // property 'UserList'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<__OrgDeepinDdeLoginedInterface, std::true_type>,
        // method 'LastLogoutUserChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint, std::false_type>,
        // method 'UserListChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'CallQueued'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QVariant> &, std::false_type>,
        // method 'onPendingCallFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDBusPendingCallWatcher *, std::false_type>,
        // method 'onPropertyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>
    >,
    nullptr
} };

void __OrgDeepinDdeLoginedInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<__OrgDeepinDdeLoginedInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->LastLogoutUserChanged((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 1: _t->UserListChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->CallQueued((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QVariant>>>(_a[2]))); break;
        case 3: _t->onPendingCallFinished((*reinterpret_cast< std::add_pointer_t<QDBusPendingCallWatcher*>>(_a[1]))); break;
        case 4: _t->onPropertyChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QDBusPendingCallWatcher* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (__OrgDeepinDdeLoginedInterface::*)(uint ) const;
            if (_t _q_method = &__OrgDeepinDdeLoginedInterface::LastLogoutUserChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (__OrgDeepinDdeLoginedInterface::*)(const QString & ) const;
            if (_t _q_method = &__OrgDeepinDdeLoginedInterface::UserListChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<__OrgDeepinDdeLoginedInterface *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< uint*>(_v) = _t->lastLogoutUser(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->userList(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *__OrgDeepinDdeLoginedInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *__OrgDeepinDdeLoginedInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASS__OrgDeepinDdeLoginedInterfaceENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Dtk::Core::DDBusExtendedAbstractInterface::qt_metacast(_clname);
}

int __OrgDeepinDdeLoginedInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void __OrgDeepinDdeLoginedInterface::LastLogoutUserChanged(uint _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< __OrgDeepinDdeLoginedInterface *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void __OrgDeepinDdeLoginedInterface::UserListChanged(const QString & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< __OrgDeepinDdeLoginedInterface *>(this), &staticMetaObject, 1, _a);
}
QT_WARNING_POP
