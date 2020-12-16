#include "timerclass.h"
#include<QDebug>

TimerClass::TimerClass()
{
    timer=new QTimer;
    timer->start(100);
    connect(timer,SIGNAL(timeout()),this,SLOT(timerSlot()));
    timeCount=100;
}

void TimerClass::timerSlot()
{
    qDebug()<<"-----timerSlot()-->>>"<<timeCount;
    timeCount--;
    emit timerCustomSignal(timeCount);
    if(timeCount==0){
     timer->stop();
     qDebug()<<"-----Stop()-->>";
    }

}
