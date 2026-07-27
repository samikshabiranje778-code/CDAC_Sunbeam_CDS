#include<stdio.h>
int i,j;

void add_Matrics(int A[3][3] ,int B[3][3],int R[i][j])
{int i,j;


for ( i = 0; i < 3; i++)
{
    for (j = 0; j < 3; j++)
    {
 R[i][j] = A[i][j]+ B[i][j];
    }
}

printf("addition of mitrics\n");

for ( i = 0; i < 3; i++)
{
    for (j = 0; j < 3; j++)
    {
        printf("%4d",R[i][j]);
        printf("\n");
    }
}
}

void sub_Matrics(int A[3][3] ,int B[3][3] ,int R[i][j])
{
 int i,j;
 

for ( i = 0; i < 3; i++)
{
    for (j = 0; j < 3; j++)
    {
 R[i][j] = A[i][j] - B[i][j];
    }
}

printf("Subtraction of mitrics\n");
for ( i = 0; i < 3; i++)
{
    for (j = 0; j < 3; j++)
    {
        printf("%4d",R[i][j]);
        printf("\n");
    }
}
}
void Mul_Matrics(int A[3][3] ,int B[3][3], int R[i][j])
{
 int i,j,k;
 

for ( i = 0; i < 3; i++)
{
    for (j = 0; j < 3; j++)
    {
         for (k = 0; k < 3; k++)
    {
 R[i][j] = A[i][k] * B[k][j];
    }
}
}

printf("Subtraction of mitrics\n");

for ( i = 0; i < 3; i++)
{
    for (j = 0; j < 3; j++)
    {
        printf("%4d",R[i][j]);
        printf("\n");
    }
}
}
int main()
{
int A[3][3] ;int B[3][3];
int i,j;
int R[i][j];

printf("enter the array elements:A\n");

for ( i = 0; i < 3; i++)
{
    for (j = 0; j < 3; j++)
    {

scanf("%d",&A[i][j]);
    }

}
printf("enter the array elements:B\n");
for ( i = 0; i < 3; i++)
{
    for (j = 0; j < 3; j++)
    {

scanf("%d",&B[i][j]);
    }
}
 add_Matrics(A,B,R);
 sub_Matrics(A,B,R);
Mul_Matrics(A,B,R);
 return 0;
 
}
