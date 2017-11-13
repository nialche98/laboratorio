#include "factura.h"
#include "ui_factura.h"

factura::factura(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::factura)
{
    ui->setupUi(this);
}

factura::~factura()
{
    delete ui;
}
