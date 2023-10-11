#include<stdio.h>
#include<conio.h>
main()
{  //print sorry if no. is prime.
	int a;
	int p=1; //p=prime number
	printf("\n\t\t\t   DIVISORS OF COMPOSITE NUMBER\n\t\t\t   ____________________________\n\n\n  Enter any composite number: ");
	scanf("%d",&a);
	for(int i=2;i<a;i++)
	{
		if(a%i==0)
		{
			p=0;
			break;
		}
	}
	if(p==1)
	printf("\n\n\tSorry! You entered prime number.");
	else if(p==0)
	{
		printf("\n\n\n\t\t\t ---------------------------\n\t\t\t|    \t\t            |\n\t\t\t|\tDivisors Of %d\t    |\n\t\t\t|  _______________________  |\n\t\t\t|\t\t\t    |\n",a);
		for(int j=1;j<=a;j++)
		{
			if(a%j==0)
			printf("\t\t\t|\t       %d\t    |\n",j);
		}
		printf("\t\t\t|    \t\t            |\n\t\t\t ---------------------------");
	}
}
