#include <stdio.h>

int main() {
    int array[6];  

    for(int i = 0; i < 6; i++) {
        array[i] = 10;
    }

    
    for(int i = 0; i < 6; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}
