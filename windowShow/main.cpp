#include "widget.h"

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.setWindowTitle("show window");
    w.resize(350, 350);

    QPushButton *btnMin = new QPushButton("close");
    QPushButton *btnMax = new QPushButton("open");
    QPushButton *btnFull = new QPushButton("full screen");
    QPushButton *btnNorm = new QPushButton("normal screen");

    QVBoxLayout *vbox = new QVBoxLayout();
    vbox->addWidget(btnMin);
    vbox->addWidget(btnMax);
    vbox->addWidget(btnFull);
    vbox->addWidget(btnNorm);
    w.setLayout(vbox);

    QObject::connect(btnMin, SIGNAL(clicked()), &w, SLOT(showMinimized()));
    QObject::connect(btnMax, SIGNAL(clicked()), &w, SLOT(showMaximized()));
    QObject::connect(btnFull, SIGNAL(clicked()), &w, SLOT(showFullScreen()));
    QObject::connect(btnNorm, SIGNAL(clicked()), &w, SLOT(showNormal()));
    w.show();
    return a.exec();
}
