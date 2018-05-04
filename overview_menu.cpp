#include "overview_menu.h"

overview_menu::overview_menu(QWidget *parent) : QWidget(parent)
{

/*** NOTE :UNTUK OVERALL SENSOR, KITA GUNAKAN QLABEL SEBAGAI WADAH LALU DIGANTI DENGAN GAMBAR(SENSOR OFF DAN ON ) MENGGUNAKAN QTIMER UNTUK REALTIME AKUISISI***/

    this->push_heap();
    this->setup_layout();
    this->setLayout(g_layout);

}

void overview_menu::push_heap(){

    movement_layout=new QGridLayout;
    sensor_kanan_l=new QGridLayout;
    sensor_kiri_l=new QGridLayout;

    g_layout=new QGridLayout;
    posisi_sensor=new QGridLayout;

    kondisi_sensor=new QGroupBox;
    kondisi_sensor->setTitle("&Kondisi Sensor");

    state_movement=new QGroupBox;
    state_movement->setTitle("&Arah Gerak");



    s_kanan=new QGroupBox;
    s_kanan->setTitle("Sensor Bagian Kanan");
    s_kiri=new QGroupBox;
    s_kiri->setTitle("Sensor Bagian Kiri");

    for(int x=0;x<16;x++){
        QString temp="sensor ke-"+QString::number(x+1);
        sensor_state[x]=new QLabel(temp);

    }
    for(int x=0;x<16;x++){

        sensor_picture[x]=new QLabel;
    }

    kondisi_label=new QLabel("Current Movement");
    kondisi_gerak=new QLabel("Mati");

}

void overview_menu::setup_layout(){
    this->setup_sensor_view();
    this->setup_state();
    posisi_sensor->addWidget(s_kanan,0,0);
    posisi_sensor->addWidget(s_kiri,0,1);
    //kondisi sensor menambahkan layout posisi_sensor
    kondisi_sensor->setLayout(posisi_sensor);
    g_layout->addWidget(state_movement,0,1);
    g_layout->addWidget(kondisi_sensor,0,0);


}

void overview_menu::setting_kanan(){
    for(;sensor<8;sensor++){
        QPixmap pixmap = QPixmap (":/icon_dir/red.svg");
        sensor_picture[sensor]->setPixmap(pixmap.scaled(32,32));
        sensor_kanan_l->addWidget(sensor_state[sensor],sensor,0);
        sensor_kanan_l->addWidget(sensor_picture[sensor],sensor,1);
    }
}

void overview_menu::setting_kiri(){
    for(;sensor<16;sensor++){
        QPixmap pixmap = QPixmap (":/icon_dir/red.svg");
        sensor_kiri_l->addWidget(sensor_state[sensor],sensor,0);
        sensor_picture[sensor]->setPixmap(pixmap.scaled(32,32));
        sensor_kiri_l->addWidget(sensor_picture[sensor],sensor,1);
    }

}
void overview_menu::setup_sensor_view(){
    this->setting_kanan();
    this->setting_kiri();
    s_kanan->setLayout(sensor_kanan_l);
    s_kiri->setLayout(sensor_kiri_l);

}

void overview_menu::setup_state(){
movement_layout->addWidget(kondisi_label,0,0);
movement_layout->addWidget(kondisi_gerak,0,1);
state_movement->setLayout(movement_layout);
}
