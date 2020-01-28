#include<stdio.h>
#include<conio.h>

int main()
{
 clrscr();
 char c;
 printf("enter the alphabet \n");
 scanf("%s",&c);
 if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
  {
   printf("the alphabet is vowel");
  }
 else
  {
    printf("the alphabet is consonant");
  }
  getch();
  return 0;
}
