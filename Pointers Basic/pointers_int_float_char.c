#include <stdio.h>
int main()
{
    int num = 10;
    float num1 = 2.45;
    char x = 'A';
    int *p = &num;
    float *p1 = &num1;
    char *p2 = &x;

    printf("Value = %d : Address = %p\n", *p, p);
    printf("Value = %f : Address = %p\n", *p1, p1);
    printf("Value = %c : Address = %p\n", *p2, p2);
    return 0;
}