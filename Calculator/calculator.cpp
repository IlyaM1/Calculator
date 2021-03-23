#include "calculator.h"
#include <iostream>
Calculator::Calculator(int w, int h)
{
    width = w;
    height = h;
    hCell = height/6;
    wCell = width/4;

    for (int i = 0; i < 4; i++)
    for (int q = 0; q < 5; q++)
    grid[i][q] = new QRect(wCell * i, hCell*(q+1), wCell, hCell);
}
bool findDot(QString s)
{
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '.')
        {
            return true;
        }
    }
    return false;
}
void Calculator::mouseReleaseEvent(QMouseEvent *me)
{
     QPoint mouseP(me->x(),  me->y());


     if(grid[0][0]->contains(mouseP))
     {
        s_number = "0";
        d_number = 0;
        currentA = nothing;
        help_number = 0;
        s_helpNumber = 0;
     }
     if(grid[1][0]->contains(mouseP))
     {
        d_number = pow(d_number, 2);
        s_number = QString::number(d_number);
     }
     if(grid[2][0]->contains(mouseP))
     {
        d_number = sqrt(d_number);
        s_number = QString::number(d_number);
     }
     if(grid[3][0]->contains(mouseP))
     {
        currentA = division;
        MainOrHelp = false;
     }


     if(grid[0][1]->contains(mouseP))
     {
         if(MainOrHelp)
         {
            if(s_number == "0")
            {
                s_number = "7";
            }
            else
            {
                s_number += "7";
            }
        d_number = s_number.toDouble();
         }
         else
         {
             if(s_helpNumber == "0")
             {
                 s_helpNumber = "7";
             }
             else
             {
                 s_helpNumber += "7";
             }
         help_number = s_helpNumber.toDouble();
         }
     }
     if(grid[1][1]->contains(mouseP))
     {
         if(MainOrHelp)
         {
            if(s_number == "0")
            {
                s_number = "8";
            }
            else
            {
                s_number += "8";
            }
        d_number = s_number.toDouble();
         }
         else
         {
             if(s_helpNumber == "0")
             {
                 s_helpNumber = "8";
             }
             else
             {
                 s_helpNumber += "8";
             }
         help_number = s_helpNumber.toDouble();
         }
     }
     if(grid[2][1]->contains(mouseP))
     {
         if(MainOrHelp)
         {
            if(s_number == "0")
            {
                s_number = "9";
            }
            else
            {
                s_number += "9";
            }
        d_number = s_number.toDouble();
         }
         else
         {
             if(s_helpNumber == "0")
             {
                 s_helpNumber = "9";
             }
             else
             {
                 s_helpNumber += "9";
             }
         help_number = s_helpNumber.toDouble();
         }
     }
     if(grid[3][1]->contains(mouseP))
     {
         currentA = multiplication;
         MainOrHelp = false;
     }


     if(grid[0][2]->contains(mouseP))
     {
         if(MainOrHelp)
         {
            if(s_number == "0")
            {
                s_number = "4";
            }
            else
            {
                s_number += "4";
            }
        d_number = s_number.toDouble();
         }
         else
         {
             if(s_helpNumber == "0")
             {
                 s_helpNumber = "4";
             }
             else
             {
                 s_helpNumber += "4";
             }
         help_number = s_helpNumber.toDouble();
         }
     }
     if(grid[1][2]->contains(mouseP))
     {
         if(MainOrHelp)
         {
            if(s_number == "0")
            {
                s_number = "5";
            }
            else
            {
                s_number += "5";
            }
        d_number = s_number.toDouble();
         }
         else
         {
             if(s_helpNumber == "0")
             {
                 s_helpNumber = "5";
             }
             else
             {
                 s_helpNumber += "5";
             }
         help_number = s_helpNumber.toDouble();
         }
     }
     if(grid[2][2]->contains(mouseP))
     {
         if(MainOrHelp)
         {
            if(s_number == "0")
            {
                s_number = "6";
            }
            else
            {
                s_number += "6";
            }
        d_number = s_number.toDouble();
         }
         else
         {
             if(s_helpNumber == "0")
             {
                 s_helpNumber = "6";
             }
             else
             {
                 s_helpNumber += "6";
             }
         help_number = s_helpNumber.toDouble();
         }
     }
     if(grid[3][2]->contains(mouseP))
     {
         currentA = minus;
         MainOrHelp = false;
     }


     if(grid[0][3]->contains(mouseP))
     {
         if(MainOrHelp)
         {
            if(s_number == "0")
            {
                s_number = "1";
            }
            else
            {
                s_number += "1";
            }
        d_number = s_number.toDouble();
         }
         else
         {
             if(s_helpNumber == "0")
             {
                 s_helpNumber = "1";
             }
             else
             {
                 s_helpNumber += "1";
             }
         help_number = s_helpNumber.toDouble();
         }
     }
     if(grid[1][3]->contains(mouseP))
     {
         if(MainOrHelp)
         {
            if(s_number == "0")
            {
                s_number = "2";
            }
            else
            {
                s_number += "2";
            }
        d_number = s_number.toDouble();
         }
         else
         {
             if(s_helpNumber == "0")
             {
                 s_helpNumber = "2";
             }
             else
             {
                 s_helpNumber += "2";
             }
         help_number = s_helpNumber.toDouble();
         }
     }
     if(grid[2][3]->contains(mouseP))
     {
         if(MainOrHelp)
         {
            if(s_number == "0")
            {
                s_number = "3";
            }
            else
            {
                s_number += "3";
            }
        d_number = s_number.toDouble();
         }
         else
         {
             if(s_helpNumber == "0")
             {
                 s_helpNumber = "3";
             }
             else
             {
                 s_helpNumber += "3";
             }
         help_number = s_helpNumber.toDouble();
         }
     }
     if(grid[3][3]->contains(mouseP))
     {
         currentA = plus;
         MainOrHelp = false;
     }


     if(grid[0][4]->contains(mouseP))
     {
         if(MainOrHelp)
         {
            if(s_number[0] != '-' && s_number != "0")
            {
                s_number.insert(0,"-");
                d_number = s_number.toDouble();
            }
            else if(s_number[0] == '-' && s_number != "0")
            {
                s_number.remove(0,1);
                d_number = s_number.toDouble();
            }
         }
         else
         {
             if(s_number[0] != '-')
             {
                s_helpNumber.insert(0,"-");
                help_number = s_helpNumber.toDouble();
             }
             else
             {
                 s_helpNumber.remove(0,1);
                 help_number = s_helpNumber.toDouble();
             }
         }
     }
     if(grid[1][4]->contains(mouseP))
     {
         if(MainOrHelp)
         {
            if(s_number == "0")
            {
                s_number = "0";
            }
            else
            {
                s_number += "0";
            }
        d_number = s_number.toDouble();
         }
         else
         {
             if(s_helpNumber == "0")
             {
                 s_helpNumber = "0";
             }
             else
             {
                 s_helpNumber += "0";
             }
         help_number = s_helpNumber.toDouble();
         }
     }
     if(grid[2][4]->contains(mouseP))
     {

         if(MainOrHelp)
         {
             if(!findDot(s_number))
             {
                s_number += ".";
                d_number = s_number.toDouble();
             }
         }
         else
         {
             if(!findDot(s_helpNumber))
             {
                s_helpNumber += ".";
                help_number = s_helpNumber.toDouble();
             }
         }

     }
     if(grid[3][4]->contains(mouseP))
     {
         if(currentA != nothing)
         {
             d_number = s_number.toDouble();
            if(currentA == plus)
            {
                d_number += help_number;
            }
            else if(currentA == minus)
            {
               // if(d_number >= 0)
               // {
                   d_number -= help_number;
               // }
               // else
               // {
                //    d_number += help_number;
                //}
            }
            else if(currentA == multiplication)
            {
                d_number *= help_number;
            }
            else if(currentA == division)
            {
                d_number /= help_number;
            }
          s_number = QString::number(d_number);
         // help_number = 0;
          //s_helpNumber = "0";
          //currentA = nothing;
          MainOrHelp = true;
         }
     }

     update(0,0,width, hCell);
     QThread::usleep(50);
}
void Calculator::drawNumber(QString s)
{
    QRect field(0,0,width, hCell);
    QPainter painter;
    painter.begin(this);

    QBrush brush = painter.brush();
    brush.setColor(Qt::black);
    QPen pen = painter.pen();
    QFont font = painter.font();
    font.setPixelSize(60);
    painter.setFont(font);

    painter.drawText(field, Qt::AlignRight, s);

    painter.end();

}
void Calculator::paintEvent(QPaintEvent *event)
{
 //  if(!startDrawed)
  //  {
       starterPainting();
   // }

    if(MainOrHelp)
    {
        drawNumber(s_number);
    }
    else
    {
        drawNumber(s_helpNumber);
    }
}
void Calculator::starterPainting()
{
    QPainter painter;
    painter.begin(this);
    QPen pen = painter.pen();

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 5; j++)
        {
           painter.drawRect(*(grid[i][j]));
        }
    }

    QFont font = painter.font();
    font.setPixelSize(24);
    painter.setFont(font);

    painter.drawText(*(grid[0][0]), Qt::AlignCenter, "C");
    painter.drawText(*(grid[1][0]), Qt::AlignCenter, "X^2");
    painter.drawText(*(grid[2][0]), Qt::AlignCenter, "X^0.5");
    painter.drawText(*(grid[3][0]), Qt::AlignCenter, "/");

    painter.drawText(*(grid[0][1]), Qt::AlignCenter, "7");
    painter.drawText(*(grid[1][1]), Qt::AlignCenter, "8");
    painter.drawText(*(grid[2][1]), Qt::AlignCenter, "9");
    painter.drawText(*(grid[3][1]), Qt::AlignCenter, "*");

    painter.drawText(*(grid[0][2]), Qt::AlignCenter, "4");
    painter.drawText(*(grid[1][2]), Qt::AlignCenter, "5");
    painter.drawText(*(grid[2][2]), Qt::AlignCenter, "6");
    painter.drawText(*(grid[3][2]), Qt::AlignCenter, "-");

    painter.drawText(*(grid[0][3]), Qt::AlignCenter, "1");
    painter.drawText(*(grid[1][3]), Qt::AlignCenter, "2");
    painter.drawText(*(grid[2][3]), Qt::AlignCenter, "3");
    painter.drawText(*(grid[3][3]), Qt::AlignCenter, "+");

    painter.drawText(*(grid[0][4]), Qt::AlignCenter, "+/-");
    painter.drawText(*(grid[1][4]), Qt::AlignCenter, "0");
    painter.drawText(*(grid[2][4]), Qt::AlignCenter, ".");
    painter.drawText(*(grid[3][4]), Qt::AlignCenter, "=");

    painter.end();
    startDrawed = true;
}
