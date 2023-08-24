//Check whether the number is greater than or less than
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,relation;
	clrscr();
	printf("Enter the number a=");
	scanf("%d",&a);
	printf("Enter the number b=");
	scanf("%d",&b);
	relation=a>=b;
	//relation=a<=b;
	printf("\n relation of two numbers=%d",relation);
	getch();
}