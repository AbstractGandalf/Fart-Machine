#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->label->setText("<h1 style='text-align:center;'><font color ='green'>The Fart Machine</font></h1>");
    player = new QMediaPlayer(this);
    QPixmap pix("/home/neotius/C++ Projects/FarterMaster/Fart-Machine/Sounds/fartbob.png");
    ui->label_2->setPixmap(pix);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    player->setMedia(QUrl::fromLocalFile("/home/neotius/C++ Projects/FarterMaster/Fart-Machine/Sounds/1.wav"));
    player->play();
}

void Dialog::on_pushButton_2_clicked()
{
    player->setMedia(QUrl::fromLocalFile("/home/neotius/C++ Projects/FarterMaster/Fart-Machine/Sounds/2.wav"));
    player->play();
}

void Dialog::on_pushButton_3_clicked()
{
    player->setMedia(QUrl::fromLocalFile("/home/neotius/C++ Projects/FarterMaster/Fart-Machine/Sounds/3.wav"));
    player->play();
}

void Dialog::on_pushButton_8_clicked()
{
    player->setMedia(QUrl::fromLocalFile("/home/neotius/C++ Projects/FarterMaster/Fart-Machine/Sounds/4.wav"));
    player->play();
}

void Dialog::on_pushButton_4_clicked()
{
    player->setMedia(QUrl::fromLocalFile("/home/neotius/C++ Projects/FarterMaster/Fart-Machine/Sounds/5.wav"));
    player->play();
}

void Dialog::on_pushButton_5_clicked()
{
    player->setMedia(QUrl::fromLocalFile("/home/neotius/C++ Projects/FarterMaster/Fart-Machine/Sounds/6.wav"));
    player->play();
}

void Dialog::on_pushButton_7_clicked()
{
    player->setMedia(QUrl::fromLocalFile("/home/neotius/C++ Projects/FarterMaster/Fart-Machine/Sounds/7.wav"));
    player->play();
}

void Dialog::on_pushButton_6_clicked()
{
    player->setMedia(QUrl::fromLocalFile("/home/neotius/C++ Projects/FarterMaster/Fart-Machine/Sounds/8.wav"));
    player->play();
}

void Dialog::on_pushButton_9_clicked()
{
    player->setMedia(QUrl::fromLocalFile("/home/neotius/C++ Projects/FarterMaster/Fart-Machine/Sounds/9.wav"));
    player->play();
}
