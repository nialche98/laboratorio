/********************************************************************************
** Form generated from reading UI file 'ingresar.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INGRESAR_H
#define UI_INGRESAR_H

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

class Ui_ingresar
{
public:
    QLineEdit *usuario;
    QPushButton *b_ingresar;
    QLineEdit *usuario_2;
    QLabel *texto_2;
    QLabel *label;
    QLabel *texto;
    QPushButton *b_registrarse;
    QPushButton *b_registrarse_2;

    void setupUi(QDialog *ingresar)
    {
        if (ingresar->objectName().isEmpty())
            ingresar->setObjectName(QStringLiteral("ingresar"));
        ingresar->resize(607, 418);
        usuario = new QLineEdit(ingresar);
        usuario->setObjectName(QStringLiteral("usuario"));
        usuario->setGeometry(QRect(230, 250, 161, 20));
        b_ingresar = new QPushButton(ingresar);
        b_ingresar->setObjectName(QStringLiteral("b_ingresar"));
        b_ingresar->setGeometry(QRect(140, 350, 75, 23));
        usuario_2 = new QLineEdit(ingresar);
        usuario_2->setObjectName(QStringLiteral("usuario_2"));
        usuario_2->setGeometry(QRect(230, 290, 161, 20));
        usuario_2->setDragEnabled(false);
        usuario_2->setReadOnly(false);
        texto_2 = new QLabel(ingresar);
        texto_2->setObjectName(QStringLiteral("texto_2"));
        texto_2->setGeometry(QRect(160, 290, 61, 20));
        texto_2->setTextFormat(Qt::AutoText);
        texto_2->setWordWrap(false);
        texto_2->setMargin(0);
        texto_2->setIndent(-1);
        label = new QLabel(ingresar);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 30, 241, 201));
        label->setSizeIncrement(QSize(0, 0));
        label->setBaseSize(QSize(0, 0));
        label->setPixmap(QPixmap(QString::fromUtf8("../Screenshot-2017-10-24 Objetos y Programaci\303\263n a Media Escala - Proyecto 2017-2 pdf.png")));
        texto = new QLabel(ingresar);
        texto->setObjectName(QStringLiteral("texto"));
        texto->setGeometry(QRect(180, 250, 61, 20));
        texto->setTextFormat(Qt::AutoText);
        texto->setWordWrap(false);
        texto->setMargin(0);
        texto->setIndent(-1);
        b_registrarse = new QPushButton(ingresar);
        b_registrarse->setObjectName(QStringLiteral("b_registrarse"));
        b_registrarse->setGeometry(QRect(260, 350, 75, 23));
        b_registrarse_2 = new QPushButton(ingresar);
        b_registrarse_2->setObjectName(QStringLiteral("b_registrarse_2"));
        b_registrarse_2->setGeometry(QRect(370, 350, 121, 23));

        retranslateUi(ingresar);

        QMetaObject::connectSlotsByName(ingresar);
    } // setupUi

    void retranslateUi(QDialog *ingresar)
    {
        ingresar->setWindowTitle(QApplication::translate("ingresar", "Dialog", Q_NULLPTR));
        usuario->setText(QString());
        b_ingresar->setText(QApplication::translate("ingresar", "Ingresar", Q_NULLPTR));
        usuario_2->setText(QString());
        texto_2->setText(QApplication::translate("ingresar", "Contrase\303\261a:", Q_NULLPTR));
        label->setText(QString());
        texto->setText(QApplication::translate("ingresar", "Usuario :", Q_NULLPTR));
        b_registrarse->setText(QApplication::translate("ingresar", "Registrarse", Q_NULLPTR));
        b_registrarse_2->setText(QApplication::translate("ingresar", "Preguntas frecuentes ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ingresar: public Ui_ingresar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INGRESAR_H
