#ifndef PREGUNTAS_H
#define PREGUNTAS_H

#include <QDialog>

namespace Ui {
class preguntas;
}

class preguntas : public QDialog
{
    Q_OBJECT

public:
    explicit preguntas(QWidget *parent = 0);
    ~preguntas();

private:
    Ui::preguntas *ui;
};

#endif // PREGUNTAS_H
