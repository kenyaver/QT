#include "mainwindow.h"

#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Widget window;
    window.setWindowTitle("First program on Qt OOP-version");
    window.resize(350, 70);

    window.show();
    return a.exec();
}
