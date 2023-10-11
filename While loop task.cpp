#include<stdio.h>
#include<conio.h>
main()
{
	int s;
	char r='y';
	printf("\n\t\t -----------------------------------\n\t\t|\t\t\t\t    |\n\t\t|\t\tMENU\t\t    |\n\t\t|\t\t----\t\t    |\n\t\t|   _____________________________   |\n\t\t|\t\t\t\t    |\n\t\t|      (1) Odd/Even\t\t    |\n\t\t|\t\t\t\t    |\n\t\t|      (2) Negative/Positive\t    |\n\t\t|\t\t\t\t    |\n\t\t|      (3) Vowel/Consonant\t    |\n\t\t|\t\t\t\t    |\n\t\t|      (4) Pass/Fail\t\t    |\n\t\t|\t\t\t\t    |\n\t\t|      (5) Grade\t\t    |\n\t\t|\t\t\t\t    |\n\t\t -----------------------------------\n");
	while(r=='y'||r=='Y')
	{
		printf("\n\n  According to given menu Enter your Selection: ");
		scanf("%d",&s);
		if(s==1)
		{
			int oe;
			printf("\n\n  1) Odd/Even:\n\n     Enter any number: ");
			scanf("%d",&oe);
			if(oe%2==0)
			printf("\n\t\t\t  %d IS EVEN\n\t\t\t_____________",oe);
			else if(oe%2!=0)
			printf("\n\t\t\t  %d IS ODD\n\t\t\t_____________",oe);
		}
		else if(s==2)
		{
			int np;
			printf("\n\n  2) Negative/Positive:\n\n     Enter any number: ");
			scanf("%d",&np);
			if (np>0)
			printf("\n\t\t\t  %d IS POSITIVE\n\t\t\t_________________",np);
			else if (np<0)
			printf("\n\t\t\t  %d IS NEGATIVE\n\t\t\t__________________",np);
			else
			printf("\n\t\t\t%d IS NEITHER NEGATIVE NOR POSITIVE\n\t\t\t__________________________________",np);
		}
		else if(s==3)
		{
			char vc;
			printf("\n\n  3) Vowel/Cosonant:\n\n     Enter any character: ");
			vc=getche();
			if (vc=='a'||vc=='A'||vc=='e'||vc=='E'||vc=='i'||vc=='I'||vc=='o'||vc=='O'||vc=='u'||vc=='U')
			printf("\n\n\t\t\t  %c IS VOWEL\n\t\t\t_______________",vc);
			else 
			printf("\n\n\t\t\t  %c IS CONSONANT\n\t\t\t_________________",vc);	
		}
		else if(s==4)
		{
			float pf;
			printf("\n\n  4) Pass/Fail:\n\n     Enter Your Percentage: ");
			scanf("%f",&pf);
			if(pf>=40&&pf<=100)
			printf("\n\t\t\t  YOU ARE PASS AT %.2f%%\n\t\t\t__________________________",pf);
			else if(pf>=0&&pf<40)
			printf("\n\t\t\t  YOU ARE FAIL AT %.2f%%\n\t\t\t__________________________",pf);
			else
			printf("\n\t\t\t  INVALID INPUT\n\t\t\t_________________");
		}
		else if(s==5)
		{
			float g;
			printf("\n\n  5) Grade:\n\n     Enter Your Percentage: ");
			scanf("%f",&g);
			if(g>=0&&g<=100)
			{
				if(g>=80)
				printf("\n\t\t\t  YOUR GRADE IS \"A1\"\n\t\t\t_____________________");
				else if(g>=70)
				printf("\n\t\t\t  YOUR GRADE IS \"A\"\n\t\t\t____________________");
				else if(g>=60)
				printf("\n\t\t\t  YOUR GRADE IS \"B\"\n\t\t\t____________________");
				else if(g>=50)
				printf("\n\t\t\t  YOUR GRADE IS \"C\"\n\t\t\t____________________");	
				else if(g>=40)
				printf("\n\t\t\t  YOUR GRADE IS \"D\"\n\t\t\t____________________");
				else
				printf("\n\t\t\t  YOUR GRADE IS \"F\"\n\t\t\t____________________");
			}
			else
			printf("\n\t\t\t  INVALID INPUT\n\t\t\t_________________");
		}
		else 
		printf("\n\n\t  SORRY! You Have Entered Wrong choice of Selection.");
		printf("\n\n    _________________________________________________________________\n\n\n    (Press \'Y\' for YES and \'N\' for NO)\n\n    Do You Want to Continue: ");
		r=getche();
		printf("\n\n\n");
	}
	printf("\n\n\t\t\t  THE END %c%c\n\t\t\t______________",3,3);
}
