/****************************************************************************
** Meta object code from reading C++ file 'SNAPTestQt.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../itk-snap-src/Testing/GUI/Qt/SNAPTestQt.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SNAPTestQt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TestWorker_t {
    QByteArrayData data[6];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestWorker_t qt_meta_stringdata_TestWorker = {
    {
QT_MOC_LITERAL(0, 0, 10), // "TestWorker"
QT_MOC_LITERAL(1, 11, 4), // "wait"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 4), // "msec"
QT_MOC_LITERAL(4, 22, 6), // "source"
QT_MOC_LITERAL(5, 29, 10) // "script_url"

    },
    "TestWorker\0wait\0\0msec\0source\0script_url"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestWorker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void TestWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TestWorker *_t = static_cast<TestWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->wait((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 1: _t->source((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject TestWorker::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_TestWorker.data,
      qt_meta_data_TestWorker,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TestWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TestWorker.stringdata0))
        return static_cast<void*>(const_cast< TestWorker*>(this));
    return QThread::qt_metacast(_clname);
}

int TestWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_SNAPTestQt_t {
    QByteArrayData data[41];
    char stringdata0[356];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SNAPTestQt_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SNAPTestQt_t qt_meta_stringdata_SNAPTestQt = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SNAPTestQt"
QT_MOC_LITERAL(1, 11, 9), // "findChild"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 6), // "parent"
QT_MOC_LITERAL(4, 29, 5), // "child"
QT_MOC_LITERAL(5, 35, 10), // "findWidget"
QT_MOC_LITERAL(6, 46, 8), // "QWidget*"
QT_MOC_LITERAL(7, 55, 10), // "widgetName"
QT_MOC_LITERAL(8, 66, 6), // "invoke"
QT_MOC_LITERAL(9, 73, 6), // "object"
QT_MOC_LITERAL(10, 80, 4), // "slot"
QT_MOC_LITERAL(11, 85, 13), // "tableItemText"
QT_MOC_LITERAL(12, 99, 5), // "table"
QT_MOC_LITERAL(13, 105, 3), // "row"
QT_MOC_LITERAL(14, 109, 3), // "col"
QT_MOC_LITERAL(15, 113, 11), // "findItemRow"
QT_MOC_LITERAL(16, 125, 9), // "container"
QT_MOC_LITERAL(17, 135, 4), // "text"
QT_MOC_LITERAL(18, 140, 14), // "findItemColumn"
QT_MOC_LITERAL(19, 155, 5), // "print"
QT_MOC_LITERAL(20, 161, 13), // "printChildren"
QT_MOC_LITERAL(21, 175, 9), // "className"
QT_MOC_LITERAL(22, 185, 10), // "testFailed"
QT_MOC_LITERAL(23, 196, 6), // "reason"
QT_MOC_LITERAL(24, 203, 13), // "validateValue"
QT_MOC_LITERAL(25, 217, 2), // "v1"
QT_MOC_LITERAL(26, 220, 2), // "v2"
QT_MOC_LITERAL(27, 223, 18), // "validateFloatValue"
QT_MOC_LITERAL(28, 242, 9), // "precision"
QT_MOC_LITERAL(29, 252, 14), // "postMouseEvent"
QT_MOC_LITERAL(30, 267, 6), // "widget"
QT_MOC_LITERAL(31, 274, 5), // "rel_x"
QT_MOC_LITERAL(32, 280, 5), // "rel_y"
QT_MOC_LITERAL(33, 286, 9), // "eventType"
QT_MOC_LITERAL(34, 296, 6), // "button"
QT_MOC_LITERAL(35, 303, 12), // "postKeyEvent"
QT_MOC_LITERAL(36, 316, 3), // "key"
QT_MOC_LITERAL(37, 320, 5), // "sleep"
QT_MOC_LITERAL(38, 326, 9), // "milli_sec"
QT_MOC_LITERAL(39, 336, 16), // "application_exit"
QT_MOC_LITERAL(40, 353, 2) // "rc"

    },
    "SNAPTestQt\0findChild\0\0parent\0child\0"
    "findWidget\0QWidget*\0widgetName\0invoke\0"
    "object\0slot\0tableItemText\0table\0row\0"
    "col\0findItemRow\0container\0text\0"
    "findItemColumn\0print\0printChildren\0"
    "className\0testFailed\0reason\0validateValue\0"
    "v1\0v2\0validateFloatValue\0precision\0"
    "postMouseEvent\0widget\0rel_x\0rel_y\0"
    "eventType\0button\0postKeyEvent\0key\0"
    "sleep\0milli_sec\0application_exit\0rc"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SNAPTestQt[] = {

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
       1,    2,   94,    2, 0x0a /* Public */,
       5,    1,   99,    2, 0x0a /* Public */,
       8,    2,  102,    2, 0x0a /* Public */,
      11,    3,  107,    2, 0x0a /* Public */,
      15,    2,  114,    2, 0x0a /* Public */,
      18,    2,  119,    2, 0x0a /* Public */,
      19,    1,  124,    2, 0x0a /* Public */,
      20,    1,  127,    2, 0x0a /* Public */,
      20,    2,  130,    2, 0x0a /* Public */,
      22,    1,  135,    2, 0x0a /* Public */,
      24,    2,  138,    2, 0x0a /* Public */,
      27,    3,  143,    2, 0x0a /* Public */,
      29,    5,  150,    2, 0x0a /* Public */,
      35,    2,  161,    2, 0x0a /* Public */,
      37,    1,  166,    2, 0x0a /* Public */,
      39,    1,  169,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::QObjectStar, QMetaType::QObjectStar, QMetaType::QString,    3,    4,
    0x80000000 | 6, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QString,    9,   10,
    QMetaType::QVariant, QMetaType::QObjectStar, QMetaType::Int, QMetaType::Int,   12,   13,   14,
    QMetaType::QVariant, QMetaType::QObjectStar, QMetaType::QVariant,   16,   17,
    QMetaType::QVariant, QMetaType::QObjectStar, QMetaType::QVariant,   16,   17,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QObjectStar,    3,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QString,    3,   21,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::QVariant, QMetaType::QVariant,   25,   26,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,   25,   26,   28,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::Double, QMetaType::Double, QMetaType::QString, QMetaType::QString,   30,   31,   32,   33,   34,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QString,    9,   36,
    QMetaType::Void, QMetaType::Int,   38,
    QMetaType::Void, QMetaType::Int,   40,

       0        // eod
};

void SNAPTestQt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SNAPTestQt *_t = static_cast<SNAPTestQt *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QObject* _r = _t->findChild((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        case 1: { QWidget* _r = _t->findWidget((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 2: _t->invoke((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: { QVariant _r = _t->tableItemText((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 4: { QVariant _r = _t->findItemRow((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 5: { QVariant _r = _t->findItemColumn((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 6: _t->print((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->printChildren((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 8: _t->printChildren((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->testFailed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->validateValue((*reinterpret_cast< QVariant(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 11: _t->validateFloatValue((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 12: _t->postMouseEvent((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 13: _t->postKeyEvent((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 14: _t->sleep((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->application_exit((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SNAPTestQt::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SNAPTestQt.data,
      qt_meta_data_SNAPTestQt,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SNAPTestQt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SNAPTestQt::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SNAPTestQt.stringdata0))
        return static_cast<void*>(const_cast< SNAPTestQt*>(this));
    return QObject::qt_metacast(_clname);
}

int SNAPTestQt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
