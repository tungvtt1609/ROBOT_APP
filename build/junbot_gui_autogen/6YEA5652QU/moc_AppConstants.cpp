/****************************************************************************
** Meta object code from reading C++ file 'AppConstants.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/AppConstants.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AppConstants.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AppEnums_t {
    QByteArrayData data[29];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppEnums_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppEnums_t qt_meta_stringdata_AppEnums = {
    {
QT_MOC_LITERAL(0, 0, 8), // "AppEnums"
QT_MOC_LITERAL(1, 9, 12), // "QRobotStatus"
QT_MOC_LITERAL(2, 22, 4), // "None"
QT_MOC_LITERAL(3, 27, 6), // "Normal"
QT_MOC_LITERAL(4, 34, 7), // "Warning"
QT_MOC_LITERAL(5, 42, 5), // "Error"
QT_MOC_LITERAL(6, 48, 11), // "QRobotColor"
QT_MOC_LITERAL(7, 60, 4), // "Blue"
QT_MOC_LITERAL(8, 65, 3), // "Red"
QT_MOC_LITERAL(9, 69, 6), // "Yellow"
QT_MOC_LITERAL(10, 76, 9), // "QLogLevel"
QT_MOC_LITERAL(11, 86, 5), // "Debug"
QT_MOC_LITERAL(12, 92, 4), // "Info"
QT_MOC_LITERAL(13, 97, 4), // "Warn"
QT_MOC_LITERAL(14, 102, 3), // "Err"
QT_MOC_LITERAL(15, 106, 5), // "Fatal"
QT_MOC_LITERAL(16, 112, 12), // "QRobotAction"
QT_MOC_LITERAL(17, 125, 6), // "UpLeft"
QT_MOC_LITERAL(18, 132, 2), // "Up"
QT_MOC_LITERAL(19, 135, 7), // "UpRight"
QT_MOC_LITERAL(20, 143, 4), // "Left"
QT_MOC_LITERAL(21, 148, 4), // "Stop"
QT_MOC_LITERAL(22, 153, 5), // "Right"
QT_MOC_LITERAL(23, 159, 8), // "DownLeft"
QT_MOC_LITERAL(24, 168, 4), // "Down"
QT_MOC_LITERAL(25, 173, 9), // "DownRight"
QT_MOC_LITERAL(26, 183, 12), // "QDisplayMode"
QT_MOC_LITERAL(27, 196, 5), // "Robot"
QT_MOC_LITERAL(28, 202, 7) // "Control"

    },
    "AppEnums\0QRobotStatus\0None\0Normal\0"
    "Warning\0Error\0QRobotColor\0Blue\0Red\0"
    "Yellow\0QLogLevel\0Debug\0Info\0Warn\0Err\0"
    "Fatal\0QRobotAction\0UpLeft\0Up\0UpRight\0"
    "Left\0Stop\0Right\0DownLeft\0Down\0DownRight\0"
    "QDisplayMode\0Robot\0Control"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppEnums[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       5,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    4,   39,
       6,    6, 0x0,    3,   47,
      10,   10, 0x0,    5,   53,
      16,   16, 0x0,    9,   63,
      26,   26, 0x0,    2,   81,

 // enum data: key, value
       2, uint(AppEnums::None),
       3, uint(AppEnums::Normal),
       4, uint(AppEnums::Warning),
       5, uint(AppEnums::Error),
       7, uint(AppEnums::Blue),
       8, uint(AppEnums::Red),
       9, uint(AppEnums::Yellow),
      11, uint(AppEnums::Debug),
      12, uint(AppEnums::Info),
      13, uint(AppEnums::Warn),
      14, uint(AppEnums::Err),
      15, uint(AppEnums::Fatal),
      17, uint(AppEnums::UpLeft),
      18, uint(AppEnums::Up),
      19, uint(AppEnums::UpRight),
      20, uint(AppEnums::Left),
      21, uint(AppEnums::Stop),
      22, uint(AppEnums::Right),
      23, uint(AppEnums::DownLeft),
      24, uint(AppEnums::Down),
      25, uint(AppEnums::DownRight),
      27, uint(AppEnums::Robot),
      28, uint(AppEnums::Control),

       0        // eod
};

void AppEnums::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AppEnums::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_AppEnums.data,
    qt_meta_data_AppEnums,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AppEnums::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppEnums::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppEnums.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AppEnums::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
