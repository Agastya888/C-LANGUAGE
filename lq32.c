#include <stdio.h>

int main() {
    int n;
    double a, d, term, sum = 0.0;

   
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    printf("Enter the first term (a): ");
    scanf("%lf", &a);
    printf("Enter the common difference (d): ");
    scanf("%lf", &d);

  
    for (int i = 0; i < n; i++) {
        term = a + i * d;  
        sum += term;      
    }

   
    printf("The sum of the first %d terms of the arithmetic progression is: %.2lf\n", n, sum);

    return 0;
}
