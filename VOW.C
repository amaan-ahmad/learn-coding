#include<stdio.h>
#include<conio.h>
#include<process.h>

int main(){
char word;
system("cls");
scanf("%s", &word);
if(word == 'a' || word == 'A' || word == 'e' || word == 'E' || word =='i' || word =='I' || word =='o' || word =='O' || word =='u' || word =='U'){
	printf("it is a vowel !", word);
}
else {
	printf("not a vowel !");
}
getch();
return 0;
}