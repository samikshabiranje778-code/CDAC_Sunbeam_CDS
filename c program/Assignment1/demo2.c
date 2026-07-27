#include<stdio.h>
int main()
{
	float a,b;
	printf("\nenter numbers a:");
		scanf("%f ",&a);
		printf("\nenter numbers b:");
	scanf("%f ",&b);
	if(b==0)
	printf("erore: num is divide by zero is not alowd");
	else
	printf("division= %.2f",a/b);
	
}

