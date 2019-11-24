#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "TaskOne/TaskOne.h"
#include "TaskTwo/TaskTwo.hpp"
#include "TaskThree/TaskThree.hpp"

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
    TaskTwo dlg;
    dlg.exec();
}

void MainWindow::on_pushButtonTaskThree_clicked()
{
    TaskThree dlg;
    dlg.exec();
}

void MainWindow::on_pushButtonExitApp_clicked()
{
    close();
}
