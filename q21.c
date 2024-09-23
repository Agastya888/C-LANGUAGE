#include<stdio.h>

int main () {
    int a,b,c,d;
    int lar;
    { printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);
    printf("enter fourth number:");
    scanf("%d", &d);
    }
    //let a be largest
    lar = a;
     {
        if(b > lar)
        printf("b is largest");

        if(c > lar)
        printf("c is largest");

        if(d > lar)
        printf("d is largest");
     }
     printf("the largest number among %d %d %d %d is %d\n", a,b,c,d,lar);
     return 0;


}