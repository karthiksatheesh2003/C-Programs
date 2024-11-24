//Swap two numbers without using third variable
#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10, b=20;
	clrscr();
	printf("\n Before Swap a=%d b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n After Swap a=%d b=%d",a,b);
	getch();
}