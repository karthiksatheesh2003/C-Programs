//Sum of digits of a number
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,rem,sum=0;
	clrscr();
	printf("Enter the number=");
	scanf("%d",&a);
	while(a>0)
	{
		rem=a%10;
		a=a/10;
		sum=sum+rem;
	}
	printf("\n Sum of digits=%d",sum);
	getch();
}
