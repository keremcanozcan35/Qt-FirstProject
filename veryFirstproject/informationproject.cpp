#include "informationproject.h"
#include "ui_informationproject.h"
#include <QMessageBox>


InformationProject::InformationProject(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InformationProject)
{
    ui->setupUi(this);
}

InformationProject::~InformationProject()
{
    delete ui;
}


void InformationProject::on_pushButton_Login_clicked()
{
    QString UserName = ui->lineEdit_UserName->text();
    QString Password = ui->lineEdit_Password->text();

    if(UserName=="test" && Password =="test"){
        QMessageBox::information(this,"Login","UserName and password is correct");
    }
    else{
        QMessageBox::warning(this,"Login","UserNAme and password is wrong!");

    }
}
