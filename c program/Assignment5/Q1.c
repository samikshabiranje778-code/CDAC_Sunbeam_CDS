//Q1
#include<stdio.h>
int main()
{
int n,key,found;
printf("Enter the size of array:");
scanf("%d",&n);

int arr[n];

int *ptr = arr;
 printf("Enter the array elements:\n");

for(int i=0; i<n; i++)
{
scanf("%d",ptr+i);
}
printf("Enter element for search:"); 

  scanf("%d",&key);
for(int i=0; i<n; i++)
{

if(*(ptr+i)==key)
{
printf("position of element:%d\n",ptr+i);
found=1;
break;
}
{
if(!found)

printf(" element not found");
return 0;

}
}


