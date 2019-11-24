#ifndef TASK_THREE_HPP
#define TASK_THREE_HPP

#include <QDialog>

namespace Ui {
    class TaskThreeDlg;
}

class TaskThree : public QDialog
{
    Q_OBJECT

public:
    explicit TaskThree(QWidget * parent = nullptr);
    ~TaskThree();

private slots:
    void on_pushButtonReturn_clicked();

private:
    Ui::TaskThreeDlg *ui;
    void fillFirstInfo();
    int countOfRows;
};



















#endif
