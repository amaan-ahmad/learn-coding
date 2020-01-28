#include<stdio.h>
#include<conio.h>
#include<process.h>

int main(){
int a,b,c;
system("cls");
printf("enter sides of triangle with seperated with spaces. ");
scanf("%d %d %d", &a, &b, &c);
if(a==b && b==c && c==a){
	printf("its equilateral triangle.");
}else if( a==b || b==c || c==a){
	printf("its isosceles triangle.");
}else if( a!=b && b!=c && c!=a){
	printf("its scalene triangle.");
}
getch();
return 0;
}


