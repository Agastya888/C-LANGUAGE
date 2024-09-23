#include<stdio.h>

int main() {
    int arr[3] = {8,4,71};
    
    printf("\n");

    for(int i = 0; i < 3; i++) {
        printf("%d\n", arr[i]);
    }

    printf("\n");

    // changing value of the third element

    arr[1] = 88;

    for(int i = 0; i < 3; i++) {
        printf("%d\n", arr[i]);
    }
    printf("\n");

    return 0;
}