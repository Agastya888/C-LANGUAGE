#include <stdio.h>

int main() {
    int array[5]; 
    
    for (int i = 0; i < 5; i++) {
        array[i] = 2 * i + 1;  
    }

    
    printf("Array with the first 5 odd numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}
