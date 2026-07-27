#include <stdio.h>

int divide(double a, double b, double *result)
{
    if(b == 0)
        return 1;   // Error

    *result = a / b;
    return 0;       // Success
}

int main()
{int a,b;
    double ans;
printf("enter a and b:");
scanf("%d %d ",&a,&b);


    if(divide(a, b, &ans) == 0)
        printf("Result = %.2lf\n", ans);
    else
        printf("Error: Division by zero!\n");

    return 0;
}