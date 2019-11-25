#include "TaskOneModel.hpp"
#include <QDebug>


#define MIN(a,b) (a < b) ? a:b

TaskOneModel::TaskOneModel()
{
    text = "";
    preText = "";
    pos = 0;
}

TaskOneModel::~TaskOneModel(){}

bool TaskOneModel::change(QString istr)
{
    qint32 length = MIN(MIN(text.length(),istr.length()),pos);
    preText = "";

    for(qint32 i(0); i < length; i++)
    {
        if(text[i] != istr[i])
        {
            pos = i;
            break;
        }
    }
    const QChar *arStr = istr.constData();
    qint32 ppos = 0, lastp = -1;

    bool chg = false;
    for (qint32 fnd = istr.indexOf("#@", pos); fnd != -1 && lastp != pos; fnd = istr.indexOf("#@", pos))
    {
       preText.insert(preText.length(), &arStr[ppos], fnd);
       lastp = pos;
       pos = fnd;

       int r = istr.indexOf("@ ", fnd);
       int space = istr.indexOf(' ', fnd);
       qDebug() << "r = " <<r << "fnd = " << fnd << "space = " << space;

       if ((r < space || space == -1) && r != -1)
       {
           QString exampl = "";
           exampl.insert(0, &arStr[fnd + 2], r - fnd - 2);

           ChangeOnSymbol(exampl);

           preText += exampl;
           pos = r + 1;
           chg = true;
       }

       preText.insert(preText.length(), &arStr[pos], istr.length() - pos);
    }

    return chg;
}

void TaskOneModel::ChangeOnSymbol(QString & str)
{
    if(str.compare("RUB") == 0 || str.compare("руб") == 0)
        str = "₽";
    else if(str.compare("CPR") == 0 || str.compare("автор") == 0)
        str = "©";
    else if(str.compare("PROM") == 0 || str.compare("промили") == 0)
        str = "‰";
    else if(str.compare("EUR") == 0 || str.compare("евро") == 0)
        str = "€";
}

QString TaskOneModel::getText()
{
   text = preText;
   return  text;
}
