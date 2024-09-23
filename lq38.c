#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int odd = 1;

   
    printf("Enter the number of odd numbers (n): ");
    scanf("%d", &n);

    
    for (int i = 0; i < n; i++) {
        sum += odd; 
        odd += 2;   
    }

   
    printf("The sum of the first %d odd numbers is: %d\n", n, sum);

    return 0;
}
