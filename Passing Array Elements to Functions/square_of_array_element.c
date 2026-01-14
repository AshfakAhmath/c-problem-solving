#include<stdio.h>
void printSquare(int value)
{
    printf("Square of %d is %d\n",value, value * value);
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    for(int i = 0; i<5; i++){
        printSquare(arr[i]);
    }
    return 0;
}