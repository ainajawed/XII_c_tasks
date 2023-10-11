#include<stdio.h>
#include<conio.h>
main()
{
	printf("\t\t\t\tCONVERTER\n\t\t\t\t---------\n\t\t___________________________________________\n\n\t\t\t\t   MENU\n\t\t\t\t   ----\n\n\t\t    (a) Kilogram/Gram\n\t\t\t-------------\n\n\t\t\t1. KG--> G\n\t\t\t2. G--> KG\n\n\n\t\t    (b) Celsius/Kelvin\n\t\t\t--------------\n\n\t\t\t1. C-->K\n\t\t\t2. K-->C\n\n\t\t___________________________________________ \n\n\n");
	char mt;
	printf("\nFollowing the menu");
	printf("\n\nEnter the unit: ");
	scanf("%c",&mt);
	if(mt=='a')
	{
		float a;
		int ca;
		printf("\nEnter the value: ");
		scanf("%f",&a);
		printf("Enter choice of conversion: ");
		scanf("%d",&ca);
		switch (ca)
		{
			case 1:
				printf("\n\tThe value of %.2f in Gram= %.2f",a,a*1000);
				break;
				case 2:
					printf("\n\tThe value of %.2f in Kilogram= %.2f",a,a/1000);
					break;
					default:
						printf("\n\tInvalid Input");
		}
	}
	else if(mt=='b')
	{
		int b;
		int cb;
		printf("\nEnter the value: ");
		scanf("%d",&b);
		printf("Enter choice of conversion: ");
		scanf("%d",&cb);
		switch (cb)
		{
			case 1:
				printf("\n\tThe value of %d in Kelvin= %d",b,b+273);
				break;
				case 2:
					printf("\n\tThe value of %d in Celsius= %d",b,b-273);
					break;
					default:
						printf("\n\tInvalid Input");
			
		}
	}
	else 
	printf("\n\tInvalid Input");
}
