#include<stdio.h>

int main() {
    int yr;

printf("ENTER THE YEAR:");
scanf("%d", &yr);

    yr % 4 == 0 ? printf("the year is leap year\n") : printf("the year is not leap year\n");

    return 0;
}