#include <stdio.h>
int countDigit(int n);

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int result = countDigit(num);
    printf("%d", result);
    return 0;
}

int countDigit(int n){
    if(n == 0)
        return 0;
    else
        return 1 + countDigit(n/10);
}
