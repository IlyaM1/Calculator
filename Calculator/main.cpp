//#include "mainwindow.h"
#include "calculator.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    int width = 400;
    int height = 600;
    Calculator w(width, height);
    w.resize(width,height);
    w.setFixedSize(width, height);
    w.show();
    w.drawNumber(w.s_number);
    return a.exec();
}
