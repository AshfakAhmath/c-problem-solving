#include<stdio.h>
void passArray(int arr[])
{
    for(int i = 0; i<5; i++){
        printf("%d ", arr[i]);
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    passArray(arr);
    return 0;
}