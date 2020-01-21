#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b;
printf("\nGive us two numbers seperated by a space :");
scanf("%d %d", &a, &b);
printf("\nResult of multiplication: %d", a*b);
printf("\nResult of addition: %d", a+b);
printf("\nResult of subtraction: %d", a-b);
printf("\nResult of division: %d", a/b);
printf("\nResult of remainder: %d", a%b);
getch();

}