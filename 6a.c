#include <stdio.h>
#include <conio.h>

int main(){
    int a;
    printf("1. for your marks greater than or equal to 90\n");
    printf("2. for your marks between or equal to 70 and 90\n");
    printf("3. for your marks between or equal to 50 and 70\n");
    printf("4. for your marks between or equal to 30 and 50\n");
    printf("5. for your marks below 30\n");
    scanf("%d", &a);
    switch(a){
        case 1:
            printf("\n Your Grade : A");
            break;
        case 2:
            printf("\n Your Grade : B");
            break;
        case 3:
            printf("\n Your Grade : C");
            break;
        case 4:
            printf("\n Your Grade : D");
            break;
        case 5:
            printf("\n Your Grade : F");
            break;
        default :
            printf("somethings went wrong.");
            break;
    }
    return 0;
}
