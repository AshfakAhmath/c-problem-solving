#include<stdio.h>
int main()
{
    long long num;
    printf("Enter the number: ");
    scanf("%lld", &num);

    int occ_digit;
    printf("Enter the occurence digit: ");
    scanf("%d", &occ_digit);

    int count = 0, digit;
    while(num != 0){
        digit = num % 10;
        if(digit == occ_digit){
            count++;
        }
        num /= 10;
    }
    printf("Number %d found on %d places.", occ_digit, count);
    return 0;
}
