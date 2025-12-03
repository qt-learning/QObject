#include <QCoreApplication>
#include <QDebug>
#include <QMetaProperty>
#include "myqobject.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyQObject *object = new MyQObject();

    object->setProperty("value", 50);
    object->setProperty("information", "Hello World!");

    qInfo() << "Value property:" << object->property("value");
    qInfo() << "Information property:" << object->property("information");

    return a.exec();
}
