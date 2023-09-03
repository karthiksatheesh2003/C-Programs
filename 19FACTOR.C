// Factorial of a number
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i,fact=1;
	clrscr();
	printf("Enter the number=");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	printf("fact=%d",fact);
	getch();
}

