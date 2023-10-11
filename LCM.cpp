#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("\n\n \tLCM OF TWO NUMBERS\n \n Enter First number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	c=a*b;
	for(int i=1;i<=c;i++)
	{
		if(c%i==0&&i%a==0&&i%b==0)
		{
			printf("The lcm of numbers is %d",i);
			break;
		}
	}
}
