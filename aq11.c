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
    

    printf("1 = %f, 2 = %f, 3 = %f, 4 = %f, 5 = %f", num[0],num[1],num[2],num[3],num[4]);

return 0;
    

}