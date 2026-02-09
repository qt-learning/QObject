// Copyright (C) 2026 Qt Group.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only

#ifndef MYQOBJECT_H
#define MYQOBJECT_H

#include <QObject>
#include <QDebug>

class MyQObject : public QObject
{
    Q_OBJECT
public:
    explicit MyQObject(QString objectName, QObject *parent = nullptr);
    ~MyQObject();
};

#endif // MYQOBJECT_H
