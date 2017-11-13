/********************************************************************************
** Form generated from reading UI file 'preguntas.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREGUNTAS_H
#define UI_PREGUNTAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_preguntas
{
public:

    void setupUi(QDialog *preguntas)
    {
        if (preguntas->objectName().isEmpty())
            preguntas->setObjectName(QStringLiteral("preguntas"));
        preguntas->resize(400, 300);

        retranslateUi(preguntas);

        QMetaObject::connectSlotsByName(preguntas);
    } // setupUi

    void retranslateUi(QDialog *preguntas)
    {
        preguntas->setWindowTitle(QApplication::translate("preguntas", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class preguntas: public Ui_preguntas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREGUNTAS_H
