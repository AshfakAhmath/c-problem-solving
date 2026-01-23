#include <stdio.h>
int main()
{
    char type[20];
    scanf("%[^\n]", type);
    printf("Hello, World!\n%s", type);
    return 0;
}
