/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Differ_eq/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[260];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 17), // "on_X0_textChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 4), // "arg1"
QT_MOC_LITERAL(4, 35, 17), // "on_Y0_textChanged"
QT_MOC_LITERAL(5, 53, 16), // "on_X_textChanged"
QT_MOC_LITERAL(6, 70, 16), // "on_N_textChanged"
QT_MOC_LITERAL(7, 87, 16), // "on_euler_toggled"
QT_MOC_LITERAL(8, 104, 7), // "checked"
QT_MOC_LITERAL(9, 112, 16), // "on_exact_toggled"
QT_MOC_LITERAL(10, 129, 14), // "on_Bug_toggled"
QT_MOC_LITERAL(11, 144, 22), // "on_radio_error_toggled"
QT_MOC_LITERAL(12, 167, 17), // "on_N0_textChanged"
QT_MOC_LITERAL(13, 185, 19), // "on_Nmax_textChanged"
QT_MOC_LITERAL(14, 205, 15), // "on_FIND_clicked"
QT_MOC_LITERAL(15, 221, 20), // "on_imp_euler_toggled"
QT_MOC_LITERAL(16, 242, 17) // "on_kunkka_toggled"

    },
    "MainWindow\0on_X0_textChanged\0\0arg1\0"
    "on_Y0_textChanged\0on_X_textChanged\0"
    "on_N_textChanged\0on_euler_toggled\0"
    "checked\0on_exact_toggled\0on_Bug_toggled\0"
    "on_radio_error_toggled\0on_N0_textChanged\0"
    "on_Nmax_textChanged\0on_FIND_clicked\0"
    "on_imp_euler_toggled\0on_kunkka_toggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x08 /* Private */,
       4,    1,   82,    2, 0x08 /* Private */,
       5,    1,   85,    2, 0x08 /* Private */,
       6,    1,   88,    2, 0x08 /* Private */,
       7,    1,   91,    2, 0x08 /* Private */,
       9,    1,   94,    2, 0x08 /* Private */,
      10,    1,   97,    2, 0x08 /* Private */,
      11,    0,  100,    2, 0x08 /* Private */,
      12,    1,  101,    2, 0x08 /* Private */,
      13,    1,  104,    2, 0x08 /* Private */,
      14,    0,  107,    2, 0x08 /* Private */,
      15,    1,  108,    2, 0x08 /* Private */,
      16,    1,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_X0_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_Y0_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_X_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_N_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_euler_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_exact_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_Bug_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_radio_error_toggled(); break;
        case 8: _t->on_N0_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_Nmax_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_FIND_clicked(); break;
        case 11: _t->on_imp_euler_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->on_kunkka_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
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
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
