/****************************************************************************
** Meta object code from reading C++ file 'drawmainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../drawmainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'drawmainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_drawMainWindow_t {
    QByteArrayData data[7];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_drawMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_drawMainWindow_t qt_meta_stringdata_drawMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 14), // "drawMainWindow"
QT_MOC_LITERAL(1, 15, 18), // "readDataDialogSlot"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 17), // "testComDialogSlot"
QT_MOC_LITERAL(4, 53, 20), // "showReadFileInfoSlot"
QT_MOC_LITERAL(5, 74, 29), // "receiveReadSignalFileNameSlot"
QT_MOC_LITERAL(6, 104, 20) // "showQuanjuStringSlot"

    },
    "drawMainWindow\0readDataDialogSlot\0\0"
    "testComDialogSlot\0showReadFileInfoSlot\0"
    "receiveReadSignalFileNameSlot\0"
    "showQuanjuStringSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_drawMainWindow[] = {

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
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    1,   42,    2, 0x08 /* Private */,
       6,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void drawMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        drawMainWindow *_t = static_cast<drawMainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readDataDialogSlot(); break;
        case 1: _t->testComDialogSlot(); break;
        case 2: _t->showReadFileInfoSlot(); break;
        case 3: _t->receiveReadSignalFileNameSlot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->showQuanjuStringSlot(); break;
        default: ;
        }
    }
}

const QMetaObject drawMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_drawMainWindow.data,
      qt_meta_data_drawMainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *drawMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *drawMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_drawMainWindow.stringdata0))
        return static_cast<void*>(const_cast< drawMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int drawMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
