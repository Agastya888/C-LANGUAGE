#include<stdio.h>

int main () {
    int n,sum = 0;

    printf("enter number of elements:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("the sum of first %d elements is: %d\n", n , sum);

    return 0;
}