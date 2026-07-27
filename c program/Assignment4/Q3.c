#include<stdio.h>
void reverse(int arr[],int size);
{
int start = 0;
int temp;
int end = size-1;

while(start<end)
 {
temp=a[end];
arr[start]=arr[end];
arr[end]=temp;

start++;
end--;
 }
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
 reverse(arr,size);
printf("reverse array");
 
for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}

