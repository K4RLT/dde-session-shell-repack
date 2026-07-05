/****************************************************************************
** Meta object code from reading C++ file 'accounts1interface.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/global_util/dbus/accounts1interface.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accounts1interface.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASS__OrgDeepinDdeAccounts1InterfaceENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASS__OrgDeepinDdeAccounts1InterfaceENDCLASS = QtMocHelpers::stringData(
    "__OrgDeepinDdeAccounts1Interface",
    "UserAdded",
    "",
    "in0",
    "UserDeleted",
    "AllowGuestChanged",
    "value",
    "GuestIconChanged",
    "UserListChanged",
    "AllowGuestAccount",
    "QDBusPendingReply<>",
    "AllowGuestAccountQueued",
    "CreateGuestAccount",
    "QDBusPendingReply<QString>",
    "CreateUser",
    "QDBusPendingReply<QDBusObjectPath>",
    "in1",
    "in2",
    "DeleteUser",
    "DeleteUserQueued",
    "FindUserById",
    "FindUserByName",
    "GetGroups",
    "QDBusPendingReply<QStringList>",
    "GetPresetGroups",
    "IsPasswordValid",
    "QDBusPendingReply<bool,QString,int>",
    "QDBusReply<bool>",
    "QString&",
    "out1",
    "int&",
    "out2",
    "IsUsernameValid",
    "RandUserIcon",
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
    "AllowGuest",
    "GuestIcon",
    "UserList"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASS__OrgDeepinDdeAccounts1InterfaceENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       3,  235, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  152,    2, 0x06,    4 /* Public */,
       4,    1,  155,    2, 0x06,    6 /* Public */,
       5,    1,  158,    2, 0x106,    8 /* Public | MethodIsConst  */,
       7,    1,  161,    2, 0x106,   10 /* Public | MethodIsConst  */,
       8,    1,  164,    2, 0x106,   12 /* Public | MethodIsConst  */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    1,  167,    2, 0x0a,   14 /* Public */,
      11,    1,  170,    2, 0x0a,   16 /* Public */,
      12,    0,  173,    2, 0x0a,   18 /* Public */,
      14,    3,  174,    2, 0x0a,   19 /* Public */,
      18,    2,  181,    2, 0x0a,   23 /* Public */,
      19,    2,  186,    2, 0x0a,   26 /* Public */,
      20,    1,  191,    2, 0x0a,   29 /* Public */,
      21,    1,  194,    2, 0x0a,   31 /* Public */,
      22,    0,  197,    2, 0x0a,   33 /* Public */,
      24,    1,  198,    2, 0x0a,   34 /* Public */,
      25,    1,  201,    2, 0x0a,   36 /* Public */,
      25,    3,  204,    2, 0x0a,   38 /* Public */,
      32,    1,  211,    2, 0x0a,   42 /* Public */,
      32,    3,  214,    2, 0x0a,   44 /* Public */,
      33,    0,  221,    2, 0x0a,   48 /* Public */,
      34,    2,  222,    2, 0x0a,   49 /* Public */,
      38,    1,  227,    2, 0x08,   52 /* Private */,
      41,    2,  230,    2, 0x08,   54 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QStringList,    6,

 // slots: parameters
    0x80000000 | 10, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    0x80000000 | 13,
    0x80000000 | 15, QMetaType::QString, QMetaType::QString, QMetaType::Int,    3,   16,   17,
    0x80000000 | 10, QMetaType::QString, QMetaType::Bool,    3,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,   16,
    0x80000000 | 13, QMetaType::QString,    3,
    0x80000000 | 13, QMetaType::QString,    3,
    0x80000000 | 23,
    0x80000000 | 23, QMetaType::Int,    3,
    0x80000000 | 26, QMetaType::QString,    3,
    0x80000000 | 27, QMetaType::QString, 0x80000000 | 28, 0x80000000 | 30,    3,   29,   31,
    0x80000000 | 26, QMetaType::QString,    3,
    0x80000000 | 27, QMetaType::QString, 0x80000000 | 28, 0x80000000 | 30,    3,   29,   31,
    0x80000000 | 13,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 36,   35,   37,
    QMetaType::Void, 0x80000000 | 39,   40,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 43,   42,    6,

 // properties: name, type, flags, notifyId, revision
      44, QMetaType::Bool, 0x00015001, uint(2), 0,
      45, QMetaType::QString, 0x00015001, uint(3), 0,
      46, QMetaType::QStringList, 0x00015001, uint(4), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject __OrgDeepinDdeAccounts1Interface::staticMetaObject = { {
    QMetaObject::SuperData::link<Dtk::Core::DDBusExtendedAbstractInterface::staticMetaObject>(),
    qt_meta_stringdata_CLASS__OrgDeepinDdeAccounts1InterfaceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASS__OrgDeepinDdeAccounts1InterfaceENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASS__OrgDeepinDdeAccounts1InterfaceENDCLASS_t,
        // property 'AllowGuest'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'GuestIcon'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'UserList'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<__OrgDeepinDdeAccounts1Interface, std::true_type>,
        // method 'UserAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'UserDeleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'AllowGuestChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'GuestIconChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'UserListChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'AllowGuestAccount'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'AllowGuestAccountQueued'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'CreateGuestAccount'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<QString>, std::false_type>,
        // method 'CreateUser'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<QDBusObjectPath>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'DeleteUser'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'DeleteUserQueued'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'FindUserById'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<QString>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'FindUserByName'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<QString>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'GetGroups'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<QStringList>, std::false_type>,
        // method 'GetPresetGroups'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<QStringList>, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'IsPasswordValid'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<bool,QString,int>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'IsPasswordValid'
        QtPrivate::TypeAndForceComplete<QDBusReply<bool>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int &, std::false_type>,
        // method 'IsUsernameValid'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<bool,QString,int>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'IsUsernameValid'
        QtPrivate::TypeAndForceComplete<QDBusReply<bool>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int &, std::false_type>,
        // method 'RandUserIcon'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<QString>, std::false_type>,
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

void __OrgDeepinDdeAccounts1Interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<__OrgDeepinDdeAccounts1Interface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->UserAdded((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->UserDeleted((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->AllowGuestChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->GuestIconChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->UserListChanged((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 5: { QDBusPendingReply<> _r = _t->AllowGuestAccount((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->AllowGuestAccountQueued((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: { QDBusPendingReply<QString> _r = _t->CreateGuestAccount();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString>*>(_a[0]) = std::move(_r); }  break;
        case 8: { QDBusPendingReply<QDBusObjectPath> _r = _t->CreateUser((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QDBusObjectPath>*>(_a[0]) = std::move(_r); }  break;
        case 9: { QDBusPendingReply<> _r = _t->DeleteUser((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->DeleteUserQueued((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 11: { QDBusPendingReply<QString> _r = _t->FindUserById((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString>*>(_a[0]) = std::move(_r); }  break;
        case 12: { QDBusPendingReply<QString> _r = _t->FindUserByName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString>*>(_a[0]) = std::move(_r); }  break;
        case 13: { QDBusPendingReply<QStringList> _r = _t->GetGroups();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QStringList>*>(_a[0]) = std::move(_r); }  break;
        case 14: { QDBusPendingReply<QStringList> _r = _t->GetPresetGroups((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QStringList>*>(_a[0]) = std::move(_r); }  break;
        case 15: { QDBusPendingReply<bool,QString,int> _r = _t->IsPasswordValid((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<bool,QString,int>*>(_a[0]) = std::move(_r); }  break;
        case 16: { QDBusReply<bool> _r = _t->IsPasswordValid((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString&>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int&>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDBusReply<bool>*>(_a[0]) = std::move(_r); }  break;
        case 17: { QDBusPendingReply<bool,QString,int> _r = _t->IsUsernameValid((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<bool,QString,int>*>(_a[0]) = std::move(_r); }  break;
        case 18: { QDBusReply<bool> _r = _t->IsUsernameValid((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString&>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int&>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDBusReply<bool>*>(_a[0]) = std::move(_r); }  break;
        case 19: { QDBusPendingReply<QString> _r = _t->RandUserIcon();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString>*>(_a[0]) = std::move(_r); }  break;
        case 20: _t->CallQueued((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QVariant>>>(_a[2]))); break;
        case 21: _t->onPendingCallFinished((*reinterpret_cast< std::add_pointer_t<QDBusPendingCallWatcher*>>(_a[1]))); break;
        case 22: _t->onPropertyChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 21:
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
            using _t = void (__OrgDeepinDdeAccounts1Interface::*)(const QString & );
            if (_t _q_method = &__OrgDeepinDdeAccounts1Interface::UserAdded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (__OrgDeepinDdeAccounts1Interface::*)(const QString & );
            if (_t _q_method = &__OrgDeepinDdeAccounts1Interface::UserDeleted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (__OrgDeepinDdeAccounts1Interface::*)(bool ) const;
            if (_t _q_method = &__OrgDeepinDdeAccounts1Interface::AllowGuestChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (__OrgDeepinDdeAccounts1Interface::*)(const QString & ) const;
            if (_t _q_method = &__OrgDeepinDdeAccounts1Interface::GuestIconChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (__OrgDeepinDdeAccounts1Interface::*)(const QStringList & ) const;
            if (_t _q_method = &__OrgDeepinDdeAccounts1Interface::UserListChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<__OrgDeepinDdeAccounts1Interface *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->allowGuest(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->guestIcon(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->userList(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *__OrgDeepinDdeAccounts1Interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *__OrgDeepinDdeAccounts1Interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASS__OrgDeepinDdeAccounts1InterfaceENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Dtk::Core::DDBusExtendedAbstractInterface::qt_metacast(_clname);
}

int __OrgDeepinDdeAccounts1Interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Dtk::Core::DDBusExtendedAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void __OrgDeepinDdeAccounts1Interface::UserAdded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void __OrgDeepinDdeAccounts1Interface::UserDeleted(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void __OrgDeepinDdeAccounts1Interface::AllowGuestChanged(bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< __OrgDeepinDdeAccounts1Interface *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void __OrgDeepinDdeAccounts1Interface::GuestIconChanged(const QString & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< __OrgDeepinDdeAccounts1Interface *>(this), &staticMetaObject, 3, _a);
}

// SIGNAL 4
void __OrgDeepinDdeAccounts1Interface::UserListChanged(const QStringList & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< __OrgDeepinDdeAccounts1Interface *>(this), &staticMetaObject, 4, _a);
}
QT_WARNING_POP
