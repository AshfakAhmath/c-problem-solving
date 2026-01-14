#include <stdio.h>
void countEvenOdd(int arr[], int size, int *evenCount, int *oddCount) {
    *evenCount = 0;
    *oddCount = 0;

    for(int i = 0; i < size; i++){
        if(arr[i] % 2 == 0)
            (*evenCount)++;
        else
            (*oddCount)++;
    }
}

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int even, odd;
    countEvenOdd(arr, 6, &even, &odd);
    printf("Number of even elements = %d\n", even);
    printf("Number of odd elements = %d\n", odd);
    return 0;
}