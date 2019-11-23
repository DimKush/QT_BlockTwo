#ifndef  TASKTWO_H
#define  TASKTWO_H

#include <QDialog>
#include <QListWidgetItem>

namespace Ui {
class TaskTwoDlg;
}

class TaskTwo : public QDialog
{
    Q_OBJECT

public:
    explicit TaskTwo(QWidget * parent = nullptr);
    ~TaskTwo();

private slots:
    void on_pushButtonReturn_clicked();
    void on_listWidget_itemClicked(QListWidgetItem *item);
    void on_pushButtonAddLang_clicked();
    void on_pushButtonDropLang_clicked();
    void on_checkBoxForIcons_clicked();

private:
    int position_right_now , position_prev;
    Ui::TaskTwoDlg *ui;

};



#endif
