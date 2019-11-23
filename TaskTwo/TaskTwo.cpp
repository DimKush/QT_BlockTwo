#include "TaskTwo/TaskTwo.hpp"
#include "ui_TaskTwo.h"

TaskTwo::TaskTwo(QWidget *parent) : QDialog(parent), ui(new Ui::TaskTwoDlg)
{
    ui->setupUi(this);

    ui->listWidget->setDragDropMode(QAbstractItemView::InternalMove);

    ui->listWidget->addItem(new QListWidgetItem(QIcon(":/rec/images/cpp.ico"),"С++"));
    ui->listWidget->addItem(new QListWidgetItem(QIcon(":/rec/images/python.ico"),"Python"));
    ui->listWidget->addItem(new QListWidgetItem(QIcon(":/rec/images/java.ico"),"Java"));
    ui->listWidget->addItem(new QListWidgetItem(QIcon(":/rec/images/csharp.ico"),"С#"));
    ui->listWidget->addItem(new QListWidgetItem(QIcon(":/rec/images/php.ico"),"PHP"));
    ui->listWidget->addItem(new QListWidgetItem(QIcon(":/rec/images/javascript.ico"),"JavaScript"));

    ui->listWidget->setIconSize(QSize(32,32));

}

TaskTwo::~TaskTwo()
{
    delete ui;
}

void TaskTwo::on_pushButtonReturn_clicked()
{
    close();
}

void TaskTwo::on_listWidget_itemClicked(QListWidgetItem *item)
{
    auto flag = item->flags();
    position_right_now = ui->listWidget->currentRow();

    flag.setFlag(Qt::ItemIsEditable, true).setFlag(Qt::ItemIsEnabled, true);

    item->setFlags(flag);

    if(position_right_now != position_prev)
    {
        flag.setFlag(Qt::ItemIsEditable, false);
        item->setFlags(flag);
        position_prev = position_right_now;
    }
}

void TaskTwo::on_pushButtonAddLang_clicked()
{
    ui->listWidget->addItem(new QListWidgetItem(QIcon(":/rec/images/qt.ico"),"Sample language"));
}


void TaskTwo::on_pushButtonDropLang_clicked()
{
    auto * for_del = ui->listWidget->takeItem(ui->listWidget->currentRow());
    delete for_del;
}

void TaskTwo::on_checkBoxForIcons_clicked()
{
    if(ui->checkBoxForIcons->isChecked())
        ui->listWidget->setViewMode(QListView::IconMode);

    else
        ui->listWidget->setViewMode(QListView::ListMode);
}
