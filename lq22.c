#include <stdio.h>

int main() {
    int divisor;

  
    printf("Enter the divisor: ");
    scanf("%d", &divisor);

   
    printf("Numbers from 1 to 100 divisible by %d are:\n", divisor);
    for (int i = 1; i <= 100; i++) {
        if (i % divisor == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
