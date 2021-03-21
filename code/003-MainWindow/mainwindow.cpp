#include "mainwindow.h"
#include <QtDebug>
#include <QPushButton>
#include <QMenu>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    qDebug() << "MainWindos 创建";

    // 设置窗口标题
     setWindowTitle("主窗口");
     // 设置窗口初始大小，可以自由伸缩
     resize(500,500);

     // 设置窗口的死大小，不能自由伸缩
//     setFixedSize(500,500);

     //设置窗口的位置 （以父控件左上角为坐标原点，如果没有父控件，就是屏幕左上角原点）
     move(300,300);




     QPushButton *btn = new QPushButton();
     btn->setText("登录");
     btn->move(100,100);
     btn->resize(100,50);
     btn->adjustSize();
     btn->setParent(this);
     btn->setContextMenuPolicy(Qt::ActionsContextMenu);



}


MainWindow::~MainWindow()
{
     qDebug() << "MainWindos 销毁";
}


