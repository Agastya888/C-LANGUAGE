#include <stdio.h>

int main() {
    int x,y,z;
    int max, min;

    // Input three numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    printf("Enter the third number: ");
    scanf("%d", &z);

    // let min max be x
    max = min = x;

    // Determine the maximum value
    if (y > max) {
        max = y;
    }
    if (z > max) {
        max = z;
    }
// Determine the minimum value
 
    if (y < min) {
        min = y;
    }
    if (z < min) {
        min = z;
    }

    printf("The maximum value is: %d\n", max);
    printf("The minimum value is: %d\n", min);

    return 0;
}


