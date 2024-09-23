#include<stdio.h>

int main() {
    /*Let 'a' be the age of person*/

    int a;
    printf("Enter your age:");
    scanf("%d", &a);

    if (a >= 18)
    printf("you are eligible to vote");

    else
    printf("you are not eligible to vote");

    return 0;
    
}