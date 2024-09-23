#include<stdio.h>

int main() {
    int arr[3] = {12,34,56};
 int first;

 for(int i = 0; i < 3; i++){
    printf("%d\n", arr[i]);
 }

 first = arr [0];

 arr[0] = arr[2];

 first = arr[2];



 printf("exchanged array:\n");

for(int i = 0; i < 3; i++){
    printf("%d\n", arr[i]);
 }
 

 return 0;
    
    
}