#ifndef TASK_TWO_DLG_HPP
#define TASK_TWO_DLG_HPP


#include <QDialog>


namespace Ui {
class tasktwodlg;
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
    Ui::tasktwodlg *ui;
};




#endif //TASK_TWO_DLG_HPP
