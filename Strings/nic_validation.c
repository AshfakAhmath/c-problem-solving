#include<stdio.h>
#include<string.h>

int main()
{
    char nic[20];
    char verifiedRecord[20];
    char regionCode[6];

    printf("Enter the NIC no: ");
    scanf("%s", nic);

    if(strlen(nic) == 10)
    {
        strcpy(verifiedRecord, nic);
        strncpy(regionCode, nic, 5);
        regionCode[5] = '\0';

        printf("NIC is valid\n");
        printf("Verified Record: %s\n", verifiedRecord);
        printf("Region Code: %s\n", regionCode);
    }
    else
    {
        printf("The NIC no is not 10 characters. So, Invalid\n");
    }

    return 0;
}