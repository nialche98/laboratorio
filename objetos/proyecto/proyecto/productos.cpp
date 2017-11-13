#include "productos.h"
#include "ui_productos.h"
#include "carrito.h"
#include "ingresar.h"
#include "innovadores.h"

productos::productos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::productos)
{
    ui->setupUi(this);
}

productos::~productos()
{
    delete ui;
}

void productos::on_pushButton_7_clicked()
{
    carrito carro;
    close();
    carro.exec();
}

void productos::on_pushButton_6_clicked()
{
    ingresar ingre;
    close ();
    ingre.exec();
}

void productos::on_pushButton_8_clicked()
{
       innovadores innovacion;
       close();
       innovacion.exec();
}
