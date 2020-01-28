// WAP multiplication table.

#include<stdio.h>
#include<conio.h>
#include<process.h>

int main(){
int c;
int d;
int i=1;
system("cls");
scanf("%d %d", &c, &d);
for(i=1; i<=d; i++){
	printf("\n%d X %d = %d", c, i, c*i);
}
getch();
return 0;
}