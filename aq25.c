#include<stdio.h>

int main() {
    float num[5]; 

    printf("enter first number:");
    scanf("%f", &num[0]);

     printf("enter second number:");
    scanf("%f", &num[1]);

     printf("enter third number:");
    scanf("%f", &num[2]);

     printf("enter fourth number:");
    scanf("%f", &num[3]);

     printf("enter fifth number:");
    scanf("%f", &num[4]);
    

    printf("second last element is: %d", num[3]);

return 0;
    

}