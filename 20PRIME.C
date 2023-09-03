//Prime Number
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,b=0;
	clrscr();
	printf("Enter the number=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	if(n%i==0)
		{
		b++;
		}
	}
	if(b==2)
	{
		printf("n is a Prime Number");
	}
	else
	{
		printf("n is not a Prime Number");
	}
	getch();
}