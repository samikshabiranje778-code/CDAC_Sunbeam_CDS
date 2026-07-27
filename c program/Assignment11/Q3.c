#include<stdio.h>  //bubbel sort

int main()
{
    int arr[50];
int i,j,flag,temp,size;

printf("enter the size of array");
scanf("%d",&size);

printf("enter the array element");  //50   40  30 20  10
                                   // [0] [1] [2] [3][4]
for ( i = 0; i < size; i++)
{
    /* code */
    scanf("%d",&arr[i]);

}
for ( i = 0; i < size-1; i++)
{//i=0//50
flag=0;
{
    for (j = 0; j < size-i-1; j++)
    {//j=0
        /* code */
        if( arr[j] > arr[j+1] )//arr[0]>arr[1]  //50>40 false

        temp=arr[j];  //temp=50

        arr[j]=arr[j+1];//arrj=40

        arr[j+1]=temp;//arr[j+1]=50    //40   50  30 20  10
        flag=1;
        
    }
   

if(flag==0)
break;
}
}
printf("sorted array\n");
for ( i = 0; i < size; i++)
{
    /* code */
    printf("%D",arr[i]);
}


}