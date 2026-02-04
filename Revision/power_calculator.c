#include<stdio.h>
int main()
{
    int base, exp;
    printf("Enter the base and exponent: ");
    scanf("%d %d", &base, &exp);

    float tot = 1.0;
    if(exp<0){
        exp = -exp;
        for(int i = 0; i<exp; i++){
            tot *= base;
        }
        tot = 1/tot;
    }
    else{
       for(int i = 0; i<exp; i++){
            tot *= base;
        }
    }
    printf("%f", tot);
    return 0;
}