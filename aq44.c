#include <stdio.h>

int main() {
    int array[6] = {10, 20, 30, 40, 50, 60};  
    
    printf("Original array:\n");
    for (int i = 0; i < 6; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }


    int new = array[1];  
    array[1] = array[3]; 
    array[3] = new;      

    printf("Array after swapping the second and fourth elements:\n");
    for (int i = 0; i < 6; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}
