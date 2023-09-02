//Example of switch statement
#include<stdio.h>
#include<conio.h>
int main()
{
	clrscr();
	printf("1 FOR SUNDAY");
	printf("\n 2 FOR MONDAY");
	printf("\n 3 FOR TUESDAY");
	printf("\n 4 FOR WEDNESDAY");
	printf("\n 5 FOR THURSDAY");
	printf("\n 6 FOR FRIDAY");
	printf("\n 7 FOR SATURDAY");

	int ch;
	printf("\n ENTER YOUR CHOICE=");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("DAY IS SUNDAY");
			break;
		case 2:
			printf("DAY IS MONDAY");
			break;
		case 3:
			printf("DAY IS TUESDAY");
			break;
		case 4:
			printf("DAY IS WEDNESDAY");
			break;
		case 5:
			printf("DAY IS THURSDAY");
			break;
		case 6:
			printf("DAY IS FRIDAY");
			break;
		case 7:
			printf("DAY IS SATURDAY");
			break;
	}
	getch();
}