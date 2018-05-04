#include "menu_utama.h"

menu_utama::menu_utama(QWidget *parent) : QWidget(parent)
{
    this->prepare_heap();
    this->atur_layout();
    this->setWindowTitle("Line Follower GUI");
    this->resize(1200,700);


    connect(setting_trig,SIGNAL(clicked()),this,SLOT(change_to_settings()));
    connect(overview_trig,SIGNAL(clicked()),this,SLOT(change_to_overview()));
    this->show();

}

void menu_utama::prepare_heap(){
    /*Deklarasi Tombol*/
    setting_trig=new QPushButton("Setting");
    overview_trig=new QPushButton("Overview");
    track_line=new QPushButton("Movement Log");

    /*Deklarasi Layout*/
    v_layout=new QVBoxLayout;
    h_layout=new QHBoxLayout;
    g_layout=new QGridLayout;
    group_tombol=new QBoxLayout(QBoxLayout::TopToBottom,NULL);;
    layout_samping=new QFrame;
    layout_isi=new QFrame;

    /*Deklrasi Stack view*/
    stacked_view=new QStackedLayout;

    /*Deklarasi Widget*/
    setting_koneksi=new setting_connection(NULL);
    over_piew=new overview_menu(NULL);

}


void menu_utama::atur_layout(){
//konfigurasi tombol side panel
    group_tombol->addWidget(overview_trig);
    group_tombol->addWidget(setting_trig);
    group_tombol->addWidget(track_line);

    //layout side panel
    v_layout->addLayout(group_tombol);
    layout_samping->setLayout(v_layout);
    layout_samping->setFrameShape(QFrame::NoFrame);

    //layout isi dari sub menu
    h_layout->addLayout(stacked_view);
    layout_isi->setFrameShadow(QFrame::Sunken);
    layout_isi->setFrameShape(QFrame::Box);
    layout_isi->setLineWidth(2);
    layout_isi->setMidLineWidth(0);
    layout_isi->setStyleSheet("background-color:grey");
    layout_isi->setLayout(h_layout);

    //konfigurasi stackedview

    stacked_view->addWidget(setting_koneksi);
    stacked_view->addWidget(over_piew);
    stacked_view->setCurrentIndex(1);

    //konfigurasi layout aplikasi
    g_layout->addWidget(layout_samping,0,0);
    g_layout->addWidget(layout_isi,0,1);
    setLayout(g_layout);


}


void menu_utama::change_to_settings(){
    stacked_view->setCurrentIndex(0);

}

void menu_utama::change_to_overview(){

    stacked_view->setCurrentIndex(1);
}

void menu_utama::change_to_construct_line(){

}

