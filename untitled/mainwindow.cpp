#include "mainwindow.h"
// #include "ui_mainwindow.h"

//MainWindow::MainWindow(QWidget *parent)
//    : QMainWindow(parent)
//    , ui(new Ui::MainWindow)
//{
//    ui->setupUi(this);
//}

//MainWindow::~MainWindow()
//{
//    delete ui;
//}

Widget::Widget(QWidget *parent): QWidget(parent){
  label = new QLabel("Hello QT");
  label->setAlignment(Qt::AlignCenter);
  buttonQuit = new QPushButton("&Close window");
  box = new QVBoxLayout();
  box->addWidget(label);
  box->addWidget(buttonQuit);
  setLayout(box);
  connect(buttonQuit, SIGNAL(clicked()), qApp, SLOT(quit()));
}

Widget::~Widget(){}

