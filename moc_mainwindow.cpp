/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[15];
    char stringdata0[273];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 24), // "on_getPathButton_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 19), // "on_needDate_clicked"
QT_MOC_LITERAL(4, 57, 7), // "checked"
QT_MOC_LITERAL(5, 65, 19), // "on_needTime_clicked"
QT_MOC_LITERAL(6, 85, 14), // "getNewFileName"
QT_MOC_LITERAL(7, 100, 9), // "selectOne"
QT_MOC_LITERAL(8, 110, 11), // "listFileNow"
QT_MOC_LITERAL(9, 122, 3), // "dir"
QT_MOC_LITERAL(10, 126, 23), // "on_needNumber_2_clicked"
QT_MOC_LITERAL(11, 150, 31), // "on_needOriginalFileName_clicked"
QT_MOC_LITERAL(12, 182, 30), // "on_needFirstCustomText_clicked"
QT_MOC_LITERAL(13, 213, 31), // "on_needSecondCustomText_clicked"
QT_MOC_LITERAL(14, 245, 27) // "on_reNameFileButton_clicked"

    },
    "MainWindow\0on_getPathButton_clicked\0"
    "\0on_needDate_clicked\0checked\0"
    "on_needTime_clicked\0getNewFileName\0"
    "selectOne\0listFileNow\0dir\0"
    "on_needNumber_2_clicked\0"
    "on_needOriginalFileName_clicked\0"
    "on_needFirstCustomText_clicked\0"
    "on_needSecondCustomText_clicked\0"
    "on_reNameFileButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    1,   65,    2, 0x08 /* Private */,
       5,    1,   68,    2, 0x08 /* Private */,
       6,    1,   71,    2, 0x08 /* Private */,
       8,    1,   74,    2, 0x08 /* Private */,
      10,    1,   77,    2, 0x08 /* Private */,
      11,    1,   80,    2, 0x08 /* Private */,
      12,    1,   83,    2, 0x08 /* Private */,
      13,    1,   86,    2, 0x08 /* Private */,
      14,    0,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::QString, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_getPathButton_clicked(); break;
        case 1: _t->on_needDate_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_needTime_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: { QString _r = _t->getNewFileName((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->listFileNow((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->on_needNumber_2_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_needOriginalFileName_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_needFirstCustomText_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_needSecondCustomText_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_reNameFileButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE