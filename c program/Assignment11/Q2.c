#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int key, occ;
    int count = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    printf("Enter occurrence number: ");
    scanf("%d", &occ);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            count++;

            if(count == occ)
            {
                printf("Index = %d\n", i);
                return 0;
            }
        }
    }

    printf("-1\n");

    return 0;
}