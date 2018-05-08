#ifndef BACKEND_COMMUNICATION_H
#define BACKEND_COMMUNICATION_H

#include <QSerialPort>
#include <QDebug>

class backend_communication
{
public:
    backend_communication(QSerialPort *referensi, QString path_usb);
};

#endif // BACKEND_COMMUNICATION_H
