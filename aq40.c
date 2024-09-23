#include <stdio.h>

int main() {
    int array[5] = {10, 20, 30, 40, 50};  
    
    printf("Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}
