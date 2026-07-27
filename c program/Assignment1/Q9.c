#include <stdio.h>

int main() {
    int base, index, i;
    long long power = 1;

    printf("Enter base and index: ");
    scanf("%d %d", &base, &index);

    for(i = 1; i <= index; i++)
        power *= base;

    printf("Power = %lld", power);

    return 0;
}