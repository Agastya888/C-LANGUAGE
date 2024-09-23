#include <stdio.h>

int main() {
    int yr;
    
    
    printf("Enter a year: ");
    scanf("%d", &yr);
    
    
    if (yr % 100 == 0) {
        if (yr % 400 == 0) {
            printf("%d is a century year.\n", yr);
        } else {
            printf("%d is not a century year.\n", yr);
        }
    } else {
        printf("%d is not a century year.\n", yr);
    }
    
    return 0;
}
