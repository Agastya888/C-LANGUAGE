#include<stdio.h>

int main() {
    int a;
    printf("enter any number:");
    scanf("%d", &a);

    if(a % 3 == 0 && a % 5 == 0)
    printf("the number is divisible by 3 and 5 both");

    else
    printf("the number isn't divisible by 3 and 5 both");

    return 0;
}