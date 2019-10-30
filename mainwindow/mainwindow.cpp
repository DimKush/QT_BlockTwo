#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "TaskOne/TaskOne.h"


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonTaskOne_clicked()
{
    TaskOne dlg;
    dlg.exec();
}

void MainWindow::on_pushButtonTaskTwo_clicked()
{

}

void MainWindow::on_pushButtonTaskThree_clicked()
{

}

void MainWindow::on_pushButtonExitApp_clicked()
{
    close();
}
