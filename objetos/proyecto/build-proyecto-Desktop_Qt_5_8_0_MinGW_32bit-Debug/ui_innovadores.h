/********************************************************************************
** Form generated from reading UI file 'innovadores.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INNOVADORES_H
#define UI_INNOVADORES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_innovadores
{
public:

    void setupUi(QDialog *innovadores)
    {
        if (innovadores->objectName().isEmpty())
            innovadores->setObjectName(QStringLiteral("innovadores"));
        innovadores->resize(689, 449);

        retranslateUi(innovadores);

        QMetaObject::connectSlotsByName(innovadores);
    } // setupUi

    void retranslateUi(QDialog *innovadores)
    {
        innovadores->setWindowTitle(QApplication::translate("innovadores", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class innovadores: public Ui_innovadores {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INNOVADORES_H
