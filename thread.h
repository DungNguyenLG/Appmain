#ifndef THREAD_H
#define THREAD_H

#include <QObject>
#include <QThread>
#include <QTimer>
#include "receivefromaudio.h"


class Thread:public QThread
{
    Q_OBJECT
public:
    Thread();
     void run();

};

#endif // THREAD_H
