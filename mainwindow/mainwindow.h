#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void on_pushButtonTaskOne_clicked();
    void on_pushButtonTaskTwo_clicked();
    void on_pushButtonTaskThree_clicked();
    void on_pushButtonExitApp_clicked();
};
#endif // MAINWINDOW_H
