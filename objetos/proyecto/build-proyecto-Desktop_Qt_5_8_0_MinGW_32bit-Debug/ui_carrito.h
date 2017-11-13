/********************************************************************************
** Form generated from reading UI file 'carrito.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARRITO_H
#define UI_CARRITO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_carrito
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QTreeWidget *treeWidget;

    void setupUi(QDialog *carrito)
    {
        if (carrito->objectName().isEmpty())
            carrito->setObjectName(QStringLiteral("carrito"));
        carrito->resize(647, 465);
        pushButton = new QPushButton(carrito);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 430, 111, 23));
        pushButton_2 = new QPushButton(carrito);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(530, 430, 91, 23));
        pushButton_3 = new QPushButton(carrito);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(410, 430, 101, 23));
        treeWidget = new QTreeWidget(carrito);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(10, 20, 256, 192));

        retranslateUi(carrito);

        QMetaObject::connectSlotsByName(carrito);
    } // setupUi

    void retranslateUi(QDialog *carrito)
    {
        carrito->setWindowTitle(QApplication::translate("carrito", "Carrito de compra", Q_NULLPTR));
        pushButton->setText(QApplication::translate("carrito", "Volver a productos", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("carrito", "Pago en efectivo", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("carrito", "Pago con tajeta", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("carrito", "1", Q_NULLPTR));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("carrito", "pollo", Q_NULLPTR));
        treeWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class carrito: public Ui_carrito {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARRITO_H
