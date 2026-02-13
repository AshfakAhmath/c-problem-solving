#include<stdio.h>
struct Patient{
    int patientId;
    char name[20];
    int age;
    char diagnosis[20];
};

int main()
{
    struct Patient p1;
    struct Patient *ptr = &p1;

    printf("Enter the patient id: ");
    scanf("%d", &ptr->patientId);

    printf("Enter the patient name: ");
    scanf(" %[^\n]", ptr->name);

    printf("Enter the patient age: ");
    scanf("%d", &ptr->age);

    printf("Enter the patient diagnosis: ");
    scanf(" %[^\n]", ptr->diagnosis);

    printf("Id\tName\tAge\tDiagnosis\n");
    printf("----------------------------------\n");
    printf("%d\t%s\t%d\t%s\n", ptr->patientId, ptr->name, ptr->age, ptr->diagnosis);

    printf("\nEnter the updated age: ");
    scanf("%d", &ptr->age);

    printf("Id\tName\tAge\tDiagnosis\n");
    printf("---------------------------------\n");
    printf("%d\t%s\t%d\t%s\n", ptr->patientId, ptr->name, ptr->age, ptr->diagnosis);
    return 0;
}
