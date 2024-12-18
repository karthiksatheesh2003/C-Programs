//Mirrored Right Triangle
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,k,m=1;
	clrscr();
	printf("Enter the number of rows=");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i-1;j++)
		{
			printf(" ");
		}
		for(k=1;k<=m;k++)
		{
			printf("*");
		}
		printf("\n");
		m++;
	}
	getch();
}