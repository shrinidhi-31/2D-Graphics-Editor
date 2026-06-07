#include <stdio.h>
#include "../include/canvas.h"
#include "../include/line.h"
#include "../include/rectangle.h"
#include "../include/triangle.h"
#include "../include/circle.h"

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
        printf("6. Clear Canvas\n");
        printf("7. Exit\n");
        printf("Enter Choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            {
                int x1,y1,x2,y2;

                printf("Enter x1 y1 : ");
                scanf("%d %d", &x1, &y1);

                printf("Enter x2 y2 : ");
                scanf("%d %d", &x2, &y2);

                drawLine(x1, y1, x2, y2);

                break;
            }

            case 2:
            {
                int x,y,width,height;

                printf("Enter top-left x y : ");
                scanf("%d %d", &x, &y);

                printf("Enter width : ");
                scanf("%d", &width);

                printf("Enter height : ");
                scanf("%d", &height);

                drawRectangle(x, y, width, height);

                break;
            }

            case 3:
            {
                int x1,y1,x2,y2,x3,y3;

                printf("Enter x1 y1 : ");
                scanf("%d %d",&x1,&y1);

                printf("Enter x2 y2 : ");
                scanf("%d %d",&x2,&y2);

                printf("Enter x3 y3 : ");
                scanf("%d %d",&x3,&y3);

                drawTriangle(
                    x1,y1,
                    x2,y2,
                    x3,y3
                );
                break;
            }

            case 4:
            {
                int xc,yc,r;

                printf("Enter center x y : ");
                scanf("%d %d",&xc, &yc);

                printf("Enter radius : ");
                scanf("%d",&r);

                drawCircle(xc, yc, r);

                break;
            }

            case 5:
                displayCanvas();
                break;

            case 6:
            {
                initializeCanvas();
                printf("Canvas Cleared\n");
                break;
            }

            case 7:
                return 0;

            default:
                printf("Invalid Choice!!\n");
        }
    }
    return 0;
}