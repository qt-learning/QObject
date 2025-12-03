#include "myqobject.h"

MyQObject::MyQObject(QString objectName, QObject *parent)
    : QObject{parent}
{
    this->setObjectName(objectName);
    qInfo() << this->objectName() << "created";
}

MyQObject::~MyQObject()
{
    qInfo() << this->objectName() << "destroyed";
}
