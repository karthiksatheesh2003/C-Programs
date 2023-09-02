//To check whether the number is positive or negative
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("Enter the number=");
	scanf("%d",&a);
	if(a>0)
	{
		printf("The number is positive");
	}
	else
	{
		printf("The number is negative");
	}
	getch();
}