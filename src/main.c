#include <stdio.h>
#include "../include/canvas.h"
#include "../include/line.h"
#include "../include/rectangle.h"
#include "../include/triangle.h"
#include "../include/circle.h"
#include "../include/object.h"

int main()
{
    int choice;

    initializeCanvas();

    while(1)
    {
        printf("\n");
        printf("===== 2D GRAPHICS EDITOR =====\n");
        printf("1. Draw Line\n");
        printf("2. Draw Rectangle\n");
        printf("3. Draw Triangle\n");
        printf("4. Draw Circle\n");
        printf("5. Display Canvas\n");
        printf("6. Delete Object\n");
        printf("7. Modify Object\n");
        printf("8. Clear Canvas\n");
        printf("9. Exit\n");

        printf("Enter Choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            {
                int x1, y1, x2, y2;

                printf("Enter x1 y1 : ");
                scanf("%d %d", &x1, &y1);

                printf("Enter x2 y2 : ");
                scanf("%d %d", &x2, &y2);

                lx1 = x1;
                ly1 = y1;
                lx2 = x2;
                ly2 = y2;

                lineExists = 1;

                redrawScene();

                printf("Line Added Successfully!\n");
                break;
            }

            case 2:
            {
                int x, y, width, height;

                printf("Enter top-left x y : ");
                scanf("%d %d", &x, &y);

                printf("Enter width : ");
                scanf("%d", &width);

                printf("Enter height : ");
                scanf("%d", &height);

                rx = x;
                ry = y;
                rw = width;
                rh = height;

                rectExists = 1;

                redrawScene();

                printf("Rectangle Added Successfully!\n");
                break;
            }

            case 3:
            {
                int x1, y1, x2, y2, x3, y3;

                printf("Enter x1 y1 : ");
                scanf("%d %d", &x1, &y1);

                printf("Enter x2 y2 : ");
                scanf("%d %d", &x2, &y2);

                printf("Enter x3 y3 : ");
                scanf("%d %d", &x3, &y3);

                tx1 = x1;
                ty1 = y1;
                tx2 = x2;
                ty2 = y2;
                tx3 = x3;
                ty3 = y3;

                triangleExists = 1;

                redrawScene();

                printf("Triangle Added Successfully!\n");
                break;
            }

            case 4:
            {
                int xc, yc, r;

                printf("Enter center x y : ");
                scanf("%d %d", &xc, &yc);

                printf("Enter radius : ");
                scanf("%d", &r);

                cx = xc;
                cy = yc;
                radius = r;

                circleExists = 1;

                redrawScene();

                printf("Circle Added Successfully!\n");
                break;
            }

            case 5:
            {
                displayCanvas();
                break;
            }

            case 6:
            {
                int ch;

                printf("\nDelete Object\n");
                printf("1. Line\n");
                printf("2. Rectangle\n");
                printf("3. Triangle\n");
                printf("4. Circle\n");

                printf("Enter Choice : ");
                scanf("%d", &ch);

                switch(ch)
                {
                    case 1:
                        lineExists = 0;
                        break;

                    case 2:
                        rectExists = 0;
                        break;

                    case 3:
                        triangleExists = 0;
                        break;

                    case 4:
                        circleExists = 0;
                        break;

                    default:
                        printf("Invalid Choice!\n");
                        break;
                }

                redrawScene();

                printf("Object Deleted Successfully!\n");
                break;
            }

            case 7:
            {
                int ch;

                printf("\nModify Object\n");
                printf("1. Line\n");
                printf("2. Rectangle\n");
                printf("3. Triangle\n");
                printf("4. Circle\n");

                printf("Enter Choice : ");
                scanf("%d", &ch);

                switch(ch)
                {
                    case 1:
                    {
                        printf("Enter new x1 y1 : ");
                        scanf("%d %d", &lx1, &ly1);

                        printf("Enter new x2 y2 : ");
                        scanf("%d %d", &lx2, &ly2);

                        lineExists = 1;
                        break;
                    }

                    case 2:
                    {
                        printf("Enter new top-left x y : ");
                        scanf("%d %d", &rx, &ry);

                        printf("Enter new width : ");
                        scanf("%d", &rw);

                        printf("Enter new height : ");
                        scanf("%d", &rh);

                        rectExists = 1;
                        break;
                    }

                    case 3:
                    {
                        printf("Enter new x1 y1 : ");
                        scanf("%d %d", &tx1, &ty1);

                        printf("Enter new x2 y2 : ");
                        scanf("%d %d", &tx2, &ty2);

                        printf("Enter new x3 y3 : ");
                        scanf("%d %d", &tx3, &ty3);

                        triangleExists = 1;
                        break;
                    }

                    case 4:
                    {
                        printf("Enter new center x y : ");
                        scanf("%d %d", &cx, &cy);

                        printf("Enter new radius : ");
                        scanf("%d", &radius);

                        circleExists = 1;
                        break;
                    }

                    default:
                        printf("Invalid Choice!\n");
                        break;
                }

                redrawScene();

                printf("Object Modified Successfully!\n");
                break;
            }

            case 8:
            {
                int ch;

                printf("\nClear Canvas ?\n");
                printf("1. Yes\n");
                printf("2. No\n");

                printf("Enter Choice : ");
                scanf("%d", &ch);

                if(ch == 1)
                {
                    lineExists = 0;
                    rectExists = 0;
                    triangleExists = 0;
                    circleExists = 0;

                    redrawScene();

                    printf("Canvas Cleared Successfully!\n");
                }
                else if(ch == 2)
                {
                    printf("Operation Cancelled.\n");
                }
                else
                {
                    printf("Invalid Choice!\n");
                }

                break;
            }

            case 9:
                return 0;

            default:
                printf("Invalid Choice!!\n");
        }
    }

    return 0;
}