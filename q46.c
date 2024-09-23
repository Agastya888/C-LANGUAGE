#include<stdio.h>

int main() {
    //Let a b c be sides of a triangle

    int a,b,c ;
    printf("enter 3 numbers:");
    scanf("%d %d %d", &a , &b, &c );

    // for euilateral triangle
    {
        if(a = b = c)
        printf("the triangle is equilateral triangle");

      else if(a == b || b == c || c == a)
        printf("the triangle is isoceles triangle");

        else
        printf("the triangle is scalene");
    }
    return 0;
}
