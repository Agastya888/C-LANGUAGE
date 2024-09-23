#include <stdio.h>

int main() {
    int yr;
    int leapyr;

    
    printf("Enter a year: ");
    scanf("%d", &yr);

    
    leapyr = ((yr % 4 == 0) && (yr % 100 != 0)) || (yr % 400 == 0);

    
    printf("%d is %s a leap year.\n", yr, leapyr ? "" : "not");

    return 0;
}
