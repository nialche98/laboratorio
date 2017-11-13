#ifndef PRODUCTOS_H
#define PRODUCTOS_H

#include <QDialog>

namespace Ui {
class productos;
}

class productos : public QDialog
{
    Q_OBJECT

public:
    explicit productos(QWidget *parent = 0);
    ~productos();

private slots:
    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::productos *ui;
};

#endif // PRODUCTOS_H
