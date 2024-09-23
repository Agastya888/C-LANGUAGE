#include<stdio.h>

int main() {
   
   /*let x be any number*/

   int x;
   printf("enter any integer:");
   scanf("%d", &x);

   if (x > 0)
   printf("the entered number is positive integer");

   else if (x < 0)
   printf("the entered number is negative integer");

   else
   printf("the entered number is zero");

   return 0;


}
