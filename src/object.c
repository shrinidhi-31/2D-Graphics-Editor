#include "../include/object.h"

#include "../include/canvas.h"
#include "../include/line.h"
#include "../include/rectangle.h"
#include "../include/triangle.h"
#include "../include/circle.h"

// Line
int lineExists = 0;
int lx1, ly1, lx2, ly2;

// Rectangle
int rectExists = 0;
int rx, ry, rw, rh;

// Triangle
int triangleExists = 0;
int tx1, ty1, tx2, ty2, tx3, ty3;

// Circle
int circleExists = 0;
int cx, cy, radius;

void redrawScene()
{
    initializeCanvas();

    if(lineExists)
        drawLine(lx1, ly1, lx2, ly2);

    if(rectExists)
        drawRectangle(rx, ry, rw, rh);

    if(triangleExists)
        drawTriangle(
            tx1, ty1,
            tx2, ty2,
            tx3, ty3);

    if(circleExists)
        drawCircle(cx, cy, radius);
}