/****************************************************************************
** Meta object code from reading C++ file 'dbusmediaplayer2.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/global_util/dbus/dbusmediaplayer2.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbusmediaplayer2.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSDBusMediaPlayer2ENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSDBusMediaPlayer2ENDCLASS = QtMocHelpers::stringData(
    "DBusMediaPlayer2",
    "Seeked",
    "",
    "Position",
    "CanControlChanged",
    "CanGoNextChanged",
    "CanGoPreviousChanged",
    "CanPauseChanged",
    "CanPlayChanged",
    "CanSeekChanged",
    "LoopStatusChanged",
    "MaximumRateChanged",
    "MetadataChanged",
    "MinimumRateChanged",
    "PlaybackStatusChanged",
    "PositionChanged",
    "RateChanged",
    "ShuffleChanged",
    "VolumeChanged",
    "__propertyChanged__",
    "QDBusMessage",
    "msg",
    "Next",
    "QDBusPendingReply<>",
    "OpenUri",
    "Uri",
    "Pause",
    "Play",
    "PlayPause",
    "Previous",
    "Seek",
    "Offset",
    "SetPosition",
    "QDBusObjectPath",
    "TrackId",
    "Stop",
    "CanControl",
    "CanGoNext",
    "CanGoPrevious",
    "CanPause",
    "CanPlay",
    "CanSeek",
    "LoopStatus",
    "MaximumRate",
    "Metadata",
    "Dict",
    "MinimumRate",
    "PlaybackStatus",
    "Rate",
    "Shuffle",
    "Volume"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDBusMediaPlayer2ENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
      15,  208, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      16,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  170,    2, 0x06,   16 /* Public */,
       4,    0,  173,    2, 0x06,   18 /* Public */,
       5,    0,  174,    2, 0x06,   19 /* Public */,
       6,    0,  175,    2, 0x06,   20 /* Public */,
       7,    0,  176,    2, 0x06,   21 /* Public */,
       8,    0,  177,    2, 0x06,   22 /* Public */,
       9,    0,  178,    2, 0x06,   23 /* Public */,
      10,    0,  179,    2, 0x06,   24 /* Public */,
      11,    0,  180,    2, 0x06,   25 /* Public */,
      12,    0,  181,    2, 0x06,   26 /* Public */,
      13,    0,  182,    2, 0x06,   27 /* Public */,
      14,    0,  183,    2, 0x06,   28 /* Public */,
      15,    0,  184,    2, 0x06,   29 /* Public */,
      16,    0,  185,    2, 0x06,   30 /* Public */,
      17,    0,  186,    2, 0x06,   31 /* Public */,
      18,    0,  187,    2, 0x06,   32 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      19,    1,  188,    2, 0x08,   33 /* Private */,
      22,    0,  191,    2, 0x0a,   35 /* Public */,
      24,    1,  192,    2, 0x0a,   36 /* Public */,
      26,    0,  195,    2, 0x0a,   38 /* Public */,
      27,    0,  196,    2, 0x0a,   39 /* Public */,
      28,    0,  197,    2, 0x0a,   40 /* Public */,
      29,    0,  198,    2, 0x0a,   41 /* Public */,
      30,    1,  199,    2, 0x0a,   42 /* Public */,
      32,    2,  202,    2, 0x0a,   44 /* Public */,
      35,    0,  207,    2, 0x0a,   47 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::LongLong,    3,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 20,   21,
    0x80000000 | 23,
    0x80000000 | 23, QMetaType::QString,   25,
    0x80000000 | 23,
    0x80000000 | 23,
    0x80000000 | 23,
    0x80000000 | 23,
    0x80000000 | 23, QMetaType::LongLong,   31,
    0x80000000 | 23, 0x80000000 | 33, QMetaType::LongLong,   34,    3,
    0x80000000 | 23,

 // properties: name, type, flags, notifyId, revision
      36, QMetaType::Bool, 0x00015001, uint(1), 0,
      37, QMetaType::Bool, 0x00015001, uint(2), 0,
      38, QMetaType::Bool, 0x00015001, uint(3), 0,
      39, QMetaType::Bool, 0x00015001, uint(4), 0,
      40, QMetaType::Bool, 0x00015001, uint(5), 0,
      41, QMetaType::Bool, 0x00015001, uint(6), 0,
      42, QMetaType::QString, 0x00015103, uint(7), 0,
      43, QMetaType::Double, 0x00015001, uint(8), 0,
      44, 0x80000000 | 45, 0x00015009, uint(9), 0,
      46, QMetaType::Double, 0x00015001, uint(10), 0,
      47, QMetaType::QString, 0x00015001, uint(11), 0,
       3, QMetaType::LongLong, 0x00015001, uint(12), 0,
      48, QMetaType::Double, 0x00015103, uint(13), 0,
      49, QMetaType::Bool, 0x00015103, uint(14), 0,
      50, QMetaType::Double, 0x00015103, uint(15), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject DBusMediaPlayer2::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractInterface::staticMetaObject>(),
    qt_meta_stringdata_CLASSDBusMediaPlayer2ENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDBusMediaPlayer2ENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDBusMediaPlayer2ENDCLASS_t,
        // property 'CanControl'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'CanGoNext'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'CanGoPrevious'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'CanPause'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'CanPlay'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'CanSeek'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'LoopStatus'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'MaximumRate'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'Metadata'
        QtPrivate::TypeAndForceComplete<Dict, std::true_type>,
        // property 'MinimumRate'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'PlaybackStatus'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'Position'
        QtPrivate::TypeAndForceComplete<qlonglong, std::true_type>,
        // property 'Rate'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'Shuffle'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'Volume'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DBusMediaPlayer2, std::true_type>,
        // method 'Seeked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qlonglong, std::false_type>,
        // method 'CanControlChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'CanGoNextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'CanGoPreviousChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'CanPauseChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'CanPlayChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'CanSeekChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'LoopStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'MaximumRateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'MetadataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'MinimumRateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'PlaybackStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'PositionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ShuffleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'VolumeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '__propertyChanged__'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDBusMessage &, std::false_type>,
        // method 'Next'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        // method 'OpenUri'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'Pause'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        // method 'Play'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        // method 'PlayPause'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        // method 'Previous'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        // method 'Seek'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<qlonglong, std::false_type>,
        // method 'SetPosition'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDBusObjectPath &, std::false_type>,
        QtPrivate::TypeAndForceComplete<qlonglong, std::false_type>,
        // method 'Stop'
        QtPrivate::TypeAndForceComplete<QDBusPendingReply<>, std::false_type>
    >,
    nullptr
} };

void DBusMediaPlayer2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DBusMediaPlayer2 *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Seeked((*reinterpret_cast< std::add_pointer_t<qlonglong>>(_a[1]))); break;
        case 1: _t->CanControlChanged(); break;
        case 2: _t->CanGoNextChanged(); break;
        case 3: _t->CanGoPreviousChanged(); break;
        case 4: _t->CanPauseChanged(); break;
        case 5: _t->CanPlayChanged(); break;
        case 6: _t->CanSeekChanged(); break;
        case 7: _t->LoopStatusChanged(); break;
        case 8: _t->MaximumRateChanged(); break;
        case 9: _t->MetadataChanged(); break;
        case 10: _t->MinimumRateChanged(); break;
        case 11: _t->PlaybackStatusChanged(); break;
        case 12: _t->PositionChanged(); break;
        case 13: _t->RateChanged(); break;
        case 14: _t->ShuffleChanged(); break;
        case 15: _t->VolumeChanged(); break;
        case 16: _t->__propertyChanged__((*reinterpret_cast< std::add_pointer_t<QDBusMessage>>(_a[1]))); break;
        case 17: { QDBusPendingReply<> _r = _t->Next();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 18: { QDBusPendingReply<> _r = _t->OpenUri((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 19: { QDBusPendingReply<> _r = _t->Pause();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 20: { QDBusPendingReply<> _r = _t->Play();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 21: { QDBusPendingReply<> _r = _t->PlayPause();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 22: { QDBusPendingReply<> _r = _t->Previous();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 23: { QDBusPendingReply<> _r = _t->Seek((*reinterpret_cast< std::add_pointer_t<qlonglong>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 24: { QDBusPendingReply<> _r = _t->SetPosition((*reinterpret_cast< std::add_pointer_t<QDBusObjectPath>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qlonglong>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 25: { QDBusPendingReply<> _r = _t->Stop();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QDBusMessage >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QDBusObjectPath >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DBusMediaPlayer2::*)(qlonglong );
            if (_t _q_method = &DBusMediaPlayer2::Seeked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DBusMediaPlayer2::*)();
            if (_t _q_method = &DBusMediaPlayer2::CanControlChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DBusMediaPlayer2::*)();
            if (_t _q_method = &DBusMediaPlayer2::CanGoNextChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DBusMediaPlayer2::*)();
            if (_t _q_method = &DBusMediaPlayer2::CanGoPreviousChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DBusMediaPlayer2::*)();
            if (_t _q_method = &DBusMediaPlayer2::CanPauseChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DBusMediaPlayer2::*)();
            if (_t _q_method = &DBusMediaPlayer2::CanPlayChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DBusMediaPlayer2::*)();
            if (_t _q_method = &DBusMediaPlayer2::CanSeekChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DBusMediaPlayer2::*)();
            if (_t _q_method = &DBusMediaPlayer2::LoopStatusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (DBusMediaPlayer2::*)();
            if (_t _q_method = &DBusMediaPlayer2::MaximumRateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (DBusMediaPlayer2::*)();
            if (_t _q_method = &DBusMediaPlayer2::MetadataChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (DBusMediaPlayer2::*)();
            if (_t _q_method = &DBusMediaPlayer2::MinimumRateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (DBusMediaPlayer2::*)();
            if (_t _q_method = &DBusMediaPlayer2::PlaybackStatusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (DBusMediaPlayer2::*)();
            if (_t _q_method = &DBusMediaPlayer2::PositionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (DBusMediaPlayer2::*)();
            if (_t _q_method = &DBusMediaPlayer2::RateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (DBusMediaPlayer2::*)();
            if (_t _q_method = &DBusMediaPlayer2::ShuffleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (DBusMediaPlayer2::*)();
            if (_t _q_method = &DBusMediaPlayer2::VolumeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Dict >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DBusMediaPlayer2 *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->canControl(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->canGoNext(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->canGoPrevious(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->canPause(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->canPlay(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->canSeek(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->loopStatus(); break;
        case 7: *reinterpret_cast< double*>(_v) = _t->maximumRate(); break;
        case 8: *reinterpret_cast< Dict*>(_v) = _t->metadata(); break;
        case 9: *reinterpret_cast< double*>(_v) = _t->minimumRate(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->playbackStatus(); break;
        case 11: *reinterpret_cast< qlonglong*>(_v) = _t->position(); break;
        case 12: *reinterpret_cast< double*>(_v) = _t->rate(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->shuffle(); break;
        case 14: *reinterpret_cast< double*>(_v) = _t->volume(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DBusMediaPlayer2 *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 6: _t->setLoopStatus(*reinterpret_cast< QString*>(_v)); break;
        case 12: _t->setRate(*reinterpret_cast< double*>(_v)); break;
        case 13: _t->setShuffle(*reinterpret_cast< bool*>(_v)); break;
        case 14: _t->setVolume(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *DBusMediaPlayer2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DBusMediaPlayer2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDBusMediaPlayer2ENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int DBusMediaPlayer2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void DBusMediaPlayer2::Seeked(qlonglong _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DBusMediaPlayer2::CanControlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DBusMediaPlayer2::CanGoNextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void DBusMediaPlayer2::CanGoPreviousChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void DBusMediaPlayer2::CanPauseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void DBusMediaPlayer2::CanPlayChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void DBusMediaPlayer2::CanSeekChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void DBusMediaPlayer2::LoopStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void DBusMediaPlayer2::MaximumRateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void DBusMediaPlayer2::MetadataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void DBusMediaPlayer2::MinimumRateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void DBusMediaPlayer2::PlaybackStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void DBusMediaPlayer2::PositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void DBusMediaPlayer2::RateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void DBusMediaPlayer2::ShuffleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void DBusMediaPlayer2::VolumeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}
QT_WARNING_POP
