#include "../include/circle.h"
#include "../include/canvas.h"

void plotPoints(int xc, int yc, int x, int y)
{
    if(yc+y >=0 && yc+y < ROWS && xc+x >=0 && xc+x < COLS)
        canvas[yc+y][xc+x] = '*';

    if(yc+y >=0 && yc+y < ROWS && xc-x >=0 && xc-x < COLS)
        canvas[yc+y][xc-x] = '*';

    if(yc-y >=0 && yc-y < ROWS && xc+x >=0 && xc+x < COLS)
        canvas[yc-y][xc+x] = '*';

    if(yc-y >=0 && yc-y < ROWS && xc-x >=0 && xc-x < COLS)
        canvas[yc-y][xc-x] = '*';

    if(yc+x >=0 && yc+x < ROWS && xc+y >=0 && xc+y < COLS)
        canvas[yc+x][xc+y] = '*';

    if(yc+x >=0 && yc+x < ROWS && xc-y >=0 && xc-y < COLS)
        canvas[yc+x][xc-y] = '*';

    if(yc-x >=0 && yc-x < ROWS && xc+y >=0 && xc+y < COLS)
        canvas[yc-x][xc+y] = '*';

    if(yc-x >=0 && yc-x < ROWS && xc-y >=0 && xc-y < COLS)
        canvas[yc-x][xc-y] = '*';
}

void drawCircle(int xc, int yc, int r)
{
    int x = 0;
    int y = r;
    int p = 1 - r;

    while(x <= y)
    {
        plotPoints(xc, yc, x, y);

        if(p < 0)
        {
            p = p + 2*x + 3;
        }
        else
        {
            p = p + 2*(x-y) + 5;
            y--;
        }

        x++;
    }
}