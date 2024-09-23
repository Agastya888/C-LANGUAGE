#include<stdio.h>

int main() {
    int x;

    printf("enter array size:");
    scanf("%d", &x);

    int arr[x];

    for(int i = 0 ; i < x ; i++){
        printf("enter array %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("the arrays are:\n");

    for(int i = 0 ; i < x ; i++){
        printf("%d\n", arr[i]);
    }

    return 0;
}