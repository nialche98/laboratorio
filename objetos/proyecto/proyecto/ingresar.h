#ifndef INGRESAR_H
#define INGRESAR_H

#include <QDialog>
#include <QtCore>

namespace Ui {
class ingresar;
}

class ingresar : public QDialog
{
    Q_OBJECT

public:
    explicit ingresar(QWidget *parent = 0);
    ~ingresar();

private slots:
    void on_b_registrarse_clicked();

    void on_b_ingresar_clicked();

private:
    Ui::ingresar *ui;
};

#endif // INGRESAR_H
