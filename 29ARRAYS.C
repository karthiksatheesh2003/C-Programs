//Example of arrays
#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[10],i,n;
	clrscr();
       /*	arr[0]=10;
	arr[1]=5;
	arr[2]=15;
	arr[3]=7;
	arr[4]=2;
	arr[5]=6;
	arr[6]=5; */
	printf("Enter the value of n=");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Entered array elements are:");
	for(i=0;i<n;i++)
	{
		printf("\n %d",arr[i]);
	}
	getch();
	return 0;
}