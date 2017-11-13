#ifndef TARJETA_H
#define TARJETA_H

#include <QDialog>

namespace Ui {
class tarjeta;
}

class tarjeta : public QDialog
{
    Q_OBJECT

public:
    explicit tarjeta(QWidget *parent = 0);
    ~tarjeta();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::tarjeta *ui;
};

#endif // TARJETA_H
