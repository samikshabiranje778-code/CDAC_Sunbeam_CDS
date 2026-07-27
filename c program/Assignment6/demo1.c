#include <stdio.h>

int main()
{
    int n, i;
    int even = 0, odd = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    for(i = 0; i < n; i++)
    {
        if(*(ptr + i) % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even = %d\n", even);
    printf("Odd = %d\n", odd);

    return 0;
}