//find area of triangle using herons formula;

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
float a,b,c,s,ar;
clrscr();
printf("input seperated with spaces : ");
scanf("%f %f %f", &a, &b, &c);
s=a+b+c;
s=s/2;
printf("\n Area calculated : %f", pow(s*(s-a)*(s-b)*(s-c), 0.5)  );
getch();
return 0;
}
