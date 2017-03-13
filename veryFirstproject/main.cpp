#include "informationproject.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    InformationProject w;
    w.show();

    return a.exec();
}
