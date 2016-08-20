/****************************************************************************
** Meta object code from reading C++ file 'sl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SkyLadies/sl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SL_t {
    QByteArrayData data[10];
    char stringdata[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_SL_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_SL_t qt_meta_stringdata_SL = {
    {
QT_MOC_LITERAL(0, 0, 2),
QT_MOC_LITERAL(1, 3, 15),
QT_MOC_LITERAL(2, 19, 0),
QT_MOC_LITERAL(3, 20, 30),
QT_MOC_LITERAL(4, 51, 5),
QT_MOC_LITERAL(5, 57, 22),
QT_MOC_LITERAL(6, 80, 24),
QT_MOC_LITERAL(7, 105, 4),
QT_MOC_LITERAL(8, 110, 28),
QT_MOC_LITERAL(9, 139, 20)
    },
    "SL\0on_help_clicked\0\0on_tabWidget_tabCloseRequested\0"
    "index\0on_radioButton_clicked\0"
    "on_label_2_linkActivated\0link\0"
    "on_commandLinkButton_clicked\0"
    "on_Bookmarks_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SL[] = {

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
       1,    0,   44,    2, 0x08,
       3,    1,   45,    2, 0x08,
       5,    0,   48,    2, 0x08,
       6,    1,   49,    2, 0x08,
       8,    0,   52,    2, 0x08,
       9,    0,   53,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SL::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SL *_t = static_cast<SL *>(_o);
        switch (_id) {
        case 0: _t->on_help_clicked(); break;
        case 1: _t->on_tabWidget_tabCloseRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_radioButton_clicked(); break;
        //case 3: _t->on_label_2_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_commandLinkButton_clicked(); break;
        case 5: _t->on_Bookmarks_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject SL::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_SL.data,
      qt_meta_data_SL,  qt_static_metacall, 0, 0}
};


const QMetaObject *SL::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SL::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SL.stringdata))
        return static_cast<void*>(const_cast< SL*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int SL::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
