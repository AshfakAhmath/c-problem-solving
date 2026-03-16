#include <stdio.h>
#include <string.h>

int main()
{
    char productCode[20];
    char log[20];
    char database[7];

    printf("Enter the product code: ");
    scanf("%s", productCode);

    if(strlen(productCode) < 6)
    {
        printf("Invalid input. Product code must be at least 6 characters.\n");
    }
    else
    {
        strcpy(log, productCode);
        strncpy(database, productCode, 6);
        database[6] = '\0';

        printf("Original Product Code: %s\n", productCode);
        printf("System Log Copy: %s\n", log);
        printf("Database Stored Code: %s\n", database);
    }

    return 0;
}