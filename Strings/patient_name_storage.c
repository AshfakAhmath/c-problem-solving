#include<stdio.h>
#include<string.h>

int main()
{
    char original[51];
    char backup[51];
    char summary[21];

    printf("Enter the name: ");
    fgets(original, sizeof(original), stdin);
    original[strcspn(original, "\n")] = '\0';

    strcpy(backup, original);
    strncpy(summary, original, 20);
    summary[20] = '\0';

    printf("Original name - %s\n", original);
    printf("Backup name - %s\n", backup);
    printf("summary name - %s\n", summary);
    return 0;
}
