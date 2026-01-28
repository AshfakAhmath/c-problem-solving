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
    printf("Reg No   : %s\nName     :c%s\nProgram  : %s\nValid Upto: %d\n", student1.regNo, student1.name, student1.degree, student1.year);
    printf("------------------------\n");
    return 0;
}