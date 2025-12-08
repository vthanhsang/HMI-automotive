/****************************************************************************
** Meta object code from reading C++ file 'serialmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../App_QML/serialmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serialmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SerialManager_t {
    QByteArrayData data[16];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SerialManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SerialManager_t qt_meta_stringdata_SerialManager = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SerialManager"
QT_MOC_LITERAL(1, 14, 12), // "receivedData"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 4), // "data"
QT_MOC_LITERAL(4, 33, 14), // "espDataUpdated"
QT_MOC_LITERAL(5, 48, 13), // "themeReceived"
QT_MOC_LITERAL(6, 62, 5), // "theme"
QT_MOC_LITERAL(7, 68, 16), // "languageReceived"
QT_MOC_LITERAL(8, 85, 4), // "lang"
QT_MOC_LITERAL(9, 90, 8), // "readData"
QT_MOC_LITERAL(10, 99, 8), // "sendData"
QT_MOC_LITERAL(11, 108, 14), // "sendSongNumber"
QT_MOC_LITERAL(12, 123, 3), // "num"
QT_MOC_LITERAL(13, 127, 11), // "sendCommand"
QT_MOC_LITERAL(14, 139, 3), // "cmd"
QT_MOC_LITERAL(15, 143, 15) // "requestSettings"

    },
    "SerialManager\0receivedData\0\0data\0"
    "espDataUpdated\0themeReceived\0theme\0"
    "languageReceived\0lang\0readData\0sendData\0"
    "sendSongNumber\0num\0sendCommand\0cmd\0"
    "requestSettings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SerialManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    0,   62,    2, 0x06 /* Public */,
       5,    1,   63,    2, 0x06 /* Public */,
       7,    1,   66,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   69,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      10,    1,   70,    2, 0x02 /* Public */,
      11,    1,   73,    2, 0x02 /* Public */,
      13,    1,   76,    2, 0x02 /* Public */,
      15,    0,   79,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,

       0        // eod
};

void SerialManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SerialManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receivedData((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->espDataUpdated(); break;
        case 2: _t->themeReceived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->languageReceived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->readData(); break;
        case 5: _t->sendData((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->sendSongNumber((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->sendCommand((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->requestSettings(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SerialManager::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialManager::receivedData)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SerialManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialManager::espDataUpdated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SerialManager::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialManager::themeReceived)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SerialManager::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SerialManager::languageReceived)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SerialManager::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_SerialManager.data,
    qt_meta_data_SerialManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SerialManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SerialManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SerialManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void SerialManager::receivedData(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SerialManager::espDataUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SerialManager::themeReceived(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SerialManager::languageReceived(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
