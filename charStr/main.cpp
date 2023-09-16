#include "mainwindow.h"

#include <QApplication>
#include <QString>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QString str = "string";
    qDebug() << str; // qDebug для вывода в консоль
    w.show();
    return a.exec();
}
