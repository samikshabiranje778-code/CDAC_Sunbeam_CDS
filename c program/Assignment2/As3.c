#include <stdio.h>

void printPrime(int start, int end)
{
    int i, j, flag;

    for(i = start; i <= end; i++)
    {
        flag = 1;

        if(i <= 1)
            flag = 0;

        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if(flag)
            printf("%d ", i);
    }
}

int main()
{
    int start, end;

    printf("Enter start and end: ");
    scanf("%d%d", &start, &end);

    printPrime(start, end);

    return 0;
}