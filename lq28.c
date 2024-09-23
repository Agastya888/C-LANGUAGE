#include <stdio.h>

int main() {
    int number, product = 1, remainder;

  
    printf("Enter a number: ");
    scanf("%d", &number);

    
    if (number == 0) {
        product = 0;
    } else {
      
        while (number > 0) {
            remainder = number % 10;  
            product *= remainder;     
            number /= 10;            
        }
    }

   
    printf("Product of the digits: %d\n", product);

    return 0;
}
