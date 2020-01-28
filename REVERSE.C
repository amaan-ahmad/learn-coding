#include<stdio.h>
#include<conio.h>
#include<process.h>

int main(){
int a,b=0;
system("cls");
scanf("%d", &a);
printf("reversed digit is : ");
while(a!=0){
	b = a%10;
	a = a/10;
	printf("%d", b);
	}
getch();
return 0;
}