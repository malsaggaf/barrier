/****************************************************************************
** Meta object code from reading C++ file 'ZeroconfRegister.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/src/ZeroconfRegister.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ZeroconfRegister.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ZeroconfRegister_t {
    QByteArrayData data[8];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ZeroconfRegister_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ZeroconfRegister_t qt_meta_stringdata_ZeroconfRegister = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ZeroconfRegister"
QT_MOC_LITERAL(1, 17, 5), // "error"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 19), // "DNSServiceErrorType"
QT_MOC_LITERAL(4, 44, 17), // "serviceRegistered"
QT_MOC_LITERAL(5, 62, 14), // "ZeroconfRecord"
QT_MOC_LITERAL(6, 77, 6), // "record"
QT_MOC_LITERAL(7, 84, 15) // "socketReadyRead"

    },
    "ZeroconfRegister\0error\0\0DNSServiceErrorType\0"
    "serviceRegistered\0ZeroconfRecord\0"
    "record\0socketReadyRead"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ZeroconfRegister[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    1,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ZeroconfRegister::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ZeroconfRegister *_t = static_cast<ZeroconfRegister *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< DNSServiceErrorType(*)>(_a[1]))); break;
        case 1: _t->serviceRegistered((*reinterpret_cast< const ZeroconfRecord(*)>(_a[1]))); break;
        case 2: _t->socketReadyRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ZeroconfRecord >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ZeroconfRegister::*_t)(DNSServiceErrorType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ZeroconfRegister::error)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ZeroconfRegister::*_t)(const ZeroconfRecord & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ZeroconfRegister::serviceRegistered)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ZeroconfRegister::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ZeroconfRegister.data,
      qt_meta_data_ZeroconfRegister,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ZeroconfRegister::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ZeroconfRegister::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZeroconfRegister.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ZeroconfRegister::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ZeroconfRegister::error(DNSServiceErrorType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ZeroconfRegister::serviceRegistered(const ZeroconfRecord & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
