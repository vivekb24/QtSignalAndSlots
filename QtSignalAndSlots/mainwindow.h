#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include "timerclass.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
signals:
    void sayHello();
private slots:
    void timerCustomSlot(int value);
       void slotResponse();
private:
    Ui::MainWindow *ui;
    TimerClass *timerObj;
};

#endif // MAINWINDOW_H
