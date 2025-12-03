#ifndef MYQOBJECT_H
#define MYQOBJECT_H

#include <QObject>
#include <QDebug>

class MyQObject : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString information MEMBER m_information NOTIFY informationChanged)
    Q_PROPERTY(int value READ getValue WRITE setValue NOTIFY valueChanged)

public:
    explicit MyQObject(QObject *parent = nullptr);
    int getValue() const;
    void setValue(int newValue);

signals:
    void informationChanged();
    void valueChanged();

public slots:
    void on_informationChanged();
    void on_valueChanged();

private:
    int m_value;
    QString m_information;
};

#endif // MYQOBJECT_H
