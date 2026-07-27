//Q2
#include<stdio.h>
int main()

{
int n,i;
int even=0,odd=0;
    printf("Enter the size of array:");
     scanf("%d",&n);


 int arr[n];

int *ptr = arr;
 printf("Enter the array elements:\n");

for(int i=0; i<n; i++)
{
    scanf("%d",ptr+i);
}
for(i=0; i<n; i++)
{

if(*(ptr+i)%2==0)

 even++;
else
 odd++;
}
printf("even= %d \n",even);
printf("odd= %d \n",odd);
return 0;
}



