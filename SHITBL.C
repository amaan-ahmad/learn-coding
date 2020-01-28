#include<stdio.h>
#include<conio.h>

int main()
{
 clrscr();
 int n,e,i;
 printf("enter the number whose table you want \n n=");
 scanf("%d", &n);
 printf("enter till the number you want table \n e=");
 scanf("%d", &e);

 for(i=1; i<=e ;i++)
 {

  printf("\n%d x %d = %d", n, i, n*i);
 }
 getch();
 return 0;
}



