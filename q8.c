#include<stdio.h>
int main () {

    /*let 'b' be the base of triangle and 'h' be the height*/

    float b,h;
    printf("enter base: ");
    scanf("%f", &b);

    printf("enter height: ");
    scanf("%f", &h);

    float area = 0.5 * b * h;
    printf("the area is: %f", area);

    return 0;
    



}