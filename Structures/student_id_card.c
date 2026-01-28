#include <stdio.h>
struct studentId {
    char regNo[20];
    char name[20];
    char degree[10];
    int year;
};

int main()
{
    struct studentId student1 = {"IT2024/001", "Kumari Silva", "IT", 2027};
    printf("\n------------------------\n");
    printf("Reg No   : %s\n", student1.regNo);
    printf("Name     : %s\n", student1.name);
    printf("Program  : %s\n", student1.degree);
    printf("Valid Upto: %d\n", student1.year);
    return 0;
}