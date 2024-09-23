#include<stdio.h>


int main () {
float W,H;
float BMI;

printf("enter weight in kg:");
scanf("%f", &W);

printf("enter height in meters:");
scanf("%f", &H);

BMI = W / (H * H);

printf("the BMI is: %f", BMI);

return 0;


}