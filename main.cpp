#include "menu_utama.h"
#include <QApplication>


int main(int argc,char *argv[]){

    QApplication app(argc,argv);
    menu_utama gu_i;
    gu_i.show();
    return app.exec();
}
