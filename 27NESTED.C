//Nested for
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,m=1;
	clrscr();
	printf("Enter the number of rows=");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}

