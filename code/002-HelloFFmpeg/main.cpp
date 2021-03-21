#include "mainwindow.h"
#include <QApplication>
//在QT中不能使用cout标准库输出，要用QTDebug
#include <iostream>
#include <QtDebug>
extern "C" {
//    #include <libavcodec/avcodec.h>
}

int main(int argc, char *argv[])
{
//     qDebug() << av_version_info();

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
