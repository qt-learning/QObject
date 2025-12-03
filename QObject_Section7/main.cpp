#include <QCoreApplication>
#include "myqobject.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyQObject *grandParent = new MyQObject("Grand parent");

    MyQObject *parent = new MyQObject("Parent", grandParent);

    MyQObject *child1 = new MyQObject("Child 1", parent);
    MyQObject *child2 = new MyQObject("Child 2", parent);
    MyQObject *child3 = new MyQObject("Child 3");
    child3->setParent(parent);

    delete grandParent;

    return a.exec();
}
