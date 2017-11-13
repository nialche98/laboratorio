#include "carrito.h"
#include "factura.h"
#include "ui_carrito.h"
#include "tarjeta.h"
#include "productos.h"


carrito::carrito(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::carrito)
{
    ui->setupUi(this);
}

carrito::~carrito()
{
    delete ui;
}

void carrito::on_pushButton_3_clicked()
{
    tarjeta tarjet;
    close();
    tarjet.exec();
}

void carrito::on_pushButton_clicked()
{
    productos producto;
    close();
    producto.exec();
}

void carrito::on_pushButton_2_clicked()
{
    factura factu;
    close();
    factu.exec();
}
