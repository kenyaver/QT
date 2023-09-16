#include "widget.h"

#include <QApplication>
#include <QWidget>
#include <QScreen>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget w;
    w.setWindowTitle("Window");
    w.resize(350, 350);
    w.move(w.width() *  -2, 0);
    w.show();

    QScreen *screen = QApplication::primaryScreen();
    QRect rect = screen->geometry();
    int x = (rect.width() - w.frameSize().width()) / 2;
    int y = (rect.height() - w.frameSize().height()) / 2;
    w.move(x, y);
    return a.exec();
}
