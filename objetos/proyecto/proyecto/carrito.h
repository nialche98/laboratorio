#ifndef CARRITO_H
#define CARRITO_H

#include <QDialog>

namespace Ui {
class carrito;
}

class carrito : public QDialog
{
    Q_OBJECT

public:
    explicit carrito(QWidget *parent = 0);
    ~carrito();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::carrito *ui;
};

#endif // CARRITO_H
