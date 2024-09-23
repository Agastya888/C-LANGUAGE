#include <stdio.h>

int main() {
    int array[5] = {1, 2, 3, 4, 5};  

    printf("Original array:\n");
    for(int i = 0; i < 5; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

   
    array[1] = 25;

    printf("\nArray after changing the value at the second position:\n");
    for(int i = 0; i < 5; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}

