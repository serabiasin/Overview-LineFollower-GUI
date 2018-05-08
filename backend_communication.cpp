#include "backend_communication.h"

backend_communication::backend_communication(QSerialPort *referensi, QString path_usb)
{
qDebug()<<"COnnection open : "<<referensi<<": "<<path_usb;
}
