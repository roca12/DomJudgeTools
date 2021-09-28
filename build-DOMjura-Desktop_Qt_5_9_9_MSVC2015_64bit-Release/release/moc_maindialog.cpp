/****************************************************************************
** Meta object code from reading C++ file 'maindialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DOMjura-main/maindialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maindialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DJ__View__MainDialog_t {
    QByteArrayData data[14];
    char stringdata0[255];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DJ__View__MainDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DJ__View__MainDialog_t qt_meta_stringdata_DJ__View__MainDialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "DJ::View::MainDialog"
QT_MOC_LITERAL(1, 21, 12), // "aboutClicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 15), // "settingsClicked"
QT_MOC_LITERAL(4, 51, 14), // "connectClicked"
QT_MOC_LITERAL(5, 66, 12), // "startClicked"
QT_MOC_LITERAL(6, 79, 19), // "loadContestsClicked"
QT_MOC_LITERAL(7, 99, 22), // "on_buttonAbout_clicked"
QT_MOC_LITERAL(8, 122, 25), // "on_buttonSettings_clicked"
QT_MOC_LITERAL(9, 148, 24), // "on_buttonConnect_clicked"
QT_MOC_LITERAL(10, 173, 22), // "on_buttonStart_clicked"
QT_MOC_LITERAL(11, 196, 29), // "on_loadContestsButton_clicked"
QT_MOC_LITERAL(12, 226, 20), // "groupCheckboxClicked"
QT_MOC_LITERAL(13, 247, 7) // "checked"

    },
    "DJ::View::MainDialog\0aboutClicked\0\0"
    "settingsClicked\0connectClicked\0"
    "startClicked\0loadContestsClicked\0"
    "on_buttonAbout_clicked\0on_buttonSettings_clicked\0"
    "on_buttonConnect_clicked\0"
    "on_buttonStart_clicked\0"
    "on_loadContestsButton_clicked\0"
    "groupCheckboxClicked\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DJ__View__MainDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,
       5,    0,   72,    2, 0x06 /* Public */,
       6,    0,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    1,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,

       0        // eod
};

void DJ::View::MainDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainDialog *_t = static_cast<MainDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->aboutClicked(); break;
        case 1: _t->settingsClicked(); break;
        case 2: _t->connectClicked(); break;
        case 3: _t->startClicked(); break;
        case 4: _t->loadContestsClicked(); break;
        case 5: _t->on_buttonAbout_clicked(); break;
        case 6: _t->on_buttonSettings_clicked(); break;
        case 7: _t->on_buttonConnect_clicked(); break;
        case 8: _t->on_buttonStart_clicked(); break;
        case 9: _t->on_loadContestsButton_clicked(); break;
        case 10: _t->groupCheckboxClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MainDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainDialog::aboutClicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainDialog::settingsClicked)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MainDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainDialog::connectClicked)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MainDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainDialog::startClicked)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MainDialog::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainDialog::loadContestsClicked)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject DJ::View::MainDialog::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DJ__View__MainDialog.data,
      qt_meta_data_DJ__View__MainDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DJ::View::MainDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DJ::View::MainDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DJ__View__MainDialog.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DJ::View::MainDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void DJ::View::MainDialog::aboutClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DJ::View::MainDialog::settingsClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DJ::View::MainDialog::connectClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void DJ::View::MainDialog::startClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void DJ::View::MainDialog::loadContestsClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
