//Modulus of two numbers
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,modulus;
    clrscr();
    printf("enter the value of a=");
    scanf("%d",&a);
    printf("enter the value of b=");
    scanf("%d",&b);
    modulus=a%b;
    printf("\n modulus of two numbers=%d",modulus);
    getch();
}
