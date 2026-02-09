// Copyright (C) 2026 Qt Group.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only

#include "myqobject1.h"

MyQObject1::MyQObject1(QObject *parent)
    : QObject{parent}
{}

void MyQObject1::mySlot1(QString message)
{
    qInfo() << "Message received in mySlot1: " << message;
}
