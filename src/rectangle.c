#include "../include/rectangle.h"
#include "../include/line.h"

void drawRectangle(int x, int y, int width, int height)
{
    drawLine(x, y, x + width, y);

    drawLine(x + width, y,
             x + width, y + height);

    drawLine(x + width, y + height,
             x, y + height);

    drawLine(x, y + height,
             x, y);
}