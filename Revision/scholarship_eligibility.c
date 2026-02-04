#include<stdio.h>
int main()
{
    float gpa;
    printf("Enter the GPA(0 - 4): ");
    scanf("%f", &gpa);

    float income;
    printf("Enter the family income: ");
    scanf("%f", &income);

    int extra;
    printf("Extracurricular participation (1 for yes, 0 for no): ");
    scanf("%d", &extra);

    if(gpa >= 3.5){
        if(income<50000){
            if(extra == 1){
                printf("Full Scholarship");
            }
            else{
                printf("50%% Scholarship");
            }
        }
        else{
            printf("25%% Scholarship");
        }
    }
    else{
        printf("Not eligible");
    }
    return 0;
}
