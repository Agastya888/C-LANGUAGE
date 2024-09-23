#include <stdio.h>

int main() {
    int evenNumbers[5];  
    int i;

   
    evenNumbers[0] = 2;
    evenNumbers[1] = 4;
    evenNumbers[2] = 6;
    evenNumbers[3] = 8;
    evenNumbers[4] = 10;

    
    printf("The first 5 even numbers are:\n");
    printf("%d ", evenNumbers[0]);
    printf("%d ", evenNumbers[1]);
    printf("%d ", evenNumbers[2]);
    printf("%d ", evenNumbers[3]);
    printf("%d ", evenNumbers[4]);

    return 0;
}
