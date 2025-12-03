#include <QCoreApplication>
#include <QMetaProperty>
#include <QMetaObject>
#include <QDebug>
#include "myqobject.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyQObject *object = new MyQObject();

    qInfo() << "---------- OBJECT INFO ----------";
    qInfo() << "Class name: " <<object->metaObject()->className();
    qInfo() << "Superclass name: " <<object->metaObject()->superClass()->className();
    qInfo() << "Property count: " <<object->metaObject()->propertyCount();
    qInfo() << "Method count: " <<object->metaObject()->methodCount();
    qInfo() << "Enumerator count: " <<object->metaObject()->enumeratorCount();

    qInfo() << "\n---------- PROPERTIES ----------";
    const QMetaObject* metaObject = object->metaObject();
    for(int i = 0; i < metaObject->propertyCount(); ++i)
        qInfo() << "Property" << i << ":" << metaObject->property(i).name();

    qInfo() << "\n---------- METHODS ----------";
    for(int i = 0; i < metaObject->methodCount(); i++)
        qInfo() << "Method" << i << ":" << metaObject->method(i).name();

    qInfo() << "\n---------- ENUMERATORS ----------";
    for(int i = 0; i < metaObject->enumeratorCount(); i++)
        qInfo() << "Enumerator" << i << ":" << metaObject->enumerator(i).name();

    return a.exec();
}
