#include <stdio.h>

int main()
{
    int N;  // How many numbers
    scanf("%d", &N);

    int arr[N], temp;  // The numbers go here, temp is for swapping

    // Get the numbers from the user
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }

    // Sort the numbers from smallest to biggest
    for(int i = 0; i < N-1; i++){
        int smallest = i;  // Assume this one is smallest

        // Look for a smaller number in the rest
        for(int j = i+1; j < N; j++){
            if(arr[j] < arr[smallest]){
                smallest = j;  // Found a smaller one
            }
        }

        // Swap the smallest with current number
        temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;
    }

    // Show the sorted numbers
    for(int i = 0; i < N; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}