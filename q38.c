#include <stdio.h>

int main() {
    int n, i;
    float num, largest;

   
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    
    if (n <= 0) {
        printf("invalid choice.\n");
        return 1;
    }

    
    printf("Enter number 1: ");
    scanf("%f", &num);

    
    largest = num;

    
    for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);

       
        if (num > largest) {
            largest = num;
        }
    }

    printf("The largest number is: %f\n", largest);

    return 0;
}
