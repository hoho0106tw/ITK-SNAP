/****************************************************************************
** Meta object code from reading C++ file 'DistributedSegmentationDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../itk-snap-src/GUI/Qt/Windows/DSS/DistributedSegmentationDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DistributedSegmentationDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TagComboDelegatePopupShow_t {
    QByteArrayData data[3];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TagComboDelegatePopupShow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TagComboDelegatePopupShow_t qt_meta_stringdata_TagComboDelegatePopupShow = {
    {
QT_MOC_LITERAL(0, 0, 25), // "TagComboDelegatePopupShow"
QT_MOC_LITERAL(1, 26, 9), // "showPopup"
QT_MOC_LITERAL(2, 36, 0) // ""

    },
    "TagComboDelegatePopupShow\0showPopup\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TagComboDelegatePopupShow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void TagComboDelegatePopupShow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TagComboDelegatePopupShow *_t = static_cast<TagComboDelegatePopupShow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showPopup(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TagComboDelegatePopupShow::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TagComboDelegatePopupShow.data,
      qt_meta_data_TagComboDelegatePopupShow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TagComboDelegatePopupShow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TagComboDelegatePopupShow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TagComboDelegatePopupShow.stringdata0))
        return static_cast<void*>(const_cast< TagComboDelegatePopupShow*>(this));
    return QObject::qt_metacast(_clname);
}

int TagComboDelegatePopupShow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_TagComboDelegate_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TagComboDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TagComboDelegate_t qt_meta_stringdata_TagComboDelegate = {
    {
QT_MOC_LITERAL(0, 0, 16) // "TagComboDelegate"

    },
    "TagComboDelegate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TagComboDelegate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void TagComboDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject TagComboDelegate::staticMetaObject = {
    { &QStyledItemDelegate::staticMetaObject, qt_meta_stringdata_TagComboDelegate.data,
      qt_meta_data_TagComboDelegate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TagComboDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TagComboDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TagComboDelegate.stringdata0))
        return static_cast<void*>(const_cast< TagComboDelegate*>(this));
    return QStyledItemDelegate::qt_metacast(_clname);
}

int TagComboDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_AttachmentComboDelegate_t {
    QByteArrayData data[5];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AttachmentComboDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AttachmentComboDelegate_t qt_meta_stringdata_AttachmentComboDelegate = {
    {
QT_MOC_LITERAL(0, 0, 23), // "AttachmentComboDelegate"
QT_MOC_LITERAL(1, 24, 12), // "onMenuAction"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 8), // "QAction*"
QT_MOC_LITERAL(4, 47, 6) // "action"

    },
    "AttachmentComboDelegate\0onMenuAction\0"
    "\0QAction*\0action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AttachmentComboDelegate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void AttachmentComboDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AttachmentComboDelegate *_t = static_cast<AttachmentComboDelegate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onMenuAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject AttachmentComboDelegate::staticMetaObject = {
    { &QStyledItemDelegate::staticMetaObject, qt_meta_stringdata_AttachmentComboDelegate.data,
      qt_meta_data_AttachmentComboDelegate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AttachmentComboDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AttachmentComboDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AttachmentComboDelegate.stringdata0))
        return static_cast<void*>(const_cast< AttachmentComboDelegate*>(this));
    return QStyledItemDelegate::qt_metacast(_clname);
}

int AttachmentComboDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_DistributedSegmentationDialog_t {
    QByteArrayData data[20];
    char stringdata0[417];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DistributedSegmentationDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DistributedSegmentationDialog_t qt_meta_stringdata_DistributedSegmentationDialog = {
    {
QT_MOC_LITERAL(0, 0, 29), // "DistributedSegmentationDialog"
QT_MOC_LITERAL(1, 30, 13), // "onModelUpdate"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 11), // "EventBucket"
QT_MOC_LITERAL(4, 57, 6), // "bucket"
QT_MOC_LITERAL(5, 64, 18), // "updateServerStatus"
QT_MOC_LITERAL(6, 83, 19), // "updateServiceDetail"
QT_MOC_LITERAL(7, 103, 19), // "updateTicketListing"
QT_MOC_LITERAL(8, 123, 18), // "updateTicketDetail"
QT_MOC_LITERAL(9, 142, 24), // "onTicketListRefreshTimer"
QT_MOC_LITERAL(10, 167, 28), // "onSelectedTicketRefreshTimer"
QT_MOC_LITERAL(11, 196, 22), // "on_btnGetToken_clicked"
QT_MOC_LITERAL(12, 219, 20), // "on_btnSubmit_clicked"
QT_MOC_LITERAL(13, 240, 22), // "on_btnDownload_clicked"
QT_MOC_LITERAL(14, 263, 20), // "on_btnDelete_clicked"
QT_MOC_LITERAL(15, 284, 27), // "on_btnManageServers_clicked"
QT_MOC_LITERAL(16, 312, 26), // "on_btnViewServices_clicked"
QT_MOC_LITERAL(17, 339, 23), // "on_btnResetTags_clicked"
QT_MOC_LITERAL(18, 363, 28), // "on_btnOpenDownloaded_clicked"
QT_MOC_LITERAL(19, 392, 24) // "on_btnOpenSource_clicked"

    },
    "DistributedSegmentationDialog\0"
    "onModelUpdate\0\0EventBucket\0bucket\0"
    "updateServerStatus\0updateServiceDetail\0"
    "updateTicketListing\0updateTicketDetail\0"
    "onTicketListRefreshTimer\0"
    "onSelectedTicketRefreshTimer\0"
    "on_btnGetToken_clicked\0on_btnSubmit_clicked\0"
    "on_btnDownload_clicked\0on_btnDelete_clicked\0"
    "on_btnManageServers_clicked\0"
    "on_btnViewServices_clicked\0"
    "on_btnResetTags_clicked\0"
    "on_btnOpenDownloaded_clicked\0"
    "on_btnOpenSource_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DistributedSegmentationDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x0a /* Public */,
       5,    0,   97,    2, 0x0a /* Public */,
       6,    0,   98,    2, 0x0a /* Public */,
       7,    0,   99,    2, 0x0a /* Public */,
       8,    0,  100,    2, 0x0a /* Public */,
       9,    0,  101,    2, 0x0a /* Public */,
      10,    0,  102,    2, 0x0a /* Public */,
      11,    0,  103,    2, 0x08 /* Private */,
      12,    0,  104,    2, 0x08 /* Private */,
      13,    0,  105,    2, 0x08 /* Private */,
      14,    0,  106,    2, 0x08 /* Private */,
      15,    0,  107,    2, 0x08 /* Private */,
      16,    0,  108,    2, 0x08 /* Private */,
      17,    0,  109,    2, 0x08 /* Private */,
      18,    0,  110,    2, 0x08 /* Private */,
      19,    0,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
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

       0        // eod
};

void DistributedSegmentationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DistributedSegmentationDialog *_t = static_cast<DistributedSegmentationDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onModelUpdate((*reinterpret_cast< const EventBucket(*)>(_a[1]))); break;
        case 1: _t->updateServerStatus(); break;
        case 2: _t->updateServiceDetail(); break;
        case 3: _t->updateTicketListing(); break;
        case 4: _t->updateTicketDetail(); break;
        case 5: _t->onTicketListRefreshTimer(); break;
        case 6: _t->onSelectedTicketRefreshTimer(); break;
        case 7: _t->on_btnGetToken_clicked(); break;
        case 8: _t->on_btnSubmit_clicked(); break;
        case 9: _t->on_btnDownload_clicked(); break;
        case 10: _t->on_btnDelete_clicked(); break;
        case 11: _t->on_btnManageServers_clicked(); break;
        case 12: _t->on_btnViewServices_clicked(); break;
        case 13: _t->on_btnResetTags_clicked(); break;
        case 14: _t->on_btnOpenDownloaded_clicked(); break;
        case 15: _t->on_btnOpenSource_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject DistributedSegmentationDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DistributedSegmentationDialog.data,
      qt_meta_data_DistributedSegmentationDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DistributedSegmentationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DistributedSegmentationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DistributedSegmentationDialog.stringdata0))
        return static_cast<void*>(const_cast< DistributedSegmentationDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int DistributedSegmentationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
