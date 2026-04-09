#include <stdio.h>
#include<string.h>

int main()
{
    char str[50];

    printf("Enter the file name: ");
    scanf("%s", str);

    int length = strlen(str);
    
    if(length > 4 && strcmp(str + length - 4, ".jpg") == 0){
        printf("file name format is valid");
    }
    else{
        printf("file name format is invalid");
    }
    return 0;
}
