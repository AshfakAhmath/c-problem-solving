#include<stdio.h>
int main()
{
    float hours, charge;
    printf("Enter the hours parking: ");
    scanf("%f", &hours);

    if(hours<=2){
        charge = 50;
    }
    else{
        charge = 50 + (hours - 2) * 20;
    }
    printf("Total parking charge is %.2f", charge);
    return 0;
}
