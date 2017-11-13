#include "preguntas.h"
#include "ui_preguntas.h"

preguntas::preguntas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::preguntas)
{
    ui->setupUi(this);
}

preguntas::~preguntas()
{
    delete ui;
}
