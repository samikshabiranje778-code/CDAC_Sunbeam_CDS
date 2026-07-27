//Q2
#include<stdio.h>
void fibonaci(int n)

{int a=0,b=1,c,i;

for(i=0; i<=n; i++)
{
printf("%d",a);
c=a+b;
a=b;
b=c;
}
}
int main()
{
int  n;
printf("Enter number of term:");
scanf("%d",&n);
fibonaci(n);
return 0;
}
