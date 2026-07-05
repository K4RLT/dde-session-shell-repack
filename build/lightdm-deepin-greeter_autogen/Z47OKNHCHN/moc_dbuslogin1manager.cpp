/****************************************************************************
** Meta object code from reading C++ file 'dbuslogin1manager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/global_util/dbus/dbuslogin1manager.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbuslogin1manager.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSDBusLogin1ManagerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSDBusLogin1ManagerENDCLASS = QtMocHelpers::stringData(
    "DBusLogin1Manager",
    "BlockInhibitedChanged",
    "",
    "PrepareForShutdown",
    "active",
    "PrepareForSleep",
    "SeatNew",
    "id",
    "QDBusObjectPath",
    "path",
    "SeatRemoved",
    "SessionNew",
    "SessionRemoved",
    "UserNew",
    "uid",
    "UserRemoved",
    "__propertyChanged__",
    "QDBusMessage",
    "msg",
    "ActivateSession",
    "QDBusPendingReply<>",
    "ActivateSessionOnSeat",
    "seat",
    "AttachDevice",
    "sysfs",
    "interactive",
    "CanHibernate",
    "QDBusPendingReply<QString>",
    "CanHybridSleep",
    "CanPowerOff",
    "CanReboot",
    "CanSuspend",
    "FlushDevices",
    "GetSeat",
    "QDBusPendingReply<QDBusObjectPath>",
    "GetSession",
    "GetSessionByPID",
    "pid",
    "GetUser",
    "Hibernate",
    "HybridSleep",
    "Inhibit",
    "QDBusPendingReply<QDBusUnixFileDescriptor>",
    "what",
    "who",
    "why",
    "mode",
    "KillSession",
    "signal",
    "KillUser",
    "ListInhibitors",
    "QDBusPendingReply<InhibitorsList>",
    "ListSeats",
    "QDBusPendingReply<SeatList>",
    "ListSessions",
    "QDBusPendingReply<SessionList>",
    "ListUsers",
    "QDBusPendingReply<UserList>",
    "LockSession",
    "LockSessions",
    "PowerOff",
    "Reboot",
    "ReleaseSession",
    "SetUserLinger",
    "b",
    "Suspend",
    "TerminateSeat",
    "TerminateSession",
    "TerminateUser",
    "UnlockSession",
    "UnlockSessions",
    "BlockInhibited",
    "ControlGroupHierarchy",
    "Controllers",
    "DelayInhibited",
    "HandleHibernateKey",
    "HandleLidSwitch",
    "HandlePowerKey",
    "HandleSuspendKey",
    "IdleAction",
    "IdleActionUSec",
    "IdleHint",
    "IdleSinceHint",
    "IdleSinceHintMonotonic",
    "InhibitDelayMaxUSec",
    "KillExcludeUsers",
    "KillOnlyUsers",
    "KillUserProcesses",
    "NAutoVTs",
    "PreparingForShutdown",
    "PreparingForSleep",
    "ResetControllers"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDBusLogin1ManagerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      44,   14, // methods
      21,  420, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  278,    2, 0x06,   22 /* Public */,
       3,    1,  279,    2, 0x06,   23 /* Public */,
       5,    1,  282,    2, 0x06,   25 /* Public */,
       6,    2,  285,    2, 0x06,   27 /* Public */,
      10,    2,  290,    2, 0x06,   30 /* Public */,
      11,    2,  295,    2, 0x06,   33 /* Public */,
      12,    2,  300,    2, 0x06,   36 /* Public */,
      13,    2,  305,    2, 0x06,   39 /* Public */,
      15,    2,  310,    2, 0x06,   42 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      16,    1,  315,    2, 0x08,   45 /* Private */,
      19,    1,  318,    2, 0x0a,   47 /* Public */,
      21,    2,  321,    2, 0x0a,   49 /* Public */,
      23,    3,  326,    2, 0x0a,   52 /* Public */,
      26,    0,  333,    2, 0x0a,   56 /* Public */,
      28,    0,  334,    2, 0x0a,   57 /* Public */,
      29,    0,  335,    2, 0x0a,   58 /* Public */,
      30,    0,  336,    2, 0x0a,   59 /* Public */,
      31,    0,  337,    2, 0x0a,   60 /* Public */,
      32,    1,  338,    2, 0x0a,   61 /* Public */,
      33,    1,  341,    2, 0x0a,   63 /* Public */,
      35,    1,  344,    2, 0x0a,   65 /* Public */,
      36,    1,  347,    2, 0x0a,   67 /* Public */,
      38,    1,  350,    2, 0x0a,   69 /* Public */,
      39,    1,  353,    2, 0x0a,   71 /* Public */,
      40,    1,  356,    2, 0x0a,   73 /* Public */,
      41,    4,  359,    2, 0x0a,   75 /* Public */,
      47,    3,  368,    2, 0x0a,   80 /* Public */,
      49,    2,  375,    2, 0x0a,   84 /* Public */,
      50,    0,  380,    2, 0x0a,   87 /* Public */,
      52,    0,  381,    2, 0x0a,   88 /* Public */,
      54,    0,  382,    2, 0x0a,   89 /* Public */,
      56,    0,  383,    2, 0x0a,   90 /* Public */,
      58,    1,  384,    2, 0x0a,   91 /* Public */,
      59,    0,  387,    2, 0x0a,   93 /* Public */,
      60,    1,  388,    2, 0x0a,   94 /* Public */,
      61,    1,  391,    2, 0x0a,   96 /* Public */,
      62,    1,  394,    2, 0x0a,   98 /* Public */,
      63,    3,  397,    2, 0x0a,  100 /* Public */,
      65,    1,  404,    2, 0x0a,  104 /* Public */,
      66,    1,  407,    2, 0x0a,  106 /* Public */,
      67,    1,  410,    2, 0x0a,  108 /* Public */,
      68,    1,  413,    2, 0x0a,  110 /* Public */,
      69,    1,  416,    2, 0x0a,  112 /* Public */,
      70,    0,  419,    2, 0x0a,  114 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 8,    7,    9,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 8,    7,    9,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 8,    7,    9,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 8,    7,    9,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 8,   14,    9,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 8,   14,    9,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 17,   18,
    0x80000000 | 20, QMetaType::QString,    7,
    0x80000000 | 20, QMetaType::QString, QMetaType::QString,    7,   22,
    0x80000000 | 20, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   22,   24,   25,
    0x80000000 | 27,
    0x80000000 | 27,
    0x80000000 | 27,
    0x80000000 | 27,
    0x80000000 | 27,
    0x80000000 | 20, QMetaType::Bool,   25,
    0x80000000 | 34, QMetaType::QString,    7,
    0x80000000 | 34, QMetaType::QString,    7,
    0x80000000 | 34, QMetaType::UInt,   37,
    0x80000000 | 34, QMetaType::UInt,   14,
    0x80000000 | 20, QMetaType::Bool,   25,
    0x80000000 | 20, QMetaType::Bool,   25,
    0x80000000 | 42, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   43,   44,   45,   46,
    0x80000000 | 20, QMetaType::QString, QMetaType::QString, QMetaType::QString,    7,   44,   48,
    0x80000000 | 20, QMetaType::UInt, QMetaType::QString,   14,   48,
    0x80000000 | 51,
    0x80000000 | 53,
    0x80000000 | 55,
    0x80000000 | 57,
    0x80000000 | 20, QMetaType::QString,    7,
    0x80000000 | 20,
    0x80000000 | 20, QMetaType::Bool,   25,
    0x80000000 | 20, QMetaType::Bool,   25,
    0x80000000 | 20, QMetaType::QString,    7,
    0x80000000 | 20, QMetaType::UInt, QMetaType::Bool, QMetaType::Bool,   14,   64,   25,
    0x80000000 | 20, QMetaType::Bool,   25,
    0x80000000 | 20, QMetaType::QString,    7,
    0x80000000 | 20, QMetaType::QString,    7,
    0x80000000 | 20, QMetaType::UInt,   14,
    0x80000000 | 20, QMetaType::QString,    7,
    0x80000000 | 20,

 // properties: name, type, flags, notifyId, revision
      71, QMetaType::QString, 0x00015001, uint(0), 0,
      72, QMetaType::QString, 0x00015001, uint(-1), 0,
      73, QMetaType::QStringList, 0x00015001, uint(-1), 0,
      74, QMetaType::QString, 0x00015001, uint(-1), 0,
      75, QMetaType::QString, 0x00015001, uint(-1), 0,
      76, QMetaType::QString, 0x00015001, uint(-1), 0,
      77, QMetaType::QString, 0x00015001, uint(-1), 0,
      78, QMetaType::QString, 0x00015001, uint(-1), 0,
      79, QMetaType::QString, 0x00015001, uint(-1), 0,
      80, QMetaType::ULongLong, 0x00015001, uint(-1), 0,
      81, QMetaType::Bool, 0x00015001, uint(-1), 0,
      82, QMetaType::ULongLong, 0x00015001, uint(-1), 0,
      83, QMetaType::ULongLong, 0x00015001, uint(-1), 0,
      84, QMetaType::ULongLong, 0x00015001, uint(-1), 0,
      85, QMetaType::QStringList, 0x00015001, uint(-1), 0,
      86, QMetaType::QStringList, 0x00015001, uint(-1), 0,
      87, QMetaType::Bool, 0x00015001, uint(-1), 0,
      88, QMetaType::UInt, 0x00015001, uint(-1), 0,
      89, QMetaType::Bool, 0x00015001, uint(-1), 0,
      90, QMetaType::Bool, 0x00015001, uint(-1), 0,
      91, QMetaType::QStringList, 0x00015001, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject DBusLogin1Manager::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractInterface::staticMetaObject>(),
    qt_meta_stringdata_CLASSDBusLogin1ManagerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDBusLogin1ManagerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDBusLogin1ManagerENDCLASS_t,
        // property 'BlockInhibited'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'ControlGroupHierarchy'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'Controllers'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'DelayInhibited'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'HandleHibernateKey'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'HandleLidSwitch'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'HandlePowerKey'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'HandleSuspendKey'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'IdleAction'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'IdleActionUSec'
        QtPrivate::TypeAndForceComplete<qulonglong, std::true_type>,
        // property 'IdleHint'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'IdleSinceHint'
        QtPrivate::TypeAndForceComplete<qulonglong, std::true_type>,
        // property 'IdleSinceHintMonotonic'
        QtPrivate::TypeAndForceComplete<qulonglong, std::true_type>,
        // property 'InhibitDelayMaxUSec'
        QtPrivate::TypeAndForceComplete<qulonglong, std::true_type>,
        // property 'KillExcludeUsers'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'KillOnlyUsers'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'KillUserProcesses'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'NAutoVTs'
        QtPrivate::TypeAndForceComplete<uint, std::true_type>,
        // property 'PreparingForShutdown'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'PreparingForSleep'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'ResetControllers'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DBusLogin1Manager, std::true_type>,
        // method 'BlockInhibitedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'PrepareForShutdown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'PrepareForSleep'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'SeatNew'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDBusObjectPath &, std::false_type>,
        // method 'SeatRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDBusObjectPath &, std::false_type>,
        // method 'SessionNew'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDBusObjectPath &, std::false_type>,
        // method 'SessionRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDBusObjectPath &, std::false_type>,
        // method 'UserNew'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDBusObjectPath &, std::false_type>,
        // method 'UserRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDBusObjectPath &, std::false_type>,
        // method '__propertyChanged__'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDBusMessage &, std::false_type>,
        // method 'ActivateSession'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'ActivateSessionOnSeat'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'AttachDevice'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'CanHibernate'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<QString>, std::false_type>,
        // method 'CanHybridSleep'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<QString>, std::false_type>,
        // method 'CanPowerOff'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<QString>, std::false_type>,
        // method 'CanReboot'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<QString>, std::false_type>,
        // method 'CanSuspend'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<QString>, std::false_type>,
        // method 'FlushDevices'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'GetSeat'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<QDBusObjectPath>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'GetSession'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<QDBusObjectPath>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'GetSessionByPID'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<QDBusObjectPath>, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint, std::false_type>,
        // method 'GetUser'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<QDBusObjectPath>, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint, std::false_type>,
        // method 'Hibernate'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'HybridSleep'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'Inhibit'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<QDBusUnixFileDescriptor>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'KillSession'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'KillUser'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'ListInhibitors'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<InhibitorsList>, std::false_type>,
        // method 'ListSeats'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<SeatList>, std::false_type>,
        // method 'ListSessions'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<SessionList>, std::false_type>,
        // method 'ListUsers'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<UserList>, std::false_type>,
        // method 'LockSession'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'LockSessions'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        // method 'PowerOff'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'Reboot'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'ReleaseSession'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'SetUserLinger'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'Suspend'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'TerminateSeat'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'TerminateSession'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'TerminateUser'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint, std::false_type>,
        // method 'UnlockSession'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'UnlockSessions'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>
    >,
    nullptr
} };

void DBusLogin1Manager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DBusLogin1Manager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->BlockInhibitedChanged(); break;
        case 1: _t->PrepareForShutdown((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->PrepareForSleep((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->SeatNew((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDBusObjectPath>>(_a[2]))); break;
        case 4: _t->SeatRemoved((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDBusObjectPath>>(_a[2]))); break;
        case 5: _t->SessionNew((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDBusObjectPath>>(_a[2]))); break;
        case 6: _t->SessionRemoved((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDBusObjectPath>>(_a[2]))); break;
        case 7: _t->UserNew((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDBusObjectPath>>(_a[2]))); break;
        case 8: _t->UserRemoved((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDBusObjectPath>>(_a[2]))); break;
        case 9: _t->__propertyChanged__((*reinterpret_cast< std::add_pointer_t<QDBusMessage>>(_a[1]))); break;
        case 10: { QDBusPendingReply<> _r = _t->ActivateSession((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 11: { QDBusPendingReply<> _r = _t->ActivateSessionOnSeat((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 12: { QDBusPendingReply<> _r = _t->AttachDevice((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 13: { QDBusPendingReply<QString> _r = _t->CanHibernate();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString>*>(_a[0]) = std::move(_r); }  break;
        case 14: { QDBusPendingReply<QString> _r = _t->CanHybridSleep();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString>*>(_a[0]) = std::move(_r); }  break;
        case 15: { QDBusPendingReply<QString> _r = _t->CanPowerOff();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString>*>(_a[0]) = std::move(_r); }  break;
        case 16: { QDBusPendingReply<QString> _r = _t->CanReboot();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString>*>(_a[0]) = std::move(_r); }  break;
        case 17: { QDBusPendingReply<QString> _r = _t->CanSuspend();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString>*>(_a[0]) = std::move(_r); }  break;
        case 18: { QDBusPendingReply<> _r = _t->FlushDevices((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 19: { QDBusPendingReply<QDBusObjectPath> _r = _t->GetSeat((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QDBusObjectPath>*>(_a[0]) = std::move(_r); }  break;
        case 20: { QDBusPendingReply<QDBusObjectPath> _r = _t->GetSession((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QDBusObjectPath>*>(_a[0]) = std::move(_r); }  break;
        case 21: { QDBusPendingReply<QDBusObjectPath> _r = _t->GetSessionByPID((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QDBusObjectPath>*>(_a[0]) = std::move(_r); }  break;
        case 22: { QDBusPendingReply<QDBusObjectPath> _r = _t->GetUser((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QDBusObjectPath>*>(_a[0]) = std::move(_r); }  break;
        case 23: { QDBusPendingReply<> _r = _t->Hibernate((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 24: { QDBusPendingReply<> _r = _t->HybridSleep((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 25: { QDBusPendingReply<QDBusUnixFileDescriptor> _r = _t->Inhibit((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QDBusUnixFileDescriptor>*>(_a[0]) = std::move(_r); }  break;
        case 26: { QDBusPendingReply<> _r = _t->KillSession((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 27: { QDBusPendingReply<> _r = _t->KillUser((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 28: { QDBusPendingReply<InhibitorsList> _r = _t->ListInhibitors();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<InhibitorsList>*>(_a[0]) = std::move(_r); }  break;
        case 29: { QDBusPendingReply<SeatList> _r = _t->ListSeats();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<SeatList>*>(_a[0]) = std::move(_r); }  break;
        case 30: { QDBusPendingReply<SessionList> _r = _t->ListSessions();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<SessionList>*>(_a[0]) = std::move(_r); }  break;
        case 31: { QDBusPendingReply<UserList> _r = _t->ListUsers();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<UserList>*>(_a[0]) = std::move(_r); }  break;
        case 32: { QDBusPendingReply<> _r = _t->LockSession((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 33: { QDBusPendingReply<> _r = _t->LockSessions();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 34: { QDBusPendingReply<> _r = _t->PowerOff((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 35: { QDBusPendingReply<> _r = _t->Reboot((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 36: { QDBusPendingReply<> _r = _t->ReleaseSession((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 37: { QDBusPendingReply<> _r = _t->SetUserLinger((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 38: { QDBusPendingReply<> _r = _t->Suspend((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 39: { QDBusPendingReply<> _r = _t->TerminateSeat((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 40: { QDBusPendingReply<> _r = _t->TerminateSession((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 41: { QDBusPendingReply<> _r = _t->TerminateUser((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 42: { QDBusPendingReply<> _r = _t->UnlockSession((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 43: { QDBusPendingReply<> _r = _t->UnlockSessions();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QDBusObjectPath >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QDBusObjectPath >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QDBusObjectPath >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QDBusObjectPath >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QDBusObjectPath >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QDBusObjectPath >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QDBusMessage >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DBusLogin1Manager::*)();
            if (_t _q_method = &DBusLogin1Manager::BlockInhibitedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DBusLogin1Manager::*)(bool );
            if (_t _q_method = &DBusLogin1Manager::PrepareForShutdown; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DBusLogin1Manager::*)(bool );
            if (_t _q_method = &DBusLogin1Manager::PrepareForSleep; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DBusLogin1Manager::*)(const QString & , const QDBusObjectPath & );
            if (_t _q_method = &DBusLogin1Manager::SeatNew; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DBusLogin1Manager::*)(const QString & , const QDBusObjectPath & );
            if (_t _q_method = &DBusLogin1Manager::SeatRemoved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DBusLogin1Manager::*)(const QString & , const QDBusObjectPath & );
            if (_t _q_method = &DBusLogin1Manager::SessionNew; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DBusLogin1Manager::*)(const QString & , const QDBusObjectPath & );
            if (_t _q_method = &DBusLogin1Manager::SessionRemoved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DBusLogin1Manager::*)(uint , const QDBusObjectPath & );
            if (_t _q_method = &DBusLogin1Manager::UserNew; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (DBusLogin1Manager::*)(uint , const QDBusObjectPath & );
            if (_t _q_method = &DBusLogin1Manager::UserRemoved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DBusLogin1Manager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->blockInhibited(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->controlGroupHierarchy(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->controllers(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->delayInhibited(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->handleHibernateKey(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->handleLidSwitch(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->handlePowerKey(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->handleSuspendKey(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->idleAction(); break;
        case 9: *reinterpret_cast< qulonglong*>(_v) = _t->idleActionUSec(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->idleHint(); break;
        case 11: *reinterpret_cast< qulonglong*>(_v) = _t->idleSinceHint(); break;
        case 12: *reinterpret_cast< qulonglong*>(_v) = _t->idleSinceHintMonotonic(); break;
        case 13: *reinterpret_cast< qulonglong*>(_v) = _t->inhibitDelayMaxUSec(); break;
        case 14: *reinterpret_cast< QStringList*>(_v) = _t->killExcludeUsers(); break;
        case 15: *reinterpret_cast< QStringList*>(_v) = _t->killOnlyUsers(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->killUserProcesses(); break;
        case 17: *reinterpret_cast< uint*>(_v) = _t->nAutoVTs(); break;
        case 18: *reinterpret_cast< bool*>(_v) = _t->preparingForShutdown(); break;
        case 19: *reinterpret_cast< bool*>(_v) = _t->preparingForSleep(); break;
        case 20: *reinterpret_cast< QStringList*>(_v) = _t->resetControllers(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *DBusLogin1Manager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DBusLogin1Manager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDBusLogin1ManagerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int DBusLogin1Manager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void DBusLogin1Manager::BlockInhibitedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DBusLogin1Manager::PrepareForShutdown(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DBusLogin1Manager::PrepareForSleep(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DBusLogin1Manager::SeatNew(const QString & _t1, const QDBusObjectPath & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DBusLogin1Manager::SeatRemoved(const QString & _t1, const QDBusObjectPath & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DBusLogin1Manager::SessionNew(const QString & _t1, const QDBusObjectPath & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DBusLogin1Manager::SessionRemoved(const QString & _t1, const QDBusObjectPath & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DBusLogin1Manager::UserNew(uint _t1, const QDBusObjectPath & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void DBusLogin1Manager::UserRemoved(uint _t1, const QDBusObjectPath & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
