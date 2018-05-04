#ifndef SETTING_CONNECTION_H
#define SETTING_CONNECTION_H

/*General Library*/
#include <QWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLayout>
#include <QPushButton>
#include <QGridLayout>
#include <QFrame>
#include <QBoxLayout>
#include <QComboBox>
#include <QLabel>

/*Debugging purposes*/
#include <QDebug>

/*Core Library*/
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QVector>
#include <QString>

/*Get usb path
#include <libudev.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
*/

class setting_connection : public QWidget
{
    Q_OBJECT
public:
    explicit setting_connection(QWidget *parent = nullptr);

signals:

public slots:
    void show_available_device();
private:
    void pushheap();
    void rapikan();
    QString get_usb(); //hanya untuk display
    QSerialPort get_path(); //untuk keperluan koneksi langsung

    QComboBox *opsi_koneksi; //variable untuk menampilkan usb yang terhubung
    QPushButton *sambung; //trigger untuk terhubung
    QPushButton *refresh; //buat mengupdate direktori usb yang terhubung
    QGridLayout *rapi;
    QLabel *opsi_label;
    QLabel *stat_label;
    QLabel *stat_indikator;
    QSerialPort *arduino; //object untuk membuka komunikasi serial ke arduino
};

#endif // SETTING_CONNECTION_H
