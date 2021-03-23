/*#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // создаем кнопку
    m_button = new QPushButton("My Button", this);
    // устанавливаем размер и положение кнопки
    m_button->setGeometry(QRect(QPoint(100, 100),
    QSize(200, 50)));
    connect(m_button, SIGNAL (released()), this, SLOT (handleButton()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

*/
