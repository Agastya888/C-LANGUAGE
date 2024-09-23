#include<stdio.h>
#include<math.h>

int main () {
 double a,b,c,x,x1,x2,D;
 printf("enter coefficients a,b,c:");
 scanf("%lf %lf %lf", &a,&b,&c);

D = b*b - 4*a*c; //DISCRIMINANT

if ( D > 0) {
    x1 =  (-b + sqrt(D)) / (2*a);
    x2 =  (-b - sqrt(D)) / (2*a);
    printf("root 1= %lf\n", x1);
    printf("root 2 = %lf", x2);
}
else if (D == 0) { 
x1 = x2 = (-b) / (2*a);
printf("the roots are equal and is equal to: %lf",x1);
}
else {
printf("the roots are imaginary");
}
return 0;

}