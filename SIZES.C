//write a program to display the size of variables of different datatypes.

#include<stdio.h>
#include<conio.h>
void main()
{
int a;
char b;
float c;

clrscr();
printf("\n Size of integer %d \n Size of character %d \n Size of Float %d",sizeof(a), sizeof(b), sizeof(c));
getch();
}
