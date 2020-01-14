//author : amaan ahmad
//github : amaan-ahmad

#include<stdio.h>
#include<conio.h>

void main(){
int a,b;
char c;
clrscr();
again:
printf("\n> ");
scanf("%d%s%d", &a, &c, &b);
if(c=='e'){
	exit(0);
	}
switch(c){
	case '+':
		printf("=%d", a+b);
		break;
	case '*':
		printf("=%d", a*b);
		break;
	case 'x':
		printf("=%d", a*b);
		break;
	case 'X':
		printf("=%d", a*b);
		break;
	case '-':
		printf("=%d", a-b);
		break;
	case '/':
		printf("=%d", a/b);
		break;
	default:
		printf("Un-identified operator %s", c);
		break;
	}
goto again;
}
