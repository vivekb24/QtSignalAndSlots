#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(this, &MainWindow::sayHello, this, &MainWindow::slotResponse);
    timerObj = new TimerClass;
    connect(timerObj,SIGNAL(timerCustomSignal(int)),this,SLOT(timerCustomSlot(int)));
    emit sayHello();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timerCustomSlot(int value)
{
    ui->label->setText("<center>"+QString::number(value)+"</center>");
    ui->statusBar->showMessage("DONE",3000);
}

void MainWindow::slotResponse()
{
    qDebug()<<"H E L L O ...... W O R L D!!!!";
}
