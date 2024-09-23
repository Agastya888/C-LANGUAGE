#include <stdio.h>

int main() {
    /*to determine the largest number*/
    int x,y,z;
    int largest;


    printf("Enter the first number: ");
    scanf("%d", &x);

    printf("Enter the second number: ");
    scanf("%d", &y);

    printf("Enter the third number: ");
    scanf("%d", &z);

    /*let x be the largest for now*/
    largest = x;


    if (y > largest) {
    largest = y;
    }

   
    if (z > largest) {
    largest = z;
    }

   
    printf("The largest number among %d, %d, and %d is %d\n", x,y,z, largest);

    return 0;
}
