#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    
    printf("Enter the number of terms: ");
    scanf("%d", &n);

  
    printf("Harmonic series: ");
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i; 
        printf("1/%d ", i);  

        if (i < n) {
            printf("+ ");  
        }
    }

    // Print the final sum of the harmonic series
    printf("\nSum of the first %d terms of the harmonic series: %.2lf\n", n, sum);

    return 0;
}
