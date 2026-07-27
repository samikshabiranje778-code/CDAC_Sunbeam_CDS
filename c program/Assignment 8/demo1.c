#include <stdio.h>

void add(int A[3][3], int B[3][3], int R[3][3])
{
    int i, j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            R[i][j] = A[i][j] + B[i][j];
        }
    }
}

void subtract(int A[3][3], int B[3][3], int R[3][3])
{
    int i, j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            R[i][j] = A[i][j] - B[i][j];
        }
    }
}

void multiply(int A[3][3], int B[3][3], int R[3][3])
{
    int i, j, k;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            R[i][j] = 0;

            for(k = 0; k < 3; k++)
            {
                R[i][j] = R[i][j] + A[i][k] * B[k][j];
            }
        }
    }
}

void display(int R[3][3])
{
    int i, j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", R[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int A[3][3], B[3][3], R[3][3];
    int i, j;

    printf("Enter Matrix A:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter Matrix B:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    printf("\nAddition:\n");
    add(A, B, R);
    display(R);

    printf("\nSubtraction:\n");
    subtract(A, B, R);
    display(R);

    printf("\nMultiplication:\n");
    multiply(A, B, R);
    display(R);

    return 0;
}