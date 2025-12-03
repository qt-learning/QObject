#ifndef MYQOBJECT_H
#define MYQOBJECT_H

#include <QObject>

class MyQObject : public QObject
{
    Q_OBJECT
public:
    explicit MyQObject(QObject *parent = nullptr);
};

#endif // MYQOBJECT_H
