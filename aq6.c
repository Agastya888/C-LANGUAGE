#include<stdio.h>

int main() {
    int arr[3] = {14,47,96};
    
    printf("\n");

    for(int i = 0; i < 3; i++) {
        printf("%d\n", arr[i]);
    }

    printf("\n");

    // changing value of the third element

    arr[2] = 69;

    for(int i = 0; i < 3; i++) {
        printf("%d\n", arr[i]);
    }
    printf("\n");

    return 0;
}