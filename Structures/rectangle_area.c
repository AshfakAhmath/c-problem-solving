#include<stdio.h>
struct Rectangle{
    float length;
    float width;
};
float area(struct Rectangle s){
    return s.length * s.width;
}
int main()
{
    struct Rectangle a = {10.12, 5.14};
    float result = area(a);
    printf("Area of Rectangle = %.2f\n", result);
    return 0;
}