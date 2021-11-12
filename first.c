#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float height,length,breadth,volume,area,perimeter;
    int choise;

    printf("%s", "What do you want[volume, area, perimeter]?:\n");
    printf("%s", "Enter 1 for volume, 2 for area and 3 for perimeter.\n");
    scanf("%d", &choise);
    
    if(choise == 1)
    {
        printf("%s", "enter the height of the rectangle\n");
        scanf("%f", &height);

        printf("%s", "enter the length of the rectangle\n");
        scanf("%f", &length);

        printf("%s", "enter the breadth of the rectangle\n");
        scanf("%f", &breadth);

        volume = height * length * breadth;
        printf("The volume of the rectangle is %f", volume);
    }
    else if(choise == 2)
    {
        printf("%s", "enter the length of the rectangle:\n");
        scanf("%f", &length);

        printf("%s", "enter the breadth of the rectangle\n");
        scanf("%f", &breadth);

        area = length * breadth;
        printf("The area of the rectangle is %f\n", area);
    }
    else if(choise == 3)
    {
        printf("%s", "enter the length of the rectangle:\n");
        scanf("%f", &length);

        printf("%s", "enter the breadth of the rectangle\n");
        scanf("%f", &breadth);

        perimeter = 2*(length + breadth);
        printf("The perimeter of the rectangle is %f\n", perimeter);
    }
    else
    {
        printf("%s", "Error\n");
    }

    return 0;
}