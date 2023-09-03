//Table of numbers
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,b;
	clrscr();
	printf("Enter the number=");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		b=n*i;
		printf("\n %d*%d=%d",n,i,b);
	}
	getch();
}
