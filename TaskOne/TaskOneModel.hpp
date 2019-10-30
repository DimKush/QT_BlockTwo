#ifndef TASK_ONE_MODEL_HPP
#define TASK_ONE_MODEL_HPP

#include <QString>

class TaskOneModel
{
public:
    TaskOneModel();
    ~TaskOneModel();

    bool  change(QString);
    QString CountSpecialSymbol();
    QString getText();
    void ChangeOnSymbol(QString & str);
private:
    QString text;
    QString preText;
    qint32  pos;
};

#endif
