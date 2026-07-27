//Q1
#include<stdio.h>
int main()
{
int marks[5];
 int sum=0,i;
float avg;
printf("enter the marks of five subjects:\n");

for(i=0 ; i<5; i++)
{
scanf("%d",&marks[i]);

sum  =sum + marks[i];
}
avg=sum/5.0;

printf("Average marks");

printf("Average marks=%.2f\n",avg);
return 0;
}

