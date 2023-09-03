//While loop
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
       //	while(a<=50)
       for(a=10;a<=50;a++)
	{
		if(a%2==0)
		{
			printf("\n %d",a);
		}
	       //	a++;
	}
	getch();
}