#include <stdio.h>
int *min(int *p, int size)
{
    int *mini = p;
    for(int i = 1; i<size; i++){
        if(*(p + i)<*mini){
            mini = p + i;
        }
    }
    return mini;
}
int main()
{
    int N;
    printf("Enter the number of subjects: ");
    scanf("%d", &N);
    int marks[N];
    printf("\nEnter the marks: \n");
    for(int i = 0; i<N; i++){
        scanf("%d", &marks[i]);
    }
    int *result = min(marks, N);
    printf("Minimum mark for %d subject is %d\n", N, *result);
    int index = result - marks;
    printf("Index is %d", index);
    return 0;
}
