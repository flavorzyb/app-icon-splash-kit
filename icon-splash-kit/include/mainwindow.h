#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);

signals:

public slots:

protected:
    void initUI();
    void center();

private:
    QWidget * mainWidget;
};

#endif // MAINWINDOW_H
