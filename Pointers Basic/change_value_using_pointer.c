#include <stdio.h>

int main() {
    int num = 10;  
    int *p = &num;      

    printf("Value before modification: %d\n", num);

    *p = 25;          

    printf("Value after modification: %d\n", num);

    return 0;
}