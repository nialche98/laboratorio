/********************************************************************************
** Form generated from reading UI file 'productos.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTOS_H
#define UI_PRODUCTOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_productos
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;

    void setupUi(QDialog *productos)
    {
        if (productos->objectName().isEmpty())
            productos->setObjectName(QStringLiteral("productos"));
        productos->resize(607, 408);
        pushButton = new QPushButton(productos);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(180, 60, 241, 23));
        pushButton_2 = new QPushButton(productos);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 110, 241, 23));
        pushButton_3 = new QPushButton(productos);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(180, 160, 241, 23));
        pushButton_4 = new QPushButton(productos);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(180, 210, 241, 23));
        pushButton_5 = new QPushButton(productos);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(180, 260, 241, 23));
        pushButton_6 = new QPushButton(productos);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(30, 370, 91, 23));
        pushButton_7 = new QPushButton(productos);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(510, 370, 75, 23));
        pushButton_8 = new QPushButton(productos);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(180, 310, 241, 23));

        retranslateUi(productos);

        QMetaObject::connectSlotsByName(productos);
    } // setupUi

    void retranslateUi(QDialog *productos)
    {
        productos->setWindowTitle(QApplication::translate("productos", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("productos", "Muebles de dormitorio", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("productos", "Muebles para sala ", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("productos", "Muebles de comedor", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("productos", "Muebles de cocina", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("productos", "Muebles de oficina y estudio", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("productos", "Cambiar usuario", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("productos", "ir al carrito", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("productos", "Dise\303\261o de proyectos grandes y/o innovadores ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class productos: public Ui_productos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTOS_H
