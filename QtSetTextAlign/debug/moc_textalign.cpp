/****************************************************************************
** Meta object code from reading C++ file 'textalign.h'
**
** Created: Wed Feb 29 17:08:52 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../textalign.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'textalign.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TextAlign[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      35,   10,   10,   10, 0x08,
      49,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TextAlign[] = {
    "TextAlign\0\0slotAlignment(QAction*)\0"
    "slotList(int)\0slotCursorPositionChanged()\0"
};

const QMetaObject TextAlign::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_TextAlign,
      qt_meta_data_TextAlign, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TextAlign::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TextAlign::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TextAlign::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TextAlign))
        return static_cast<void*>(const_cast< TextAlign*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int TextAlign::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotAlignment((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 1: slotList((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: slotCursorPositionChanged(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
