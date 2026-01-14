#include<stdio.h>
int max(int x, int y)
{
    if(y>x){
        return y;
    }
    else{
        return x;
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int result = arr[0];
    for(int i = 1; i<5; i++){
        result = max(result, arr[i]);
    }
    printf("%d is maximum number of array\n", result);
    return 0;
}