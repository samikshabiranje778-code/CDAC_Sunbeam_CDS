#include<stdio.h>
int findmax(int arr[], int size)
{
int max = arr[0];

   for( int i=0; i<size;i++)
{
if(arr[i]>max)

 max=arr[i];
}
 return max;
}

int findmin(int arr[], int size)
{
int min = arr[0];

for( int i=0; i<size;i++)
{
if(arr[i]<min)

min=arr[i];
}
return min;
}




int main()
{
int size;
printf("enter the size of array:");

scanf("%d",&size);

 int arr[size];

printf("enter the array element:\n");

for(int i=0; i<size;i++)
{
scanf("%d",&arr[i]);
}
printf("maximum=%d\n",findmax(arr,size));
printf("minmum=%d",findmin(arr,size));
return 0;
}




