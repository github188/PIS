/****************************************************************************
** Meta object code from reading C++ file 'formstationset.h'
**
** Created: Sun Dec 6 16:51:57 2015
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "formstationset.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formstationset.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FormStationSet[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      33,   15,   15,   15, 0x08,
      62,   15,   15,   15, 0x08,
      93,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FormStationSet[] = {
    "FormStationSet\0\0stationChanged()\0"
    "on_checkBoxReverse_clicked()\0"
    "on_pushButtonStopBro_clicked()\0"
    "on_pushButtonStartBro_clicked()\0"
};

const QMetaObject FormStationSet::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FormStationSet,
      qt_meta_data_FormStationSet, 0 }
};

const QMetaObject *FormStationSet::metaObject() const
{
    return &staticMetaObject;
}

void *FormStationSet::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FormStationSet))
        return static_cast<void*>(const_cast< FormStationSet*>(this));
    return QWidget::qt_metacast(_clname);
}

int FormStationSet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: stationChanged(); break;
        case 1: on_checkBoxReverse_clicked(); break;
        case 2: on_pushButtonStopBro_clicked(); break;
        case 3: on_pushButtonStartBro_clicked(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void FormStationSet::stationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
