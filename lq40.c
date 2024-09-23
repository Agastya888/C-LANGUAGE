#include <stdio.h>

int main() {
    int number, largest = 0, digit;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    
    number = (number < 0) ? -number : number;

    
    while (number > 0) {
        digit = number % 10;  
        if (digit > largest) {
            largest = digit;  
        }
        number /= 10;  
    }

   
    printf("The largest digit is: %d\n", largest);

    return 0;
}
