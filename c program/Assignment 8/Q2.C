#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *ptr;
    int i;

    ptr = (float *)malloc(5 * sizeof(float));

    if(ptr == NULL)
    {
        printf("Memory not allocated");
        return 0;
    }

    printf("Enter marks of 5 students:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%f", &ptr[i]);
    }

    printf("\nMarks are:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%.2f\n", ptr[i]);
    }

    free(ptr);

    return 0;
}