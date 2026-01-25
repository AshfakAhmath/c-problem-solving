#include <stdio.h>
void update(int digit, int *p, int size)
{
    digit %= 10;
    for(int i = 0; i<size; i++){
        *(p + i) += digit;
    }
}
int main()
{
    int index, N;
    printf("Enter the index number: ");
    scanf("%d", &index);
    printf("Enter the number of subject: ");
    scanf("%d", &N);
    int marks[N];
    for(int i = 0; i<N; i++){
        scanf("%d", &marks[i]);
    }
    update(index, marks, N);
    printf("\nUpdated Marks\n");
    for(int i = 0; i<N; i++){
        printf("%d ", marks[i]);
    }
    return 0;
}