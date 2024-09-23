#include <stdio.h>

int main() {
    int array[3]; 
    
    for (int i = 0; i < 3; i++) {
        array[i] = 5 * (i + 1);  
    }

    
    printf("The first 3 multiples of 5 are:\n");
    for (int i = 0; i < 3; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}
