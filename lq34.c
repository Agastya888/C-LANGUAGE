#include<stdio.h>

int main () {
    int n,sum = 0;

    printf("enter number of terms:");
    scanf("%d", &n);

    for (int i = 1 ; i <= n ; i++) {
    if (i % 2 == 0) {
      sum += 2 * i; 
    }
    }
printf("the sum of first %d even number is : %d\n", n , sum);
return 0;
}