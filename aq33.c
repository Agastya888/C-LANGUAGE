#include <stdio.h>

int main() {
    int array[4]; 
    int sum = 0;  
    printf("Enter 4 numbers:\n");
    for(int i = 0; i < 4; i++) {
        scanf("%d", &array[i]);  
        sum += array[i];         
    }

    
    printf("The sum of the 4 numbers is: %d\n", sum);

    return 0;
}
