/****************************************************************************
** Meta object code from reading C++ file 'DropActionDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../itk-snap-src/GUI/Qt/Windows/DropActionDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DropActionDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DropActionDialog_t {
    QByteArrayData data[10];
    char stringdata0[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DropActionDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DropActionDialog_t qt_meta_stringdata_DropActionDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "DropActionDialog"
QT_MOC_LITERAL(1, 17, 22), // "on_btnLoadMain_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 30), // "on_btnLoadSegmentation_clicked"
QT_MOC_LITERAL(4, 72, 25), // "on_btnLoadOverlay_clicked"
QT_MOC_LITERAL(5, 98, 21), // "on_btnLoadNew_clicked"
QT_MOC_LITERAL(6, 120, 10), // "LoadCommon"
QT_MOC_LITERAL(7, 131, 26), // "AbstractLoadImageDelegate*"
QT_MOC_LITERAL(8, 158, 8), // "delegate"
QT_MOC_LITERAL(9, 167, 40) // "on_btnLoadAdditionalSegmentat..."

    },
    "DropActionDialog\0on_btnLoadMain_clicked\0"
    "\0on_btnLoadSegmentation_clicked\0"
    "on_btnLoadOverlay_clicked\0"
    "on_btnLoadNew_clicked\0LoadCommon\0"
    "AbstractLoadImageDelegate*\0delegate\0"
    "on_btnLoadAdditionalSegmentation_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DropActionDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    1,   48,    2, 0x08 /* Private */,
       9,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,

       0        // eod
};

void DropActionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DropActionDialog *_t = static_cast<DropActionDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnLoadMain_clicked(); break;
        case 1: _t->on_btnLoadSegmentation_clicked(); break;
        case 2: _t->on_btnLoadOverlay_clicked(); break;
        case 3: _t->on_btnLoadNew_clicked(); break;
        case 4: _t->LoadCommon((*reinterpret_cast< AbstractLoadImageDelegate*(*)>(_a[1]))); break;
        case 5: _t->on_btnLoadAdditionalSegmentation_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject DropActionDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DropActionDialog.data,
      qt_meta_data_DropActionDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DropActionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DropActionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DropActionDialog.stringdata0))
        return static_cast<void*>(const_cast< DropActionDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int DropActionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_END_MOC_NAMESPACE
