#include <stdio.h>

int main() {
    int n, i;
    long long a = 0, b = 1, c;

    printf("Enter n: ");
    scanf("%d", &n);

    if(n == 0)
        printf("0");
    else if(n == 1)
        printf("1");
    else {
        for(i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%lld", b);
    }

    return 0;
}