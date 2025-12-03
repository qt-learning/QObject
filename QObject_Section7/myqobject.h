#ifndef MYQOBJECT_H
#define MYQOBJECT_H

#include <QObject>
#include <QDebug>

class MyQObject : public QObject
{
    Q_OBJECT
public:
    explicit MyQObject(QString objectName, QObject *parent = nullptr);
    ~MyQObject();
};

#endif // MYQOBJECT_H
