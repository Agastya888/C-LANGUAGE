#include <stdio.h>

int main() {
    int arr[5]; 
    
    printf("Enter 5 integers:\n");
    for(int i = 0; i < 5; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    printf("You entered:\n");
    for(int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}