#include<stdio.h>
void arrayIndex(int *p, int size)
{
    printf("Index Number Digits and Status:\n");
    for(int i = 0; i<size; i++){
        if(*p % 2 == 0){
            printf("%d : Even\n", *p);
        }
        else{
            printf("%d : Odd\n", *p);
        }
        p++;
    }
}
int main()
{
    int index_number, count = 0;
    printf("Enter the index number: ");
    scanf("%d", &index_number);
    int temp = index_number;
    while(temp>0){
        temp /= 10;
        count++;
    }
    int i = count - 1;
    int index[count];
    while(index_number>0){
        index[i] = index_number % 10;
        index_number /= 10;
        i--;
    }
    arrayIndex(index, count);
    return 0;
}