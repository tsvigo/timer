#include "dialog.h"
#include "ui_dialog.h"

/////////////////////////////////////////////
/// \brief Dialog::Dialog
/// \param parent
#include <QTimer>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief Dialog::Dialog
/// \param parent
///
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
//    QTimer *timer = new QTimer(this);
//connect(timer, SIGNAL(timeout()), this, SLOT(update()));
//timer->start(10000);

///
/// //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

timer=new QTimer; 
connect(timer,SIGNAL(timeout()),this,SLOT(do_timer())); 
timer->start(50);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
        if (!timer->isActive())
        timer->start(50);
    else
        timer->stop();
}



void Dialog::do_timer()
{
//
    ui->pushButton->move(QPoint( ui->pushButton->pos().x()+10, ui->pushButton->pos().y()));
}
