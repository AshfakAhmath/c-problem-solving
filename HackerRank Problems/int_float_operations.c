#include <stdio.h>

int main()
{
	int num1, num2;
    float a, b;
    scanf("%d %d", &num1, &num2);
    scanf("%f %f", &a, &b);
    printf("%d %d\n", num1 + num2, num1 - num2);
    printf("%.1f %.1f", a + b, a - b);
    return 0;
}
