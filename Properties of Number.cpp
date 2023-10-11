#include<stdio.h>
#include<conio.h>
void even_odd(int a);
void pos_neg(int b);
void prime_comp(int c);
main()
{
	int a,b,c,d;
	printf("\n\t\t\t%cPROPERTIES OF NUMBERS%c\n\t\t\t=======================\n\n\n",4,4);
	printf("   ENTER NUMBERS: \n\n   %c ",175);
	scanf("%d",&a);
	printf("\t-------------------------\n");
	printf("\n\t%c ",248);
	even_odd(a);
	printf("\n\t%c ",248);
	pos_neg(a);
	printf("\n\t%c ",248);
	prime_comp(a);
	printf("\n\n\t-------------------------\n\n");
	printf("\n\n   %c ",175);
	scanf("%d",&b);
	printf("\t-------------------------\n");
	printf("\n\t%c ",248);
	even_odd(b);
	printf("\n\t%c ",248);
	pos_neg(b);
	printf("\n\t%c ",248);
	prime_comp(b);
	printf("\n\n\t-------------------------\n\n");
	printf("\n\n   %c ",175);
	scanf("%d",&c);
	printf("\t-------------------------\n");
	printf("\n\t%c ",248);
	even_odd(c);
	printf("\n\t%c ",248);
	pos_neg(c);
	printf("\n\t%c ",248);
	prime_comp(c);
	printf("\n\n\t-------------------------\n\n");
	printf("\n\n   %c ",175);
	scanf("%d",&d);
	printf("\t-------------------------\n");
	printf("\n\t%c ",248);
	even_odd(d);
	printf("\n\t%c ",248);
	pos_neg(d);
	printf("\n\t%c ",248);
	prime_comp(d);
	printf("\n\n\t-------------------------\n\n");
	printf("\n\t\t\t\t~END~\n\t\t\t\t=====");
}
void even_odd(int a)
{
	if(a>0)
	{
		if(a%2==0)
		printf("%d is Even",a);
		else if(a%2!=0)
		printf("%d is Odd",a);
	}
	else 
	printf("Invalid Input");
}
void pos_neg(int b)
{
	if(b>0)
	printf("%d is Positive",b);
	else if(b<0)
	printf("%d is Negative",b);
	else 
	printf("Neither Positive Nor Negative.");
}
void prime_comp(int c)
{
	if(c>0)
	{
		int p=0;
		for(int i=1;i<c;i++)
		{
			if(c%i==0)
			p=p+1;
		}
		if(p==1)
		printf("%d is Prime Number",c);
		else
		printf("%d is Composite Number",c);
	}
	else
	printf("Invalid Input");
}
