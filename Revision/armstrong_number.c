#include<stdio.h>
int main()
{
    int num, digit,digit_value = 1, temp, count = 0, arm = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    temp = num;
    while(temp != 0){
        temp /= 10;
        count++;
    }
    temp = num;
    while(temp != 0){
        digit = temp % 10;
        for(int i = 0; i<count; i++){
            digit_value *= digit;
        }
        arm += digit_value;
        digit_value = 1;
        temp /= 10;
    }
    if(arm == num){
        printf("%d is Armstrong number", num);
    }
    else{
        printf("%d is not Armstrong number", num);
    }
    return 0;
}
