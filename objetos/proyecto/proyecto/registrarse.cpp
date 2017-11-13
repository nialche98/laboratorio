#include "registrarse.h"
#include "ui_registrarse.h"

registrarse::registrarse(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarse)
{
    ui->setupUi(this);
}

registrarse::~registrarse()
{
    delete ui;
}

void registrarse::on_b_registrarse_clicked()
{
    string pollo = ui->text->text().toStdString();
    QString newString = QString::fromStdString(pollo);
    close();

}

void registrarse::on_pushButton_clicked()
{
    close();
}

