//Fibonacci Series
#include<stdio.h>
#include<conio.h>
void main()
{
	int a=0,b=1,c,i,num;
	clrscr();
	printf("Enter the number of elements:");
	scanf("%d",&num);
	printf("\n %d %d",a,b);
	for(i=2;i<num;i++)
	{
		c=a+b;
		printf("%d",c);
		a=b;
		b=c;
	}
	getch();
}