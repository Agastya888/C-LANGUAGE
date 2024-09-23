#include<stdio.h>
int main() {
    int arr[4] = {1,57,49,69};

    for(int i = 0; i < 4; i++) {
        printf("%d\n", arr[i]);
    }

    printf("\n");

    for(int i = 3; i >= 0; i--){
        printf("%d\n", arr[i]);
    }

    return 0;

}