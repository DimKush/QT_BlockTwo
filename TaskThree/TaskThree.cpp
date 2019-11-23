#include "TaskThree/TaskThree.hpp"
#include "ui_taskthree.h"
#include <QtMath>
TaskThree::TaskThree(QWidget * parent) : QDialog(parent), ui(new Ui::TaskThreeDlg)
{
    ui->setupUi(this);
    fillFirstInfo();

}

TaskThree::~TaskThree()
{

}

void TaskThree::fillFirstInfo()
{
    ui->tableWidget->setColumnCount(4);
    ui->tableWidget->setRowCount(4);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "№" << "Имя компьютера" << "IP адрес" << "MAC адрес");

    for(int i = 0; i < ui->tableWidget->rowCount(); ++i)
        {
           QTableWidgetItem * item = new QTableWidgetItem(
                       tr("%1 Computer-%2 192.168.1.%2 255.255.255.%3 ").arg(countOfRows).arg(qrand()).arg(qrand()%255).arg(qrand()%255));
           ui->tableWidget->setItem(i,0,item);
        }

}

void TaskThree::on_pushButtonReturn_clicked()
{
    close();
}

