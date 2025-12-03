#include "myqobject2.h"

MyQObject2::MyQObject2(QObject *parent)
    : QObject{parent}
{}

void MyQObject2::mySlot2(QString message)
{
    qInfo() << "Message received in mySlot2: " << message;
}
