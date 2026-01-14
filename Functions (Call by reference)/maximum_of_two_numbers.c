#include <stdio.h>
void findMax(int *a, int *b, int *max) {
    if (*a > *b)
        *max = *a;
    else
        *max = *b;
}

int main() {
    int x = 15, y = 25;
    int maximum; 
    printf("Numbers: x = %d, y = %d\n", x, y);
    findMax(&x, &y, &maximum); 
    printf("Maximum number = %d\n", maximum);
    return 0;
}