/****************************************************************************
** Meta object code from reading C++ file 'switchos_interface.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../switchos_interface.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'switchos_interface.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSHuaWeiSwitchOSInterfaceENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSHuaWeiSwitchOSInterfaceENDCLASS = QtMocHelpers::stringData(
    "HuaWeiSwitchOSInterface",
    "getOsFlag",
    "QDBusPendingReply<uchar>",
    "",
    "isDualOsSwitchAvail",
    "setOsFlag",
    "QDBusPendingReply<uint>",
    "flag"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSHuaWeiSwitchOSInterfaceENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    3, 0x0a,    1 /* Public */,
       4,    0,   33,    3, 0x0a,    2 /* Public */,
       5,    1,   34,    3, 0x0a,    3 /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2,
    0x80000000 | 6, QMetaType::UChar,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject HuaWeiSwitchOSInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractInterface::staticMetaObject>(),
    qt_meta_stringdata_CLASSHuaWeiSwitchOSInterfaceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSHuaWeiSwitchOSInterfaceENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSHuaWeiSwitchOSInterfaceENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<HuaWeiSwitchOSInterface, std::true_type>,
        // method 'getOsFlag'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<uchar>, std::false_type>,
        // method 'isDualOsSwitchAvail'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<uchar>, std::false_type>,
        // method 'setOsFlag'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<uint>, std::false_type>,
        QtPrivate::TypeAndForceComplete<uchar, std::false_type>
    >,
    nullptr
} };

void HuaWeiSwitchOSInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HuaWeiSwitchOSInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QDBusPendingReply<uchar> _r = _t->getOsFlag();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<uchar>*>(_a[0]) = std::move(_r); }  break;
        case 1: { QDBusPendingReply<uchar> _r = _t->isDualOsSwitchAvail();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<uchar>*>(_a[0]) = std::move(_r); }  break;
        case 2: { QDBusPendingReply<uint> _r = _t->setOsFlag((*reinterpret_cast< std::add_pointer_t<uchar>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<uint>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *HuaWeiSwitchOSInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HuaWeiSwitchOSInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSHuaWeiSwitchOSInterfaceENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int HuaWeiSwitchOSInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
