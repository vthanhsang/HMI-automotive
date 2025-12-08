/****************************************************************************
** Meta object code from reading C++ file 'espdata.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../App_QML/espdata.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'espdata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ESPData_t {
    QByteArrayData data[15];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ESPData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ESPData_t qt_meta_stringdata_ESPData = {
    {
QT_MOC_LITERAL(0, 0, 7), // "ESPData"
QT_MOC_LITERAL(1, 8, 11), // "tempChanged"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 12), // "humidChanged"
QT_MOC_LITERAL(4, 34, 12), // "pot32Changed"
QT_MOC_LITERAL(5, 47, 12), // "pot33Changed"
QT_MOC_LITERAL(6, 60, 12), // "pot34Changed"
QT_MOC_LITERAL(7, 73, 14), // "buttonsChanged"
QT_MOC_LITERAL(8, 88, 4), // "temp"
QT_MOC_LITERAL(9, 93, 5), // "humid"
QT_MOC_LITERAL(10, 99, 5), // "pot32"
QT_MOC_LITERAL(11, 105, 5), // "pot33"
QT_MOC_LITERAL(12, 111, 5), // "pot34"
QT_MOC_LITERAL(13, 117, 7), // "buttons"
QT_MOC_LITERAL(14, 125, 12) // "QVector<int>"

    },
    "ESPData\0tempChanged\0\0humidChanged\0"
    "pot32Changed\0pot33Changed\0pot34Changed\0"
    "buttonsChanged\0temp\0humid\0pot32\0pot33\0"
    "pot34\0buttons\0QVector<int>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ESPData[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       6,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,
       6,    0,   48,    2, 0x06 /* Public */,
       7,    0,   49,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::Float, 0x00495103,
       9, QMetaType::Float, 0x00495103,
      10, QMetaType::Float, 0x00495103,
      11, QMetaType::Float, 0x00495103,
      12, QMetaType::Float, 0x00495103,
      13, 0x80000000 | 14, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,

       0        // eod
};

void ESPData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ESPData *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tempChanged(); break;
        case 1: _t->humidChanged(); break;
        case 2: _t->pot32Changed(); break;
        case 3: _t->pot33Changed(); break;
        case 4: _t->pot34Changed(); break;
        case 5: _t->buttonsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ESPData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ESPData::tempChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ESPData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ESPData::humidChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ESPData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ESPData::pot32Changed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ESPData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ESPData::pot33Changed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ESPData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ESPData::pot34Changed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ESPData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ESPData::buttonsChanged)) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ESPData *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->getTemp(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->getHumid(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->getPot32(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->getPot33(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->getPot34(); break;
        case 5: *reinterpret_cast< QVector<int>*>(_v) = _t->getButtons(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ESPData *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTemp(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setHumid(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setPot32(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setPot33(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setPot34(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setButtons(*reinterpret_cast< QVector<int>*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ESPData::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ESPData.data,
    qt_meta_data_ESPData,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ESPData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ESPData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ESPData.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ESPData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ESPData::tempChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ESPData::humidChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ESPData::pot32Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ESPData::pot33Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ESPData::pot34Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ESPData::buttonsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
