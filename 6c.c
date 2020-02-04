#include <stdio.h>
#include <conio.h>

int main(){
    int a;
    printf("1. for number greater than 0.\n");
    printf("2. for number less than 0.\n"); 
    scanf("%d", &a);
    switch(a){
        case 1:
            printf("\n+ve");
            break;
        case 2:
            printf("\n-ve");
            break;
        default :
            printf("somethings went wrong.");
            break;
    }
    return 0;
}
