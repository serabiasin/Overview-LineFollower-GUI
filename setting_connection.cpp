#include "setting_connection.h"

setting_connection::setting_connection(QWidget *parent) : QWidget(parent)
{

    this->pushheap();
    this->rapikan();
 connect(refresh,SIGNAL(clicked()),this,SLOT(show_available_device()));
    this->setLayout(rapi);
}

void setting_connection::pushheap(){

opsi_koneksi = new QComboBox;
sambung =new QPushButton("Connect");
refresh=new QPushButton("Refresh");
rapi = new QGridLayout;
opsi_label=new QLabel("Port : ");
stat_label=new QLabel("Status : ");
stat_indikator=new QLabel("");
opsi_koneksi->setStyleSheet("color:black");

}


void setting_connection::rapikan(){

    rapi->addWidget(opsi_label,0,0);
    rapi->addWidget(opsi_koneksi,0,1);
    rapi->addWidget(stat_label,2,0);
    rapi->addWidget(stat_indikator,2,1);
    rapi->addWidget(sambung,3,0);
    rapi->addWidget(refresh,3,1);



}

QString setting_connection::get_usb(){
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
        if(info.manufacturer()== "Arduino  www.arduino.cc "){

           qDebug() << "Name : " << info.portName();
           qDebug() << "Description : " << info.description();
           qDebug() << "Manufacturer: " << info.manufacturer();

           // Example use QSerialPort

//           arduino->setPort(info);
//           if (arduino->open(QIODevice::ReadWrite))
//               arduino->close();
           return info.portName();

        }else{
            qDebug() <<"Arduino Port Not found";

        }

    }
return 0;

}

void setting_connection::show_available_device(){
    this->get_usb();
}
