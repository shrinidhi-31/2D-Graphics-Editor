#include <stdio.h>
#include "../include/canvas.h"
#include "../include/line.h"

int main()
{
    int choice;

    initializeCanvas();

    while(1)
    {
        printf("\n");
        printf("===== 2D GRAPHICS EDITOR =====\n");
        printf("1. Draw Line\n");
        printf("2. Display Canvas\n");
        printf("3. Exit\n");
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
                displayCanvas();
                break;

            case 3:
                return 0;

            default:
                printf("Invalid Choice!!\n");
        }
    }
    return 0;
}