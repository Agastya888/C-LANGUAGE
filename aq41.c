#include<stdio.h>

int main() {
    int num[5]; 

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
    

    printf("first = %d, second = %d, third = %d, fourth = %d, fifth = %d", num[0],num[1],num[2],num[3],num[4]);

return 0;
    

}