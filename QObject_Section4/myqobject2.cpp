// Copyright (C) 2026 Qt Group.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only

#include "myqobject2.h"

MyQObject2::MyQObject2(QObject *parent)
    : QObject{parent}
{}

void MyQObject2::mySlot2(QString message)
{
    qInfo() << "Message received in mySlot2: " << message;
}
