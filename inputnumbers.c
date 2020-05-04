#include <stdio.h>
int main()
{
    int testInteger;
    float num1;
    double num2;

    printf("Enter an integer: ");
    scanf("%d", &testInteger);  
    printf("Number = %d\n",testInteger);

    printf("Enter a real (float) number: ");
    scanf("%f", &num1);
    printf("Enter a real (double) number: ");
    scanf("%lf", &num2);

    printf("num1 = %f\n", num1);
    printf("num2 = %lf\n", num2);

    return 0;
}
