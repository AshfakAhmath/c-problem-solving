#include <stdio.h>
struct Doctor{
    char name[20];
    char specialization[50];
};

struct Patient{
    int id;
    char name[20];
    struct Doctor doc;
};

union store{
    int roomNumber;
    float fee;
};

void updateStruct(struct Patient *p)
{
    p->id = 102;
}

int main( )
{
    struct Patient p1 = {101, "Aakil Ahamed", {"Ashfak Ahmath", "Surgen"}};
    union store a;
    a.fee = 10000.45;
    printf("\nBefore Update Patient Details\n");
    printf("Patient Id: %d\n", p1.id);
    printf("Patient Name: %s\n", p1.name);
    printf("Patient's Doctor Name: %s\n", p1.doc.name);
    printf("Patient's Doctor specialization: %s\n", p1.doc.specialization);
    printf("Patient's Fee: %.2f\n", a.fee);

    updateStruct(&p1);

    printf("\nUpdate Patient Details\n");
    printf("Patient Id: %d\n", p1.id);
    printf("Patient Name: %s\n", p1.name);
    printf("Patient's Doctor Name: %s\n", p1.doc.name);
    printf("Patient's Doctor specialization: %s\n", p1.doc.specialization);
    printf("Patient's Fee: %.2f\n", a.fee);
    return 0;
}