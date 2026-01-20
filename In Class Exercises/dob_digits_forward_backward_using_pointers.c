#include<stdio.h>
int main()
{
    int DoB;
    printf("Enter the Date of Birth(ddmmyyyy): ");
    scanf("%d", &DoB);
    int date[8];
    for(int i = 7; DoB>0; i--){
        date[i] = DoB % 10;
        DoB /= 10;
    }
    int *ptr = date;
    printf("Forward\n");
    for(int i = 0; i<8; i++){
        printf("%d ", *ptr);
        ptr++;
    }
    printf("\nBackward\n");
    int *p = &date[7];
    for(int i = 0; i<8; i++){
        printf("%d ", *p);
        p--;
    }
    return 0;
}