/****************************************************************************
** Meta object code from reading C++ file 'SnakeParameterDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../itk-snap-src/GUI/Qt/Windows/SnakeParameterDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SnakeParameterDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SnakeParameterDialog_t {
    QByteArrayData data[9];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SnakeParameterDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SnakeParameterDialog_t qt_meta_stringdata_SnakeParameterDialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "SnakeParameterDialog"
QT_MOC_LITERAL(1, 21, 13), // "onModelUpdate"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 11), // "EventBucket"
QT_MOC_LITERAL(4, 48, 6), // "bucket"
QT_MOC_LITERAL(5, 55, 16), // "onAnimationTimer"
QT_MOC_LITERAL(6, 72, 21), // "on_btnRestore_clicked"
QT_MOC_LITERAL(7, 94, 18), // "on_btnOpen_clicked"
QT_MOC_LITERAL(8, 113, 18) // "on_btnSave_clicked"

    },
    "SnakeParameterDialog\0onModelUpdate\0\0"
    "EventBucket\0bucket\0onAnimationTimer\0"
    "on_btnRestore_clicked\0on_btnOpen_clicked\0"
    "on_btnSave_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SnakeParameterDialog[] = {

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
       1,    1,   39,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x08 /* Private */,
       7,    0,   44,    2, 0x08 /* Private */,
       8,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SnakeParameterDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SnakeParameterDialog *_t = static_cast<SnakeParameterDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onModelUpdate((*reinterpret_cast< const EventBucket(*)>(_a[1]))); break;
        case 1: _t->onAnimationTimer(); break;
        case 2: _t->on_btnRestore_clicked(); break;
        case 3: _t->on_btnOpen_clicked(); break;
        case 4: _t->on_btnSave_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject SnakeParameterDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SnakeParameterDialog.data,
      qt_meta_data_SnakeParameterDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SnakeParameterDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SnakeParameterDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SnakeParameterDialog.stringdata0))
        return static_cast<void*>(const_cast< SnakeParameterDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SnakeParameterDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
