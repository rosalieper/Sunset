#include "sl.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SL w;
    w.setWindowTitle("Sunset");
    w.show();

    return a.exec();
}
