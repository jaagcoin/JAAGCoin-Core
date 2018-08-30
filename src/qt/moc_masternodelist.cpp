/****************************************************************************
** Meta object code from reading C++ file 'masternodelist.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/masternodelist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'masternodelist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MasternodeList_t {
    QByteArrayData data[21];
    char stringdata0[370];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MasternodeList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MasternodeList_t qt_meta_stringdata_MasternodeList = {
    {
QT_MOC_LITERAL(0, 0, 14), // "MasternodeList"
QT_MOC_LITERAL(1, 15, 13), // "doubleClicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 42, 22), // "updateMyMasternodeInfo"
QT_MOC_LITERAL(5, 65, 8), // "strAlias"
QT_MOC_LITERAL(6, 74, 7), // "strAddr"
QT_MOC_LITERAL(7, 82, 9), // "COutPoint"
QT_MOC_LITERAL(8, 92, 8), // "outpoint"
QT_MOC_LITERAL(9, 101, 16), // "updateMyNodeList"
QT_MOC_LITERAL(10, 118, 6), // "fForce"
QT_MOC_LITERAL(11, 125, 14), // "updateNodeList"
QT_MOC_LITERAL(12, 140, 15), // "showContextMenu"
QT_MOC_LITERAL(13, 156, 29), // "on_filterLineEdit_textChanged"
QT_MOC_LITERAL(14, 186, 11), // "strFilterIn"
QT_MOC_LITERAL(15, 198, 19), // "on_QRButton_clicked"
QT_MOC_LITERAL(16, 218, 22), // "on_startButton_clicked"
QT_MOC_LITERAL(17, 241, 25), // "on_startAllButton_clicked"
QT_MOC_LITERAL(18, 267, 29), // "on_startMissingButton_clicked"
QT_MOC_LITERAL(19, 297, 48), // "on_tableWidgetMyMasternodes_i..."
QT_MOC_LITERAL(20, 346, 23) // "on_UpdateButton_clicked"

    },
    "MasternodeList\0doubleClicked\0\0QModelIndex\0"
    "updateMyMasternodeInfo\0strAlias\0strAddr\0"
    "COutPoint\0outpoint\0updateMyNodeList\0"
    "fForce\0updateNodeList\0showContextMenu\0"
    "on_filterLineEdit_textChanged\0strFilterIn\0"
    "on_QRButton_clicked\0on_startButton_clicked\0"
    "on_startAllButton_clicked\0"
    "on_startMissingButton_clicked\0"
    "on_tableWidgetMyMasternodes_itemSelectionChanged\0"
    "on_UpdateButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MasternodeList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    3,   82,    2, 0x0a /* Public */,
       9,    1,   89,    2, 0x0a /* Public */,
       9,    0,   92,    2, 0x2a /* Public | MethodCloned */,
      11,    0,   93,    2, 0x0a /* Public */,
      12,    1,   94,    2, 0x08 /* Private */,
      13,    1,   97,    2, 0x08 /* Private */,
      15,    0,  100,    2, 0x08 /* Private */,
      16,    0,  101,    2, 0x08 /* Private */,
      17,    0,  102,    2, 0x08 /* Private */,
      18,    0,  103,    2, 0x08 /* Private */,
      19,    0,  104,    2, 0x08 /* Private */,
      20,    0,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 7,    5,    6,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MasternodeList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MasternodeList *_t = static_cast<MasternodeList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->updateMyMasternodeInfo((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< const COutPoint(*)>(_a[3]))); break;
        case 2: _t->updateMyNodeList((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->updateMyNodeList(); break;
        case 4: _t->updateNodeList(); break;
        case 5: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 6: _t->on_filterLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_QRButton_clicked(); break;
        case 8: _t->on_startButton_clicked(); break;
        case 9: _t->on_startAllButton_clicked(); break;
        case 10: _t->on_startMissingButton_clicked(); break;
        case 11: _t->on_tableWidgetMyMasternodes_itemSelectionChanged(); break;
        case 12: _t->on_UpdateButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MasternodeList::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MasternodeList::doubleClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MasternodeList::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MasternodeList.data,
      qt_meta_data_MasternodeList,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MasternodeList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MasternodeList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MasternodeList.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MasternodeList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void MasternodeList::doubleClicked(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
