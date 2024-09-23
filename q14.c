#include<stdio.h>

int main () {
    int n;
    
    printf("Enter your number:");
    scanf("%d",&n);

    if(n % 1 == 0 && n % n == 0 && n > 1) {
        printf("the entered number is prime number.");

    }
    else {
        printf("the number is not a prime number.");
    }
    
    return 0;


}