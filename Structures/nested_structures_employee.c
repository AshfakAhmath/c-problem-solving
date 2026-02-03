#include<stdio.h>
struct Date{
    int day;
    int month;
    int year;
};

struct Employee{
    int id;
    char name[20];
    struct Date joinDate;
};

int main()
{
    struct Employee e1 = {101, "Ashfak Ahmath", {12, 11, 2025}};
    printf("\nEmployee Full Details\n");
    printf("Employee Id: %d\n", e1.id);
    printf("Employee name: %s\n", e1.name);
    printf("Employee Join Date: %d.%d.%d\n", e1.joinDate.day, e1.joinDate.month, e1.joinDate.year);
    return 0;
}
