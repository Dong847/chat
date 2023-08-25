#include "letuschat.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    letuschat w;
    w.show();
    return a.exec();
}
