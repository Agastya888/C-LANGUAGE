#include<stdio.h>

int main() {
/*LET 3 NOS BE a b c*/

int a,b,c;
int big;

printf("enter 3 nos.:");
scanf("%d %d %d", &a , &b , &c);

if(a > b) {
big = a;
a = b;
b = big;}

if(a > c){
    big = a;
    a = c;
    c = big;
}

if(b > c){
    big = b;
    b = c;
    big = c;
}
printf("Nos. in ascending order are: %d %d %d\n", a , b ,c);

return 0;

}