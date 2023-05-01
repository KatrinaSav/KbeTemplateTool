/****************************************************************************
** Meta object code from reading C++ file 'extendedtabwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../sources/kbe/extendedtabwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'extendedtabwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ExtendedTabWidget_t {
    QByteArrayData data[13];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExtendedTabWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExtendedTabWidget_t qt_meta_stringdata_ExtendedTabWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ExtendedTabWidget"
QT_MOC_LITERAL(1, 18, 14), // "tabBeforeClose"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 8), // "QWidget*"
QT_MOC_LITERAL(4, 43, 1), // "w"
QT_MOC_LITERAL(5, 45, 10), // "tabsUpdate"
QT_MOC_LITERAL(6, 56, 21), // "onCloseOtherDocuments"
QT_MOC_LITERAL(7, 78, 19), // "onCloseAllDocuments"
QT_MOC_LITERAL(8, 98, 7), // "onClose"
QT_MOC_LITERAL(9, 106, 5), // "index"
QT_MOC_LITERAL(10, 112, 12), // "addSubWindow"
QT_MOC_LITERAL(11, 125, 16), // "EditorInterface*"
QT_MOC_LITERAL(12, 142, 6) // "window"

    },
    "ExtendedTabWidget\0tabBeforeClose\0\0"
    "QWidget*\0w\0tabsUpdate\0onCloseOtherDocuments\0"
    "onCloseAllDocuments\0onClose\0index\0"
    "addSubWindow\0EditorInterface*\0window"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExtendedTabWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   53,    2, 0x0a /* Public */,
       7,    0,   54,    2, 0x0a /* Public */,
       8,    1,   55,    2, 0x0a /* Public */,
       8,    0,   58,    2, 0x2a /* Public | MethodCloned */,
      10,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Bool, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Int, 0x80000000 | 11,   12,

       0        // eod
};

void ExtendedTabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ExtendedTabWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->tabBeforeClose((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->tabsUpdate(); break;
        case 2: _t->onCloseOtherDocuments(); break;
        case 3: _t->onCloseAllDocuments(); break;
        case 4: _t->onClose((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->onClose(); break;
        case 6: { int _r = _t->addSubWindow((*reinterpret_cast< EditorInterface*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = bool (ExtendedTabWidget::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExtendedTabWidget::tabBeforeClose)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ExtendedTabWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExtendedTabWidget::tabsUpdate)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ExtendedTabWidget::staticMetaObject = { {
    &QTabWidget::staticMetaObject,
    qt_meta_stringdata_ExtendedTabWidget.data,
    qt_meta_data_ExtendedTabWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ExtendedTabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExtendedTabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ExtendedTabWidget.stringdata0))
        return static_cast<void*>(this);
    return QTabWidget::qt_metacast(_clname);
}

int ExtendedTabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
bool ExtendedTabWidget::tabBeforeClose(QWidget * _t1)
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
void ExtendedTabWidget::tabsUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
