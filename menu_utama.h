#ifndef MENU_UTAMA_H
#define MENU_UTAMA_H

#include "setting_connection.h"
#include "overview_menu.h"


#include <QWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLayout>
#include <QPushButton>
#include <QGridLayout>
#include <QFrame>
#include <QBoxLayout>

/*Core Library*/
#include <QStackedLayout>

class menu_utama : public QWidget
{
    Q_OBJECT
public:
    explicit menu_utama(QWidget *parent = nullptr);

signals:

public slots:
    void change_to_settings();
    void change_to_overview();
    void change_to_construct_line();

private:
    void prepare_heap();
    void atur_layout();

    QPushButton *setting_trig;
    QPushButton *overview_trig;
    QPushButton *track_line;
    QHBoxLayout *h_layout;
    QVBoxLayout *v_layout;
    QGridLayout *g_layout;
    QFrame *layout_samping;
    QFrame *layout_isi;
    QBoxLayout *group_tombol;

    QStackedLayout *stacked_view;

    setting_connection *setting_koneksi;
    overview_menu *over_piew;
};

#endif // MENU_UTAMA_H
