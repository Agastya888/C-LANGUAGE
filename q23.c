#include<stdio.h>

int main () {
    //LET A BE ANY ANGLE
    float A;
    printf("enter any angle:");
    scanf("%f", &A);

    if(A >= 0 && A < 90)
    printf("the entered angle is acute angle");

    else if(A == 90)
    printf("the entered angle is a right angle");

    else
    printf("the entered angle is obtuse angle");

    return 0;

}