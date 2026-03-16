#include <stdio.h>
#include <string.h>

int main()
{
    char fileName[50];
    char archive[50];
    char preview[11];
    
    printf("Enter the file name: ");
    fgets(fileName, sizeof(fileName), stdin);
    fileName[strcspn(fileName, "\n")] = '\0';
    
    if(strlen(fileName) > 30)
    {
        printf("Invalid input. File name must not exceed 30 characters.\n");
    }
    else
    {
        strcpy(archive, fileName);
        strncpy(preview, fileName, 10);
        preview[10] = '\0';
        
        printf("File Name - %s\n", fileName);
        printf("Archive - %s\n", archive);
        printf("Preview - %s\n", preview);
    }

    return 0;
}