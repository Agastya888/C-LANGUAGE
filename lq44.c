#include <stdio.h>

int main() {
    int n;

   
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    
    for (int i = 1; i <= n; i++) {
        int num = i;
        int sum = 0;

       
        while (num > 0) {
            sum += num % 10;  
            num /= 10;        
        }

        
        printf("Sum of digits of %d is: %d\n", i, sum);
    }

    return 0;
}
