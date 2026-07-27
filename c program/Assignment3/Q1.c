#include <stdio.h>

double calculate(double a, double b, char op)
{
    switch(op)
    {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
        default:
            printf("Invalid operator!\n");
            return 0;
    }
}

int main()
{
    double num1, num2;
    char op;

    printf("Enter expression (ex 10 + 5): ");
    scanf("%lf %c %lf", &num1, &op, &num2);

    printf("Result = %.2lf\n", calculate(num1, num2, op));

    return 0;
}