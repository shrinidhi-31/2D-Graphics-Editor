#ifndef OBJECT_H
#define OBJECT_H

// Line
extern int lineExists;
extern int lx1, ly1, lx2, ly2;

// Rectangle
extern int rectExists;
extern int rx, ry, rw, rh;

// Triangle
extern int triangleExists;
extern int tx1, ty1, tx2, ty2, tx3, ty3;

// Circle
extern int circleExists;
extern int cx, cy, radius;

void redrawScene();

#endif