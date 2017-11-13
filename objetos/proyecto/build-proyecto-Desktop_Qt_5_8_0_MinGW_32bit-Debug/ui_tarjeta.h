/********************************************************************************
** Form generated from reading UI file 'tarjeta.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TARJETA_H
#define UI_TARJETA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_tarjeta
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *tarjeta)
    {
        if (tarjeta->objectName().isEmpty())
            tarjeta->setObjectName(QStringLiteral("tarjeta"));
        tarjeta->resize(519, 231);
        label = new QLabel(tarjeta);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 70, 47, 13));
        lineEdit = new QLineEdit(tarjeta);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(70, 70, 113, 20));
        label_2 = new QLabel(tarjeta);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(270, 70, 47, 13));
        lineEdit_2 = new QLineEdit(tarjeta);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(320, 70, 113, 20));
        lineEdit_3 = new QLineEdit(tarjeta);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(130, 120, 113, 20));
        label_3 = new QLabel(tarjeta);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 120, 111, 16));
        label_4 = new QLabel(tarjeta);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(270, 120, 101, 16));
        lineEdit_4 = new QLineEdit(tarjeta);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(380, 120, 113, 20));
        pushButton = new QPushButton(tarjeta);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(420, 200, 91, 23));
        pushButton_2 = new QPushButton(tarjeta);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 200, 91, 23));

        retranslateUi(tarjeta);

        QMetaObject::connectSlotsByName(tarjeta);
    } // setupUi

    void retranslateUi(QDialog *tarjeta)
    {
        tarjeta->setWindowTitle(QApplication::translate("tarjeta", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("tarjeta", "Titular:", Q_NULLPTR));
        label_2->setText(QApplication::translate("tarjeta", "Numero :", Q_NULLPTR));
        label_3->setText(QApplication::translate("tarjeta", "Fecha de nacimiento :", Q_NULLPTR));
        label_4->setText(QApplication::translate("tarjeta", " Clave de seguridad :", Q_NULLPTR));
        pushButton->setText(QApplication::translate("tarjeta", "Realizar compra", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("tarjeta", "Volver al carrito", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class tarjeta: public Ui_tarjeta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TARJETA_H
