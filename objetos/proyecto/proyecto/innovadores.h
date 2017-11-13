#ifndef INNOVADORES_H
#define INNOVADORES_H

#include <QDialog>

namespace Ui {
class innovadores;
}

class innovadores : public QDialog
{
    Q_OBJECT

public:
    explicit innovadores(QWidget *parent = 0);
    ~innovadores();

private:
    Ui::innovadores *ui;
};

#endif // INNOVADORES_H
