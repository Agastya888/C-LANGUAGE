#include<stdio.h>
int main () {
    char ch;

    printf("enter your alphabet:");
    scanf("%c", &ch);

    if(ch >= 'a' && ch <= 'z')
    printf("the entered character is an alphabet");

    else
    printf("the entered character isn't alphabet");

    return 0;
}