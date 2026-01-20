#include<stdio.h>
int main()
{
    int index_number, count = 0;
    printf("Enter the index no: ");
    scanf("%d", &index_number);
    int temp = index_number;
    while(temp>0){
        temp /= 10;
        count++;
    }
    int arr[count], i = count - 1, sum = 0;
    while(index_number>0){
        arr[i] = index_number % 10;
        index_number /= 10;
        i--;
    }
    int *p = arr;
    for(int j = 0; j<count; j++){
        printf("%d ", *(p + j));
        sum += *(p + j);
    }
    printf("\nSum = %d\n", sum);
    return 0;
}