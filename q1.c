#include<stdio.h>

int main() {
    /*TO DETERMINE WHETHER THE NO. IS EVEN OR ODD*/

    int x;
    printf("enter any number:");
    scanf("%d", &x);

    if (x % 2 == 0)
    printf("the entered number is even\n");

    else
    printf("the entered number is odd\n");

    return 0;
}