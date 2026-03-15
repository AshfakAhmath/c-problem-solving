#include<stdio.h>
#include<string.h>

int main()
{
    char accNo[20];
    char partial[5];
    printf("Enter the Account Number: ");
    scanf("%s", accNo);

    if(strlen(accNo) < 8)
    {
        printf("Account number must contain at least 8 characters.\n");
    }
    esle
    {
        strncpy(partial, accNo, 4);
        partial[4] = '\0';

        int x = strlen(accNo) - 4;

        printf("Masked Account Number: %s", partial);
        for(int i = 0; i < x; i++)
        {
            printf("X");
        }
        printf("\n");
    }
    return 0;
}
