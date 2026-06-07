#include "../include/triangle.h"
#include "../include/line.h"

void drawTriangle(
    int x1,int y1,
    int x2,int y2,
    int x3,int y3)
{
    drawLine(x1,y1,x2,y2);
    drawLine(x2,y2,x3,y3);
    drawLine(x3,y3,x1,y1);
}