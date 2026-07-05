/****************************************************************************
** Meta object code from reading C++ file 'dbusshutdownfrontservice.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/dde-lock/dbus/dbusshutdownfrontservice.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbusshutdownfrontservice.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSDBusShutdownFrontServiceENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSDBusShutdownFrontServiceENDCLASS = QtMocHelpers::stringData(
    "DBusShutdownFrontService",
    "D-Bus Interface",
    "org.deepin.dde.ShutdownFront1",
    "ChangKey",
    "",
    "key",
    "Visible",
    "visible",
    "Show",
    "Shutdown",
    "Restart",
    "Logout",
    "Suspend",
    "Hibernate",
    "SwitchUser",
    "Lock",
    "UpdateAndShutdown",
    "UpdateAndReboot"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDBusShutdownFrontServiceENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
      12,   16, // methods
       1,  104, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   88,    4, 0x06,    2 /* Public */,
       6,    1,   91,    4, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   94,    4, 0x0a,    6 /* Public */,
       9,    0,   95,    4, 0x0a,    7 /* Public */,
      10,    0,   96,    4, 0x0a,    8 /* Public */,
      11,    0,   97,    4, 0x0a,    9 /* Public */,
      12,    0,   98,    4, 0x0a,   10 /* Public */,
      13,    0,   99,    4, 0x0a,   11 /* Public */,
      14,    0,  100,    4, 0x0a,   12 /* Public */,
      15,    0,  101,    4, 0x0a,   13 /* Public */,
      16,    0,  102,    4, 0x0a,   14 /* Public */,
      17,    0,  103,    4, 0x0a,   15 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Bool,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
       6, QMetaType::Bool, 0x00015001, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject DBusShutdownFrontService::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractAdaptor::staticMetaObject>(),
    qt_meta_stringdata_CLASSDBusShutdownFrontServiceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDBusShutdownFrontServiceENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDBusShutdownFrontServiceENDCLASS_t,
        // property 'Visible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DBusShutdownFrontService, std::true_type>,
        // method 'ChangKey'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'Visible'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'Show'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Shutdown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Restart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Logout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Suspend'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Hibernate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SwitchUser'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Lock'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateAndShutdown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateAndReboot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void DBusShutdownFrontService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DBusShutdownFrontService *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ChangKey((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->Visible((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->Show(); break;
        case 3: _t->Shutdown(); break;
        case 4: _t->Restart(); break;
        case 5: _t->Logout(); break;
        case 6: _t->Suspend(); break;
        case 7: _t->Hibernate(); break;
        case 8: _t->SwitchUser(); break;
        case 9: _t->Lock(); break;
        case 10: _t->UpdateAndShutdown(); break;
        case 11: _t->UpdateAndReboot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DBusShutdownFrontService::*)(QString );
            if (_t _q_method = &DBusShutdownFrontService::ChangKey; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DBusShutdownFrontService::*)(bool );
            if (_t _q_method = &DBusShutdownFrontService::Visible; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DBusShutdownFrontService *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->visible(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *DBusShutdownFrontService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DBusShutdownFrontService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDBusShutdownFrontServiceENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int DBusShutdownFrontService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void DBusShutdownFrontService::ChangKey(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DBusShutdownFrontService::Visible(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
