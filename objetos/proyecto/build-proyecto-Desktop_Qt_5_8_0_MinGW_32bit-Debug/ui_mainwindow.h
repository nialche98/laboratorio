/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *texto;
    QLineEdit *usuario;
    QLabel *texto_2;
    QLineEdit *usuario_2;
    QPushButton *b_ingresar;
    QPushButton *b_registrarse;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menuOrangotango;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(549, 423);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        texto = new QLabel(centralWidget);
        texto->setObjectName(QStringLiteral("texto"));
        texto->setGeometry(QRect(160, 230, 61, 20));
        texto->setTextFormat(Qt::AutoText);
        texto->setWordWrap(false);
        texto->setMargin(0);
        texto->setIndent(-1);
        usuario = new QLineEdit(centralWidget);
        usuario->setObjectName(QStringLiteral("usuario"));
        usuario->setGeometry(QRect(210, 230, 161, 20));
        texto_2 = new QLabel(centralWidget);
        texto_2->setObjectName(QStringLiteral("texto_2"));
        texto_2->setGeometry(QRect(140, 270, 61, 20));
        texto_2->setTextFormat(Qt::AutoText);
        texto_2->setWordWrap(false);
        texto_2->setMargin(0);
        texto_2->setIndent(-1);
        usuario_2 = new QLineEdit(centralWidget);
        usuario_2->setObjectName(QStringLiteral("usuario_2"));
        usuario_2->setGeometry(QRect(210, 270, 161, 20));
        usuario_2->setDragEnabled(false);
        usuario_2->setReadOnly(false);
        b_ingresar = new QPushButton(centralWidget);
        b_ingresar->setObjectName(QStringLiteral("b_ingresar"));
        b_ingresar->setGeometry(QRect(180, 320, 75, 23));
        b_registrarse = new QPushButton(centralWidget);
        b_registrarse->setObjectName(QStringLiteral("b_registrarse"));
        b_registrarse->setGeometry(QRect(300, 320, 75, 23));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 10, 241, 201));
        label->setSizeIncrement(QSize(0, 0));
        label->setBaseSize(QSize(0, 0));
        label->setPixmap(QPixmap(QString::fromUtf8("../Screenshot-2017-10-24 Objetos y Programaci\303\263n a Media Escala - Proyecto 2017-2 pdf.png")));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 549, 21));
        menuOrangotango = new QMenu(menuBar);
        menuOrangotango->setObjectName(QStringLiteral("menuOrangotango"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuOrangotango->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        texto->setText(QApplication::translate("MainWindow", "Usuario :", Q_NULLPTR));
        usuario->setText(QString());
        texto_2->setText(QApplication::translate("MainWindow", "Contrase\303\261a:", Q_NULLPTR));
        usuario_2->setText(QString());
        b_ingresar->setText(QApplication::translate("MainWindow", "Ingresar", Q_NULLPTR));
        b_registrarse->setText(QApplication::translate("MainWindow", "Registrarse", Q_NULLPTR));
        label->setText(QString());
        menuOrangotango->setTitle(QApplication::translate("MainWindow", "Orangotango", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
