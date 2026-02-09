// Copyright (C) 2026 Qt Group.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only

#include "myqobject.h"

MyQObject::MyQObject(QString objectName, QObject *parent)
    : QObject{parent}
{
    this->setObjectName(objectName);
    qInfo() << this->objectName() << "created";
}

MyQObject::~MyQObject()
{
    qInfo() << this->objectName() << "destroyed";
}
