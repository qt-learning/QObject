#include "myqobject.h"

MyQObject::MyQObject(QObject *parent)
    : QObject{parent}
{
    QObject::connect(this, &MyQObject::informationChanged, this, &MyQObject::on_informationChanged);
    QObject::connect(this, &MyQObject::valueChanged, this, &MyQObject::on_valueChanged);
}

int MyQObject::getValue() const
{
    return m_value;
}

void MyQObject::setValue(int newValue)
{
    if (m_value == newValue)
        return;
    m_value = newValue;
    emit valueChanged();
}

void MyQObject::on_informationChanged()
{
    qInfo() << "m_information member variable: " << m_information;
}

void MyQObject::on_valueChanged()
{
    qInfo() << "m_value member variable: " << m_value;
}
