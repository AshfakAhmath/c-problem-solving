#include <stdio.h>
void update(int *p, int size)
{
    for(int i = 0; i<size; i++){
        *(p + i) += (*(p + i) * 5)/100;
    }
}
int main()
{
    int N;
    printf("Enter the number of subject: ");
    scanf("%d", &N);
    int marks[N];
    printf("Enter the marks:\n");
    for(int i = 0; i<N; i++){
        scanf("%d", &marks[i]);
    }
    update(marks, N);
    printf("\nUpdated Marks\n");
    for(int i = 0; i<N; i++){
        printf("%d ", marks[i]);
    }
    return 0;
}
