#ifndef FACTURA_H
#define FACTURA_H

#include <QDialog>

namespace Ui {
class factura;
}

class factura : public QDialog
{
    Q_OBJECT

public:
    explicit factura(QWidget *parent = 0);
    ~factura();

private:
    Ui::factura *ui;
};

#endif // FACTURA_H
