#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[] = "admin";
    char str1[20], str2[20];

    printf("Enter the username: ");
    scanf("%s", str1);  
  
    for(int i = 0; str1[i] != '\0'; i++){
        str2[i] = tolower(str1[i]);
    }
    str2[i] = '\0';  

    if(strcmp(str2, str) == 0){
        printf("Login is successful\n");
    }
    else{
        printf("Invalid username\n");
    }

    return 0;
}