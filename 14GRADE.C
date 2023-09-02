//Grade of Students from Marks
#include<stdio.h>
#include<conio.h>
void main()             //example of else if ladder
{
	int marks;
	clrscr();
	printf("Enter the mark of the student=");
	scanf("%d",&marks);
	if(marks>95)
		printf("GRADE A+");
	else if(marks<=95&&marks>90)
		printf("GRADE A");
	else if(marks<=90&&marks>80)
		printf("GRADE B+");
	else if(marks<=80&&marks>70)
		printf("GRADE B");
	else if(marks<=70&&marks>60)
		printf("GRADE C+");
	else if(marks<=60&&marks>50)
		printf("GRADE C");
	else if(marks<=50&&marks>40)
		printf("GRADE D+");
	else if(marks<=40&&marks>30)
		printf("GRADE D");
	else if(marks<=30)
		printf("FAILED");
	getch();
}