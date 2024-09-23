#include <stdio.h>

int main() {
    
    int arr[5] = {10, 20, 30, 40, 50};
    int size ;  

printf("enter size:");
scanf("%d", &size);

    if (size > 0) {
        printf("The index of the second element is: 0\n");
        printf("The value of the second element is: %d\n", arr[1]);
    } else {
        printf("The array is empty.\n");
    }

    return 0;
}