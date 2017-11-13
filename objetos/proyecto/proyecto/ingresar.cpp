#include "ingresar.h"
#include "registrarse.h"
#include "productos.h"
#include "ui_ingresar.h"

ingresar::ingresar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ingresar)
{
    ui->setupUi(this);
}

ingresar::~ingresar()
{
    delete ui;
}

void ingresar::on_b_registrarse_clicked()
{
    registrarse registrar;
    registrar.exec();
}

void ingresar::on_b_ingresar_clicked()
{
    productos producto;
    close();
    producto.exec();

}
