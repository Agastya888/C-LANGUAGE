#include<stdio.h>

int main() {
    int arr[3];

    for(int i = 0 ; i < 3 ; i++){
        printf("enter array %d: ", i+1);
        scanf("%d", &arr[i]);
    }
     
     
     int x = printf("%d and %d", arr[0] , arr[1]);
     

    

     return 0;
}