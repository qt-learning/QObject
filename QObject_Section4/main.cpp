#include <QCoreApplication>
#include "myqobject1.h"
#include "myqobject2.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyQObject1 *object1 = new MyQObject1();
    MyQObject2 *object2 = new MyQObject2();

    QObject::connect(object1, &MyQObject1::mySignal, object1, &MyQObject1::mySlot1);
    QObject::connect(object1, &MyQObject1::mySignal, object2, &MyQObject2::mySlot2);

    emit object1->mySignal("Hello World!");

    QObject::disconnect(object1, &MyQObject1::mySignal, object1, &MyQObject1::mySlot1);
    QObject::disconnect(object1, &MyQObject1::mySignal, object2, &MyQObject2::mySlot2);

    emit object1->mySignal("Hello World Again!");

    return a.exec();
}
