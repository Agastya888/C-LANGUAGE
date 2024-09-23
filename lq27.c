#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double a, r, term;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    printf("Enter the first term (a): ");
    scanf("%lf", &a);
    printf("Enter the common ratio (r): ");
    scanf("%lf", &r);

    
    printf("The first %d terms of the geometric progression are:\n", n);
    for (int i = 0; i < n; i++) {
        term = a * pow(r, i);  
        printf("%.2lf ", term);
    }
    printf("\n");

    return 0;
}