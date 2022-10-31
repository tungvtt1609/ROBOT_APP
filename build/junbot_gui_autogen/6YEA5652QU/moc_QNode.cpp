/****************************************************************************
** Meta object code from reading C++ file 'QNode.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/QNode.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QNode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QNode_t {
    QByteArrayData data[27];
    char stringdata0[286];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNode_t qt_meta_stringdata_QNode = {
    {
QT_MOC_LITERAL(0, 0, 5), // "QNode"
QT_MOC_LITERAL(1, 6, 14), // "loggingUpdated"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 11), // "rosShutdown"
QT_MOC_LITERAL(4, 34, 7), // "speed_x"
QT_MOC_LITERAL(5, 42, 1), // "x"
QT_MOC_LITERAL(6, 44, 7), // "speed_y"
QT_MOC_LITERAL(7, 52, 1), // "y"
QT_MOC_LITERAL(8, 54, 12), // "batteryState"
QT_MOC_LITERAL(9, 67, 25), // "sensor_msgs::BatteryState"
QT_MOC_LITERAL(10, 93, 15), // "Master_shutdown"
QT_MOC_LITERAL(11, 109, 10), // "Show_image"
QT_MOC_LITERAL(12, 120, 14), // "updateRoboPose"
QT_MOC_LITERAL(13, 135, 10), // "QRobotPose"
QT_MOC_LITERAL(14, 146, 3), // "pos"
QT_MOC_LITERAL(15, 150, 9), // "updateMap"
QT_MOC_LITERAL(16, 160, 3), // "map"
QT_MOC_LITERAL(17, 164, 11), // "plannerPath"
QT_MOC_LITERAL(18, 176, 4), // "path"
QT_MOC_LITERAL(19, 181, 15), // "updateLaserScan"
QT_MOC_LITERAL(20, 197, 6), // "points"
QT_MOC_LITERAL(21, 204, 17), // "updateRobotStatus"
QT_MOC_LITERAL(22, 222, 22), // "AppEnums::QRobotStatus"
QT_MOC_LITERAL(23, 245, 6), // "status"
QT_MOC_LITERAL(24, 252, 13), // "slot_pub2DPos"
QT_MOC_LITERAL(25, 266, 4), // "pose"
QT_MOC_LITERAL(26, 271, 14) // "slot_pub2DGoal"

    },
    "QNode\0loggingUpdated\0\0rosShutdown\0"
    "speed_x\0x\0speed_y\0y\0batteryState\0"
    "sensor_msgs::BatteryState\0Master_shutdown\0"
    "Show_image\0updateRoboPose\0QRobotPose\0"
    "pos\0updateMap\0map\0plannerPath\0path\0"
    "updateLaserScan\0points\0updateRobotStatus\0"
    "AppEnums::QRobotStatus\0status\0"
    "slot_pub2DPos\0pose\0slot_pub2DGoal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNode[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    0,   85,    2, 0x06 /* Public */,
       4,    1,   86,    2, 0x06 /* Public */,
       6,    1,   89,    2, 0x06 /* Public */,
       8,    1,   92,    2, 0x06 /* Public */,
      10,    0,   95,    2, 0x06 /* Public */,
      11,    2,   96,    2, 0x06 /* Public */,
      12,    1,  101,    2, 0x06 /* Public */,
      15,    1,  104,    2, 0x06 /* Public */,
      17,    1,  107,    2, 0x06 /* Public */,
      19,    1,  110,    2, 0x06 /* Public */,
      21,    1,  113,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      24,    1,  116,    2, 0x0a /* Public */,
      26,    1,  119,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QImage,    2,    2,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::QImage,   16,
    QMetaType::Void, QMetaType::QPolygonF,   18,
    QMetaType::Void, QMetaType::QPolygonF,   20,
    QMetaType::Void, 0x80000000 | 22,   23,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 13,   25,
    QMetaType::Void, 0x80000000 | 13,   25,

       0        // eod
};

void QNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QNode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loggingUpdated(); break;
        case 1: _t->rosShutdown(); break;
        case 2: _t->speed_x((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->speed_y((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->batteryState((*reinterpret_cast< sensor_msgs::BatteryState(*)>(_a[1]))); break;
        case 5: _t->Master_shutdown(); break;
        case 6: _t->Show_image((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QImage(*)>(_a[2]))); break;
        case 7: _t->updateRoboPose((*reinterpret_cast< QRobotPose(*)>(_a[1]))); break;
        case 8: _t->updateMap((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 9: _t->plannerPath((*reinterpret_cast< QPolygonF(*)>(_a[1]))); break;
        case 10: _t->updateLaserScan((*reinterpret_cast< QPolygonF(*)>(_a[1]))); break;
        case 11: _t->updateRobotStatus((*reinterpret_cast< AppEnums::QRobotStatus(*)>(_a[1]))); break;
        case 12: _t->slot_pub2DPos((*reinterpret_cast< QRobotPose(*)>(_a[1]))); break;
        case 13: _t->slot_pub2DGoal((*reinterpret_cast< QRobotPose(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QNode::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::loggingUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QNode::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::rosShutdown)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QNode::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::speed_x)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QNode::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::speed_y)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QNode::*)(sensor_msgs::BatteryState );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::batteryState)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QNode::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::Master_shutdown)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QNode::*)(int , QImage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::Show_image)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QNode::*)(QRobotPose );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::updateRoboPose)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QNode::*)(QImage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::updateMap)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QNode::*)(QPolygonF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::plannerPath)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (QNode::*)(QPolygonF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::updateLaserScan)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (QNode::*)(AppEnums::QRobotStatus );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::updateRobotStatus)) {
                *result = 11;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QNode::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_QNode.data,
    qt_meta_data_QNode,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QNode.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int QNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void QNode::loggingUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QNode::rosShutdown()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QNode::speed_x(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QNode::speed_y(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QNode::batteryState(sensor_msgs::BatteryState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QNode::Master_shutdown()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QNode::Show_image(int _t1, QImage _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QNode::updateRoboPose(QRobotPose _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QNode::updateMap(QImage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QNode::plannerPath(QPolygonF _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QNode::updateLaserScan(QPolygonF _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QNode::updateRobotStatus(AppEnums::QRobotStatus _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
