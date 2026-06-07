#include <stdio.h>
#include "../include/line.h"

void drawLine(int x1,int y1,int x2,int y2)
{
    printf("Line function called.\n");
    printf("Start Point : (%d, %d)\n", x1, y1);
    printf("End Point   : (%d, %d)\n", x2, y2);
}