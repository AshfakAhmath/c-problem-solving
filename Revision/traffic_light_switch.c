#include<stdio.h>
int main()
{
    char color;
    printf("Enter the color(R, G, Y): ");
    scanf(" %c", &color);
    switch(color)
    {
    case 'R':
    case 'r':
        printf("Stop");
        break;
    case 'G':
    case 'g':
        printf("Go");
        break;
    case 'Y':
    case 'y':
        printf("Wait");
        break;
    default:
        printf("Wrong Input");
    }
    return 0;
}
