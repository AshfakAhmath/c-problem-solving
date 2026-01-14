#include <stdio.h>
void multiply(int *a, int *b) {
    *a = (*a) * (*b);  
}

int main() {
    int x = 5, y = 4;
    printf("Before multiplication: x = %d, y = %d\n", x, y);
    multiply(&x, &y); 
    printf("After multiplication: x = %d, y = %d\n", x, y);
    return 0;
}