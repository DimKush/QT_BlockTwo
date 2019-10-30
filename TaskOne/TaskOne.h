#ifndef TASKONE_H
#define TASKONE_H

#include <QDialog>
#include "TaskOne/TaskOneModel.hpp"

namespace Ui {
class TaskOne;
}

class TaskOne : public QDialog
{
    Q_OBJECT

public:
    explicit TaskOne(QWidget *parent = nullptr);
    ~TaskOne();

private slots:
    void on_pushButtonReturn_clicked();
    void on_plainTextEdit_textChanged();

private:
    Ui::TaskOne *ui;
    TaskOneModel *parseText;
};

#endif // TASKONE_H
