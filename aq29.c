#include<stdio.h>
int main() {
    int arr[4] = {1,57,49,69};

    for(int i = 0; i < 4; i++) {
        printf("%d\n", arr[i]);
    }

    printf("\n");

    printf("the first element is %d and the last element is %d", arr[0] , arr[3] );

    return 0;

}    