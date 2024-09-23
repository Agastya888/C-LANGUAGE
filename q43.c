#include<stdio.h>
 int main() {
    int a;

    printf("enter your age:");
    scanf("%d", &a);

    if (a >= 0 && a < 14) {
        printf("You are a child.");
    }
    else if(a >= 14 && a < 18){
        printf("You are a teenager.");
    }
    else if(a >= 60) {
        printf("You are senior citizen.");
    }
    else {
        printf("You are an adult.");
    }
return 0;

 }