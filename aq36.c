#include <stdio.h>

int main() {
    int array[5];  
    
    printf("Enter 5 numbers:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &array[i]);  
    }

   
    printf("First element: %d\n", array[0]);
    printf("Third element: %d\n", array[2]);

    return 0;
}
