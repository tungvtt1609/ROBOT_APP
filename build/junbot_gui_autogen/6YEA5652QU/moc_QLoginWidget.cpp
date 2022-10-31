/****************************************************************************
** Meta object code from reading C++ file 'QLoginWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/QLoginWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QLoginWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QLoginWidget_t {
    QByteArrayData data[11];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QLoginWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QLoginWidget_t qt_meta_stringdata_QLoginWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QLoginWidget"
QT_MOC_LITERAL(1, 13, 12), // "signalRotate"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 19), // "on_btnLogin_clicked"
QT_MOC_LITERAL(4, 47, 20), // "SltAnimationFinished"
QT_MOC_LITERAL(5, 68, 15), // "SltEditFinished"
QT_MOC_LITERAL(6, 84, 28), // "on_checkBoxAutoLogin_clicked"
QT_MOC_LITERAL(7, 113, 7), // "checked"
QT_MOC_LITERAL(8, 121, 13), // "slot_autoLoad"
QT_MOC_LITERAL(9, 135, 15), // "slot_ShowWindow"
QT_MOC_LITERAL(10, 151, 18) // "slot_writeSettings"

    },
    "QLoginWidget\0signalRotate\0\0"
    "on_btnLogin_clicked\0SltAnimationFinished\0"
    "SltEditFinished\0on_checkBoxAutoLogin_clicked\0"
    "checked\0slot_autoLoad\0slot_ShowWindow\0"
    "slot_writeSettings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QLoginWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    1,   58,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QLoginWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QLoginWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalRotate(); break;
        case 1: _t->on_btnLogin_clicked(); break;
        case 2: _t->SltAnimationFinished(); break;
        case 3: _t->SltEditFinished(); break;
        case 4: _t->on_checkBoxAutoLogin_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->slot_autoLoad(); break;
        case 6: _t->slot_ShowWindow(); break;
        case 7: _t->slot_writeSettings(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QLoginWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QLoginWidget::signalRotate)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QLoginWidget::staticMetaObject = { {
    &QCustomMoveWidget::staticMetaObject,
    qt_meta_stringdata_QLoginWidget.data,
    qt_meta_data_QLoginWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QLoginWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QLoginWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QLoginWidget.stringdata0))
        return static_cast<void*>(this);
    return QCustomMoveWidget::qt_metacast(_clname);
}

int QLoginWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCustomMoveWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QLoginWidget::signalRotate()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
