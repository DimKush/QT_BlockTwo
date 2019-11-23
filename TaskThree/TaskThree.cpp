#include "TaskThree/TaskThree.hpp"
#include "ui_taskthree.h"

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
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "№" << "Имя компьютера" << "IP адрес" << "MAC адрес");

    //QTableWidgetItem *lwm = new QTableWidgetItem(tr());
}

void TaskThree::on_pushButtonReturn_clicked()
{
    close();
}

