/****************************************************************************
** Meta object code from reading C++ file 'ResampleDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../itk-snap-src/GUI/Qt/Windows/ResampleDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ResampleDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ResampleDialog_t {
    QByteArrayData data[9];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ResampleDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ResampleDialog_t qt_meta_stringdata_ResampleDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ResampleDialog"
QT_MOC_LITERAL(1, 15, 20), // "on_buttonBox_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 16), // "QAbstractButton*"
QT_MOC_LITERAL(4, 54, 6), // "button"
QT_MOC_LITERAL(5, 61, 25), // "on_actionSuper2_triggered"
QT_MOC_LITERAL(6, 87, 23), // "on_actionSub2_triggered"
QT_MOC_LITERAL(7, 111, 27), // "on_actionSuperIso_triggered"
QT_MOC_LITERAL(8, 139, 25) // "on_actionSubIso_triggered"

    },
    "ResampleDialog\0on_buttonBox_clicked\0"
    "\0QAbstractButton*\0button\0"
    "on_actionSuper2_triggered\0"
    "on_actionSub2_triggered\0"
    "on_actionSuperIso_triggered\0"
    "on_actionSubIso_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ResampleDialog[] = {

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
       1,    1,   39,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
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

void ResampleDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ResampleDialog *_t = static_cast<ResampleDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_buttonBox_clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 1: _t->on_actionSuper2_triggered(); break;
        case 2: _t->on_actionSub2_triggered(); break;
        case 3: _t->on_actionSuperIso_triggered(); break;
        case 4: _t->on_actionSubIso_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject ResampleDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ResampleDialog.data,
      qt_meta_data_ResampleDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ResampleDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ResampleDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ResampleDialog.stringdata0))
        return static_cast<void*>(const_cast< ResampleDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ResampleDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
