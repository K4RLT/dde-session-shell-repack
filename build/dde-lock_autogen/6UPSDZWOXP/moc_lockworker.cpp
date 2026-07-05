/****************************************************************************
** Meta object code from reading C++ file 'lockworker.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/dde-lock/lockworker.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lockworker.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSLockWorkerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSLockWorkerENDCLASS = QtMocHelpers::stringData(
    "LockWorker",
    "createAuthentication",
    "",
    "account",
    "destroyAuthentication",
    "startAuthentication",
    "AuthFlags",
    "authType",
    "endAuthentication",
    "sendTokenToAuth",
    "AuthType",
    "token",
    "onEndAuthentication",
    "switchToUser",
    "std::shared_ptr<User>",
    "user",
    "restartResetSessionTimer",
    "onAuthFinished",
    "onAuthStateChanged",
    "type",
    "state",
    "message",
    "disableGlobalShortcutsForWayland",
    "enable",
    "checkAccount",
    "switchUser",
    "authFinishedAction",
    "onNoPasswordLoginChanged",
    "noPassword",
    "sendExtraInfo",
    "AuthCommon::AuthType",
    "info",
    "setLocked",
    "locked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSLockWorkerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  110,    2, 0x0a,    1 /* Public */,
       4,    1,  113,    2, 0x0a,    3 /* Public */,
       5,    2,  116,    2, 0x0a,    5 /* Public */,
       8,    2,  121,    2, 0x0a,    8 /* Public */,
       9,    3,  126,    2, 0x0a,   11 /* Public */,
      12,    2,  133,    2, 0x0a,   15 /* Public */,
      13,    1,  138,    2, 0x0a,   18 /* Public */,
      16,    0,  141,    2, 0x0a,   20 /* Public */,
      17,    0,  142,    2, 0x0a,   21 /* Public */,
      18,    3,  143,    2, 0x0a,   22 /* Public */,
      22,    1,  150,    2, 0x0a,   26 /* Public */,
      24,    2,  153,    2, 0x0a,   28 /* Public */,
      26,    0,  158,    2, 0x0a,   31 /* Public */,
      27,    2,  159,    2, 0x0a,   32 /* Public */,
      29,    3,  164,    2, 0x0a,   35 /* Public */,
      32,    1,  171,    2, 0x0a,   39 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6,    3,    7,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6,    3,    7,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 10, QMetaType::QString,    3,    7,   11,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6,    3,    7,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,   19,   20,   21,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,   25,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,   28,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 30, QMetaType::QString,    3,    7,   31,
    QMetaType::Void, QMetaType::Bool,   33,

       0        // eod
};

Q_CONSTINIT const QMetaObject LockWorker::staticMetaObject = { {
    QMetaObject::SuperData::link<Auth::AuthInterface::staticMetaObject>(),
    qt_meta_stringdata_CLASSLockWorkerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSLockWorkerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSLockWorkerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LockWorker, std::true_type>,
        // method 'createAuthentication'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'destroyAuthentication'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'startAuthentication'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const AuthFlags, std::false_type>,
        // method 'endAuthentication'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const AuthFlags, std::false_type>,
        // method 'sendTokenToAuth'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const AuthType, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onEndAuthentication'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const AuthFlags, std::false_type>,
        // method 'switchToUser'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::shared_ptr<User>, std::false_type>,
        // method 'restartResetSessionTimer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onAuthFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onAuthStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'disableGlobalShortcutsForWayland'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'checkAccount'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'authFinishedAction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onNoPasswordLoginChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'sendExtraInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<AuthCommon::AuthType, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setLocked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>
    >,
    nullptr
} };

void LockWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LockWorker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->createAuthentication((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->destroyAuthentication((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->startAuthentication((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<AuthFlags>>(_a[2]))); break;
        case 3: _t->endAuthentication((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<AuthFlags>>(_a[2]))); break;
        case 4: _t->sendTokenToAuth((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<AuthType>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 5: _t->onEndAuthentication((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<AuthFlags>>(_a[2]))); break;
        case 6: _t->switchToUser((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<User>>>(_a[1]))); break;
        case 7: _t->restartResetSessionTimer(); break;
        case 8: _t->onAuthFinished(); break;
        case 9: _t->onAuthStateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 10: _t->disableGlobalShortcutsForWayland((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->checkAccount((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 12: _t->authFinishedAction(); break;
        case 13: _t->onNoPasswordLoginChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 14: _t->sendExtraInfo((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<AuthCommon::AuthType>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 15: _t->setLocked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *LockWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LockWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSLockWorkerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Auth::AuthInterface::qt_metacast(_clname);
}

int LockWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Auth::AuthInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
