#include <stdio.h>

int main() {
    int array[6] = {5, 10, 15, 20, 25, 30};  

    printf("original array:\n");
    for (int i = 0; i < 6; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

   
    array[5] = 0;

    
    printf("\nArray after setting the last element to zero:\n");
    for (int i = 0; i < 6; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}
