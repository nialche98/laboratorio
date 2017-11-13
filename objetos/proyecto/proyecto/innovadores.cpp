#include "innovadores.h"
#include "ui_innovadores.h"

innovadores::innovadores(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::innovadores)
{
    ui->setupUi(this);
}

innovadores::~innovadores()
{
    delete ui;
}
