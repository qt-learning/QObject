// Copyright (C) 2026 Qt Group.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only

#ifndef MYQOBJECT1_H
#define MYQOBJECT1_H

#include <QObject>
#include <QDebug>

class MyQObject1 : public QObject
{
    Q_OBJECT
public:
    explicit MyQObject1(QObject *parent = nullptr);

signals:
    void mySignal(QString message);

public slots:
    void mySlot1(QString message);
};

#endif // MYQOBJECT1_H
