/****************************************************************************
** Meta object code from reading C++ file 'formmenu.h'
**
** Created: Mon Dec 21 20:40:59 2015
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "formmenu.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FormMenu[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      27,    9,    9,    9, 0x08,
      60,    9,    9,    9, 0x08,
      89,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FormMenu[] = {
    "FormMenu\0\0stationChanged()\0"
    "on_pushButtonSysStatus_clicked()\0"
    "on_pushButtonAudio_clicked()\0"
    "on_pushButtonStationSet_clicked()\0"
};

const QMetaObject FormMenu::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FormMenu,
      qt_meta_data_FormMenu, 0 }
};

const QMetaObject *FormMenu::metaObject() const
{
    return &staticMetaObject;
}

void *FormMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FormMenu))
        return static_cast<void*>(const_cast< FormMenu*>(this));
    return QWidget::qt_metacast(_clname);
}

int FormMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: stationChanged(); break;
        case 1: on_pushButtonSysStatus_clicked(); break;
        case 2: on_pushButtonAudio_clicked(); break;
        case 3: on_pushButtonStationSet_clicked(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void FormMenu::stationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
