//Nested for
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j;
	clrscr();
	printf("Enter the number of rows=");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}