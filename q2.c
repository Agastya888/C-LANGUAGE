#include<stdio.h>

int main() {
    /*let 'y' be a year*/

    int y;
    printf("enter any year:");
    scanf("%d", &y);

    if (y % 4 == 0)
    printf("the given year is leap year");

    else
    printf("the given year is not a leap year");

    return 0;
}