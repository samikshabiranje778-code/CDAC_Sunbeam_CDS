//Q3
#include<stdio.h>
int main()
{
int n,i,sum=0;

printf("Enter the size of array:");
scanf("%d",&n);

int arr[n];

int *ptr = arr;
 printf("Enter the array elements:\n");

for(int i=0; i<n; i++)
{
scanf("%d",ptr+i);
sum+=*(ptr+i);
}
printf("sum of element:%d\n",sum);
return 0;
}
