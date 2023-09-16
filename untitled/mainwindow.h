#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>

//QT_BEGIN_NAMESPACE
//namespace Ui { class MainWindow; }
//QT_END_NAMESPACE

//class MainWindow : public QMainWindow
//{
//    Q_OBJECT

//public:
//    MainWindow(QWidget *parent = nullptr);
//    ~MainWindow();

//private:
//    Ui::MainWindow *ui;
//};

class Widget: public QWidget{
    Q_OBJECT

public:
    Widget(QWidget *parrent=nullptr);
    ~Widget();

private:
    QLabel *label;
    QPushButton *buttonQuit;
    QVBoxLayout *box;
};

#endif // MAINWINDOW_H
