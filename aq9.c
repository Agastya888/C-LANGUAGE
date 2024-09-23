#include<stdio.h>

int main() {
    int arr[3];
    int sum;

    printf("enter first number:");
    scanf("%d", &arr[0]);

     printf("enter second number:");
    scanf("%d", &arr[1]);

     printf("enter third number:");
    scanf("%d", &arr[2]);

    sum = arr[0] + arr[1] + arr[2];

printf("The sum of arrays are: %d", sum);

return 0;
}