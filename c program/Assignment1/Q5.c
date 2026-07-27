#include <stdio.h>

int main() {
    float a, b;
    char op;

    printf("Enter expression : ");
    scanf("%f %c %f", &a, &op, &b);

    switch(op) {
        case '+': printf("Result = %.2f", a + b); break;
        case '-': printf("Result = %.2f", a - b); break;
        case '*': printf("Result = %.2f", a * b); break;
        case '/':
            if (b == 0)
                printf("Division by zero error");
            else
                printf("Result = %.2f", a / b);
            break;
        default:
            printf("Invalid Operator");
    }

    return 0;
}


