#ifndef OVERVIEW_MENU_H
#define OVERVIEW_MENU_H

#include <QWidget>
#include <QLabel>
#include <QFrame>
#include <QTimer>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QGroupBox>
#include <QString>
#include <QVector>
#include <QDebug>
#include <QSerialPort>

#include <QPixmap>
class overview_menu : public QWidget
{
    Q_OBJECT
public:
    explicit overview_menu(QWidget *parent = nullptr);
   int sensor=0; //index sensor

signals:

public slots:

private:

    void push_heap();
    void setup_layout();
    void setup_sensor_view(); //mengatur view sensor
    void setting_kanan();
    void setting_kiri();
    void setup_state();
    void change_state_sensor(int sensor_pin,bool status);
    void readSerial(); //membaca data serial
    QString movement_statement(int condition); //mereturnkan sebuah string maju,belok,mundur


    QLabel *sensor_state[16];
    QLabel *sensor_picture[16];
    QLabel *kondisi_label; //Tulisan "Current Movement"
    QLabel *kondisi_gerak; //pergerakan LF apakah maju,mundur atau belok
    QString *usb_path; //usb path

    QGroupBox *kondisi_sensor;
    QGroupBox *state_movement;

    QGridLayout *sensor_kanan_l;
    QGridLayout *sensor_kiri_l;
    QGridLayout *movement_layout;

//    QHBoxLayout *h_layout;
    QGridLayout *g_layout;
    QGridLayout *posisi_sensor; //buat menentukan layout group box sensor
    QGroupBox *s_kanan; //sensor kanan
    QGroupBox *s_kiri; //sensor kiri

};

#endif // OVERVIEW_MENU_H
