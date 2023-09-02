//Voters Eligibility
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,age;
	clrscr();
	printf("enter the age=");
	scanf("%d",&a);
	if(a>=18)
	{
		printf("You can vote");
	}
	else
	{
		printf("You cannot vote");
	}
	getch();
}