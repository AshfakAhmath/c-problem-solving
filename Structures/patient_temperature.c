#include <stdio.h>

struct patientInfo {
    char id[10];
    char name[20];
    int age;
    float temperature;
};

int main()
{
    int N, count = 0, max = 0;

    printf("Enter the number of patients: ");
    scanf("%d", &N);

    struct patientInfo patient[N];

    for(int i = 0; i < N; i++)
    {
        scanf("%s", patient[i].id);
        scanf(" %[^\n]", patient[i].name);
        scanf("%d", &patient[i].age);
        scanf("%f", &patient[i].temperature);

        if(patient[i].temperature > 37.5)
            count++;

        if(patient[i].temperature > patient[max].temperature)
            max = i;
    }

    printf("\nPatient Details:\n");
    for(int i = 0; i < N; i++)
    {
        printf("Patient ID   : %s\n", patient[i].id);
        printf("Patient Name : %s\n", patient[i].name);
        printf("Patient Age  : %d\n", patient[i].age);
        printf("Temperature  : %.2f\n", patient[i].temperature);
    }

    printf("Number of patients with fever: %d\n", count);

    printf("\nPatient with highest temperature:\n");
    printf("ID: %s\n", patient[max].id);
    printf("Name: %s\n", patient[max].name);
    printf("Temperature: %.2f\n", patient[max].temperature);

    return 0;
}
