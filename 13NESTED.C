//Example of nested if
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,relation;
	clrscr();
	printf("Enter the number a=");
	scanf("%d",&a);
	printf("Enter the number b=");
	scanf("%d",&b);
	printf("Enter the number c=");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
		       printf("a is greatest");
		}
		else
		{
			printf("c is greatest");
		}
	}
	else
	{
		if(b>c)
		{
			printf("b is greatest");
		}
		else
		{
			printf("c is greatest");
		}
	}
	getch();
}