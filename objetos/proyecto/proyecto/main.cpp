#include "registrarse.h"
#include "ingresar.h"
#include "carrito.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ingresar w;
    w.show();

    return a.exec();
}
