#include <stdio.h>

int main() {
    int array[5] = {1, 2, 3, 4, 5};  

    
    printf("Original array:\n");
    for (int i = 0; i < 5; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

  
    array[0] = 100;

   
    printf("\nArray after updating the first element to 100:\n");
    for (int i = 0; i < 5; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}
