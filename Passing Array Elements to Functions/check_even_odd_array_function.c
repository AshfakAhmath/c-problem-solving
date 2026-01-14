#include<stdio.h>
void checkEvenOdd(int value)
{
    if(value % 2 == 0){
        printf("%d is Even\n", value);
    }
    else{
        printf("%d is Odd\n", value);
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    for(int i = 0; i<5; i++){
        checkEvenOdd(arr[i]);
    }
    return 0;
}