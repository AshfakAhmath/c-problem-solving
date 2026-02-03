#include <stdio.h>
struct Employee {
    int id;
    float salary;
};

void incrementSalary(struct Employee *e){
    e->salary += (e->salary * 10)/100;
}
int main( )
{
    struct Employee e1 = {101, 100000.50};
    incrementSalary(&e1);
    printf("The increment salary is %.2f\n", e1.salary);
    return 0;
}