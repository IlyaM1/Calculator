#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QObject>
#include <QPaintEvent>
#include <QWidget>
#include <QPainter>
#include <QMouseEvent>
#include <QRect>
#include <QDebug>
#include <QColor>
#include <QBrush>
#include <cmath>
#include <QThread>
enum Actions
{
    nothing,
    plus,
    minus,
    multiplication,
    division
};
class Calculator : public QWidget
{
   // Q_OBJECT
public:
    Calculator(int w, int h);
    ~Calculator()
    {
        for(int i = 0; i < 4; i++)
        for(int q = 0; q < 5; q++)
        delete grid[i][q];
    }
    void paintEvent(QPaintEvent *event);
    void mouseReleaseEvent(QMouseEvent *me);
    void drawNumber(QString number);
    QRect* grid[4][5];

    QString s_number = "0";
    QString s_helpNumber = "0";
private:
    int width = 0;
    int height = 0;
    double d_number = 0;
    double help_number = 0;
    double hCell;
    double wCell;
    Actions currentA = nothing;
    bool MainOrHelp = true;// main == true, help = false;
    bool startDrawed = false;
    void starterPainting();
};

#endif // CALCULATOR_H
