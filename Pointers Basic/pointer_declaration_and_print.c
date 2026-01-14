#include <stdio.h>
int main()
{
    int num = 10;
    int *p = &num;

    printf("Value of the variable = %d\n", num);
    printf("Address of the variable = %p\n", &num);
    printf("Value stored in the pointer = %d\n", p);
    printf("Value pointed to by the pointer = %p\n", *p);
    return 0;
}