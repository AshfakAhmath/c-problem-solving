#include<stdio.h>
int main()
{
    int count = 0;
    char name[20];
    printf("Enter the full name: ");
    scanf(" %[^\n]", name);
    char *ptr = name;
    for(int i = 0; ptr[i] != '\0'; i++){
        if(ptr[i] != ' '){
            count++;
        }
    }
    printf("Number of characters without space is %d\n", count);
    for(int i = 0; ptr[i] != '\0'; i++){
        if(i % 2 == 0){
            printf("%c ", ptr[i]);
        }
    }
    return 0;
}