#include<stdio.h>

int main() {
    int num[5],diff; 

    printf("enter first number:");
    scanf("%d", &num[0]);

     printf("enter second number:");
    scanf("%d", &num[1]);

     printf("enter third number:");
    scanf("%d", &num[2]);

     printf("enter fourth number:");
    scanf("%d", &num[3]);

     printf("enter fifth number:");
    scanf("%d", &num[4]);
    
    diff = num[0] - num[4];

    printf("the difference between first and the last element of the array is: %d", diff);

return 0;
    

}