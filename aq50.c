#include<stdio.h>

int main() {
    int arr[4] = {87,4,1,798};

    for(int i = 0 ; i < 4 ; i++){
        if(arr[i] > 10){
        printf("%d\n", arr[i]);
        }
        
    }

    return 0;
}