/****************************************************************************
** Meta object code from reading C++ file 'mywebkit.h'
**
** Created: Sun Mar 4 11:10:07 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mywebkit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mywebkit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MyWebKit[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      24,    9,    9,    9, 0x08,
      42,    9,    9,    9, 0x08,
      65,    9,    9,    9, 0x08,
      87,    9,    9,    9, 0x08,
     108,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MyWebKit[] = {
    "MyWebKit\0\0slotLoadUrl()\0slotLoadStarted()\0"
    "slotLoadFinished(bool)\0slotLoadProgress(int)\0"
    "slotUrlChanged(QUrl)\0slotLinkClicked(QUrl)\0"
};

const QMetaObject MyWebKit::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MyWebKit,
      qt_meta_data_MyWebKit, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MyWebKit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MyWebKit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MyWebKit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MyWebKit))
        return static_cast<void*>(const_cast< MyWebKit*>(this));
    return QWidget::qt_metacast(_clname);
}

int MyWebKit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotLoadUrl(); break;
        case 1: slotLoadStarted(); break;
        case 2: slotLoadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: slotLoadProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: slotUrlChanged((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 5: slotLinkClicked((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
