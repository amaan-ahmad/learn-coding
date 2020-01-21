#include<stdio.h>
#include<conio.h>
int main(){
int a,b;
clrscr();
printf("\n give input seperated with space: ");
scanf("%d %d", &a, &b);
printf("a = %d and b = %d", a, b);
a = a+b;
b = a-b;
a = a-b;
printf("\n after swapping : a = %d and b = %d", a, b);
getch();
return 0;
}