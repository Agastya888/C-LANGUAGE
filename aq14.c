#include <stdio.h>

int main() {
    
    int arr[5] = {10, 20, 30, 40, 50};
    int size ;  

printf("enter size:");
scanf("%d", &size);

    if (size > 0) {
        printf("The index of the first element is: 0\n");
        printf("The value of the first element is: %d\n", arr[0]);
    } else {
        printf("The array is empty.\n");
    }

    return 0;
}
