#ifndef REGISTRARSE_H
#define REGISTRARSE_H

#include <QDialog>

namespace Ui {
class registrarse;
}

class registrarse : public QDialog
{
    Q_OBJECT

public:
    explicit registrarse(QWidget *parent = 0);
    ~registrarse();

private slots:
    void on_b_registrarse_clicked();

    void on_pushButton_clicked();

private:
    Ui::registrarse *ui;
};

#endif // REGISTRARSE_H
