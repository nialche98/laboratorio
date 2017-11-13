/********************************************************************************
** Form generated from reading UI file 'factura.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACTURA_H
#define UI_FACTURA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_factura
{
public:

    void setupUi(QDialog *factura)
    {
        if (factura->objectName().isEmpty())
            factura->setObjectName(QStringLiteral("factura"));
        factura->resize(593, 420);

        retranslateUi(factura);

        QMetaObject::connectSlotsByName(factura);
    } // setupUi

    void retranslateUi(QDialog *factura)
    {
        factura->setWindowTitle(QApplication::translate("factura", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class factura: public Ui_factura {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACTURA_H
