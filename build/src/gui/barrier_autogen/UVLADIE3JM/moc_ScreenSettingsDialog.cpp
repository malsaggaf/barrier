/****************************************************************************
** Meta object code from reading C++ file 'ScreenSettingsDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/src/ScreenSettingsDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ScreenSettingsDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScreenSettingsDialog_t {
    QByteArrayData data[8];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScreenSettingsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScreenSettingsDialog_t qt_meta_stringdata_ScreenSettingsDialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ScreenSettingsDialog"
QT_MOC_LITERAL(1, 21, 6), // "accept"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 28), // "on_m_pButtonAddAlias_clicked"
QT_MOC_LITERAL(4, 58, 31), // "on_m_pButtonRemoveAlias_clicked"
QT_MOC_LITERAL(5, 90, 31), // "on_m_pLineEditAlias_textChanged"
QT_MOC_LITERAL(6, 122, 4), // "text"
QT_MOC_LITERAL(7, 127, 38) // "on_m_pListAliases_itemSelecti..."

    },
    "ScreenSettingsDialog\0accept\0\0"
    "on_m_pButtonAddAlias_clicked\0"
    "on_m_pButtonRemoveAlias_clicked\0"
    "on_m_pLineEditAlias_textChanged\0text\0"
    "on_m_pListAliases_itemSelectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScreenSettingsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    1,   42,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

       0        // eod
};

void ScreenSettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScreenSettingsDialog *_t = static_cast<ScreenSettingsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->on_m_pButtonAddAlias_clicked(); break;
        case 2: _t->on_m_pButtonRemoveAlias_clicked(); break;
        case 3: _t->on_m_pLineEditAlias_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_m_pListAliases_itemSelectionChanged(); break;
        default: ;
        }
    }
}

const QMetaObject ScreenSettingsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ScreenSettingsDialog.data,
      qt_meta_data_ScreenSettingsDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ScreenSettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScreenSettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScreenSettingsDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::ScreenSettingsDialogBase"))
        return static_cast< Ui::ScreenSettingsDialogBase*>(this);
    return QDialog::qt_metacast(_clname);
}

int ScreenSettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
