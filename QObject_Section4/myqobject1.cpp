#include "myqobject1.h"

MyQObject1::MyQObject1(QObject *parent)
    : QObject{parent}
{}

void MyQObject1::mySlot1(QString message)
{
    qInfo() << "Message received in mySlot1: " << message;
}
