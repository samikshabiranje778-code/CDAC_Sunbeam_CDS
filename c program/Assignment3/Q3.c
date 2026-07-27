#include <stdio.h>

void sumProduct(int a, int b, int *sum, int *product)
{
    *sum = a + b;
    *product = a * b;
}

int main()
{
    int s, p,a,b;
printf("enter a and b:");
scanf("%d %d ",&a ,&b);


    sumProduct(a, b, &s, &p);

    printf("Sum = %d\n", s);
    printf("Product = %d\n", p);

    return 0;
}