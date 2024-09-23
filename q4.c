#include<stdio.h>

int main() {
    /*let x be any alphabet*/

    char x;
    printf("enter any alphabet:");
    scanf("%c", &x);

    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')

    printf("the given alphabet is vowel");

    else
    printf("the given alphabet is consonant");

    return 0;
}