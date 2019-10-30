#include "Stringer.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Stringer w;
    w.show();
    return a.exec();
}
