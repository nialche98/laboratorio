#include "tarjeta.h"
#include "carrito.h"
#include "factura.h"
#include "ui_tarjeta.h"

tarjeta::tarjeta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tarjeta)
{
    ui->setupUi(this);
}

tarjeta::~tarjeta()
{
    delete ui;
}

void tarjeta::on_pushButton_2_clicked()
{
    carrito carro;
    close();
    carro.exec();
}

void tarjeta::on_pushButton_clicked()
{
    factura factu;
    close();
    factu.exec();
}
