/****************************************************************************
** Meta object code from reading C++ file 'qeasymotionplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qeasymotionplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qeasymotionplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEasyMotion__Internal__QEasyMotionPlugin_t {
    QByteArrayData data[3];
    char stringdata[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QEasyMotion__Internal__QEasyMotionPlugin_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QEasyMotion__Internal__QEasyMotionPlugin_t qt_meta_stringdata_QEasyMotion__Internal__QEasyMotionPlugin = {
    {
QT_MOC_LITERAL(0, 0, 40),
QT_MOC_LITERAL(1, 41, 13),
QT_MOC_LITERAL(2, 55, 0)
    },
    "QEasyMotion::Internal::QEasyMotionPlugin\0"
    "triggerAction\0\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEasyMotion__Internal__QEasyMotionPlugin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QEasyMotion::Internal::QEasyMotionPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEasyMotionPlugin *_t = static_cast<QEasyMotionPlugin *>(_o);
        switch (_id) {
        case 0: _t->triggerAction(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QEasyMotion::Internal::QEasyMotionPlugin::staticMetaObject = {
    { &ExtensionSystem::IPlugin::staticMetaObject, qt_meta_stringdata_QEasyMotion__Internal__QEasyMotionPlugin.data,
      qt_meta_data_QEasyMotion__Internal__QEasyMotionPlugin,  qt_static_metacall, 0, 0}
};


const QMetaObject *QEasyMotion::Internal::QEasyMotionPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEasyMotion::Internal::QEasyMotionPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QEasyMotion__Internal__QEasyMotionPlugin.stringdata))
        return static_cast<void*>(const_cast< QEasyMotionPlugin*>(this));
    return ExtensionSystem::IPlugin::qt_metacast(_clname);
}

int QEasyMotion::Internal::QEasyMotionPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ExtensionSystem::IPlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    0x71, 0x62, 0x6a, 0x73, 0x01, 0x00, 0x00, 0x00,
    0x34, 0x01, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x20, 0x01, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 0x49, 0x49, 0x44, 0x00, 0x00, 0x00,
    0x21, 0x00, 0x6f, 0x72, 0x67, 0x2e, 0x71, 0x74,
    0x2d, 0x70, 0x72, 0x6f, 0x6a, 0x65, 0x63, 0x74,
    0x2e, 0x51, 0x74, 0x2e, 0x51, 0x74, 0x43, 0x72,
    0x65, 0x61, 0x74, 0x6f, 0x72, 0x50, 0x6c, 0x75,
    0x67, 0x69, 0x6e, 0x00, 0x9b, 0x09, 0x00, 0x00,
    0x09, 0x00, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x4e,
    0x61, 0x6d, 0x65, 0x00, 0x11, 0x00, 0x51, 0x45,
    0x61, 0x73, 0x79, 0x4d, 0x6f, 0x74, 0x69, 0x6f,
    0x6e, 0x50, 0x6c, 0x75, 0x67, 0x69, 0x6e, 0x00,
    0x3a, 0x20, 0xa0, 0x00, 0x07, 0x00, 0x76, 0x65,
    0x72, 0x73, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0x05, 0x00, 0x64, 0x65,
    0x62, 0x75, 0x67, 0x00, 0x95, 0x11, 0x00, 0x00,
    0x08, 0x00, 0x4d, 0x65, 0x74, 0x61, 0x44, 0x61,
    0x74, 0x61, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00,
    0x07, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x06, 0x00, 0x56, 0x65,
    0x6e, 0x64, 0x6f, 0x72, 0x0b, 0x00, 0x58, 0x69,
    0x61, 0x6f, 0x66, 0x65, 0x6e, 0x67, 0x5f, 0x57,
    0x75, 0x00, 0x00, 0x00, 0x9b, 0x07, 0x00, 0x00,
    0x0b, 0x00, 0x44, 0x65, 0x73, 0x63, 0x72, 0x69,
    0x70, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00,
    0x20, 0x00, 0x45, 0x61, 0x73, 0x79, 0x4d, 0x6f,
    0x74, 0x69, 0x6f, 0x6e, 0x20, 0x70, 0x6c, 0x75,
    0x67, 0x69, 0x6e, 0x20, 0x66, 0x6f, 0x72, 0x20,
    0x51, 0x74, 0x20, 0x43, 0x72, 0x65, 0x61, 0x74,
    0x6f, 0x72, 0x00, 0x00, 0x9b, 0x0d, 0x00, 0x00,
    0x03, 0x00, 0x55, 0x72, 0x6c, 0x00, 0x00, 0x00,
    0x19, 0x00, 0x68, 0x74, 0x74, 0x70, 0x3a, 0x2f,
    0x2f, 0x77, 0x77, 0x77, 0x2e, 0x78, 0x69, 0x61,
    0x6f, 0x66, 0x65, 0x6e, 0x67, 0x77, 0x75, 0x2e,
    0x63, 0x6f, 0x6d, 0x00, 0x28, 0x00, 0x00, 0x00,
    0x60, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00,
    0x3c, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00,
    0x60, 0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    0x71, 0x62, 0x6a, 0x73, 0x01, 0x00, 0x00, 0x00,
    0x34, 0x01, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x20, 0x01, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 0x49, 0x49, 0x44, 0x00, 0x00, 0x00,
    0x21, 0x00, 0x6f, 0x72, 0x67, 0x2e, 0x71, 0x74,
    0x2d, 0x70, 0x72, 0x6f, 0x6a, 0x65, 0x63, 0x74,
    0x2e, 0x51, 0x74, 0x2e, 0x51, 0x74, 0x43, 0x72,
    0x65, 0x61, 0x74, 0x6f, 0x72, 0x50, 0x6c, 0x75,
    0x67, 0x69, 0x6e, 0x00, 0x95, 0x09, 0x00, 0x00,
    0x08, 0x00, 0x4d, 0x65, 0x74, 0x61, 0x44, 0x61,
    0x74, 0x61, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00,
    0x07, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00,
    0x1b, 0x03, 0x00, 0x00, 0x06, 0x00, 0x56, 0x65,
    0x6e, 0x64, 0x6f, 0x72, 0x0b, 0x00, 0x58, 0x69,
    0x61, 0x6f, 0x66, 0x65, 0x6e, 0x67, 0x5f, 0x57,
    0x75, 0x00, 0x00, 0x00, 0x9b, 0x07, 0x00, 0x00,
    0x0b, 0x00, 0x44, 0x65, 0x73, 0x63, 0x72, 0x69,
    0x70, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00,
    0x20, 0x00, 0x45, 0x61, 0x73, 0x79, 0x4d, 0x6f,
    0x74, 0x69, 0x6f, 0x6e, 0x20, 0x70, 0x6c, 0x75,
    0x67, 0x69, 0x6e, 0x20, 0x66, 0x6f, 0x72, 0x20,
    0x51, 0x74, 0x20, 0x43, 0x72, 0x65, 0x61, 0x74,
    0x6f, 0x72, 0x00, 0x00, 0x9b, 0x0d, 0x00, 0x00,
    0x03, 0x00, 0x55, 0x72, 0x6c, 0x00, 0x00, 0x00,
    0x19, 0x00, 0x68, 0x74, 0x74, 0x70, 0x3a, 0x2f,
    0x2f, 0x77, 0x77, 0x77, 0x2e, 0x78, 0x69, 0x61,
    0x6f, 0x66, 0x65, 0x6e, 0x67, 0x77, 0x75, 0x2e,
    0x63, 0x6f, 0x6d, 0x00, 0x28, 0x00, 0x00, 0x00,
    0x60, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x1b, 0x1e, 0x00, 0x00, 0x09, 0x00, 0x63, 0x6c,
    0x61, 0x73, 0x73, 0x4e, 0x61, 0x6d, 0x65, 0x00,
    0x11, 0x00, 0x51, 0x45, 0x61, 0x73, 0x79, 0x4d,
    0x6f, 0x74, 0x69, 0x6f, 0x6e, 0x50, 0x6c, 0x75,
    0x67, 0x69, 0x6e, 0x00, 0x31, 0x00, 0x00, 0x00,
    0x05, 0x00, 0x64, 0x65, 0x62, 0x75, 0x67, 0x00,
    0x3a, 0x20, 0xa0, 0x00, 0x07, 0x00, 0x76, 0x65,
    0x72, 0x73, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00,
    0xe0, 0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00,
    0x10, 0x01, 0x00, 0x00
};
#endif // QT_NO_DEBUG

using namespace QEasyMotion;
using namespace QEasyMotion::Internal;
QT_MOC_EXPORT_PLUGIN(QEasyMotion::Internal::QEasyMotionPlugin, QEasyMotionPlugin)

QT_END_MOC_NAMESPACE
