#include <stdio.h>

int main() {
    int array[3];  
    
    printf("Enter 3 numbers:\n");
    for(int i = 0; i < 3; i++) {
        scanf("%d", &array[i]);  
    }

    
    int middle = array[1];

    
    printf("The middle element is: %d\n", middle);

    return 0;
}
