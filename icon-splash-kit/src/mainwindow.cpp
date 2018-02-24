#include <QVBoxLayout>
#include <QApplication>
#include <QDesktopWidget>

#include "../include/mainwindow.h"


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), mainWidget(nullptr)
{
    initUI();
    center();
}

void MainWindow::initUI()
{
    mainWidget = new QWidget();
    setCentralWidget(mainWidget);

    setWindowTitle(tr("App Icon & Splash Kit"));
    setMinimumSize(800, 600);

//    QVBoxLayout * mainLayout = new QVBoxLayout;
//    mainLayout->addWidget(settingsGroup);
//    mainLayout->addWidget(outtingsGroup);
//    mainLayout->addWidget(operatorGroup);
//    mainLayout->setContentsMargins(10, 10, 10, 10);
//    mainLayout->setSpacing(10);

//    mainWidget->setLayout(mainLayout);
}

void MainWindow::center()
{
    this->adjustSize();
    this->move(QApplication::desktop()->screen()->rect().center() - this->rect().center());
}
