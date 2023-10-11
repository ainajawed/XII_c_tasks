#include<stdio.h>
#include<conio.h>
main()
{
	float a,b;
	char ca;
	printf("Enter first number: ");
	scanf("%f",&a);
	printf("Enter second number: ");
	scanf("%f",&b);
	printf("Enter operator: ");
	ca=getche();
	if(ca=='+')
	printf("\n\n\t%.2f+%.2f= %.2f",a,b,a+b);
	else if(ca=='-')
	printf("\n\n\t%.2f-%.2f= %.2f",a,b,a-b);
	else if(ca=='*')
	printf("\n\n\t%.2fx%.2f= %.2f",a,b,a*b);
	else if(ca=='/'&& b!=0)
	printf("\n\n\t%.2f/%.2f= %.2f",a,b,a/b);
	else
	printf("Invalid input");
}
