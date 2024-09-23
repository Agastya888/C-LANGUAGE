#include<stdio.h>

int main () {
    float a,b;
    float area,perimeter;


    printf("enter length:");
    scanf("%f", &a);

    printf("enter breadth:");
    scanf("%f", &b);

    area = a * b;
    perimeter = 2 * (a + b);

    printf("the area is: %f\n", area);
    printf("the perimeter is: %f", perimeter);

    return 0;


}