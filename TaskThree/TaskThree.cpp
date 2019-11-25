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

      for(int j = 0; j < ui->tableWidget->columnCount(); ++j)
      {
          ui->tableWidget->setItem(i,j,(new QTableWidgetItem(QString::number(countOfRows))));

          ui->tableWidget->setItem(i,++j,(new QTableWidgetItem(QString("Computer-" + QString::number(0+rand()%INT_MAX)))));

          ui->tableWidget->setItem(i,++j,(new QTableWidgetItem(QString(
                               QString::number(0+rand()%CHAR_MAX)) + '.'
                             + QString::number(0+rand()%CHAR_MAX)  + '.'
                             + QString::number(0+rand()%CHAR_MAX)  + '.'
                             + QString::number(0+rand()%CHAR_MAX))));

            ui->tableWidget->setItem(i,++j,(new QTableWidgetItem(QString(
                               QString::number(0+rand()%CHAR_MAX)) + '.'
                             + QString::number(0+rand()%CHAR_MAX)  + '.'
                             + QString::number(0+rand()%CHAR_MAX)  + '.'
                             + QString::number(0+rand()%CHAR_MAX))));
      }
    }

    ui->tableWidget->resizeColumnsToContents();
}

void TaskThree::on_pushButtonReturn_clicked()
{
    close();
}

void TaskThree::on_tableWidget_itemClicked(QTableWidgetItem *item)
{
    for(int j = 0; j < ui->tableWidget->columnCount(); ++j)
    {
        ui->tableWidget->item(item->row(),j)->setBackground(Qt::red);
    }
}
