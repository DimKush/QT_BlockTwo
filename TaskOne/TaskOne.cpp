#include "TaskOne.h"
#include "ui_TaskOne.h"
#include <QTextCursor>

TaskOne::TaskOne(QWidget * parent) :QDialog(parent), ui(new Ui::TaskOne)
{
    ui->setupUi(this);
    parseText = new TaskOneModel();

    if (!parseText)
        close();

}

TaskOne::~TaskOne()
{
    delete parseText;
    delete ui;
}

void TaskOne::on_pushButtonReturn_clicked()
{
    close();
}

void TaskOne::on_plainTextEdit_textChanged()
{
    QString str = ui->plainTextEdit->toPlainText();
    QTextCursor tmpCursor = ui->plainTextEdit->textCursor();

    tmpCursor.movePosition(QTextCursor::Left, QTextCursor::MoveAnchor, 1);

    if (parseText->change(str))
    {
        ui->plainTextEdit->setPlainText(parseText->getText());
        ui->plainTextEdit->setTextCursor(tmpCursor);
    }


}
