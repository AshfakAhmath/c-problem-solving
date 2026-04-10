#include <stdio.h>
int fun(int n, int a);

int main()
{
    int num, num1;
    printf("Enter the base and exp: ");
    scanf("%d %d", &num, &num1);

    int result = fun(num, num1);
    printf("%d", result);
    return 0;
}

int fun(int n, int a){
    if(a == 0)
        return 1;
    else
        return n * fun(n, a-1);
}
