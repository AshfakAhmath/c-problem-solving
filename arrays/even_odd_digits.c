#include <stdio.h>

int main()
{
    int N;
    // Read number of elements
    scanf("%d", &N);

    int arr[N];

    // Read array elements
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }

    // Check even or odd
    for(int i = 0; i < N; i++){
        if(arr[i] % 2 == 0){
            printf("%d is Even\n", arr[i]);
        }
        else{
            printf("%d is Odd\n", arr[i]);
        }
    }

    return 0;
}