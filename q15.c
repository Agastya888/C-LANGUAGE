#include <stdio.h>

int main() {
    int units;
    float bill;

  
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    
    if (units <= 100) {
        bill = units * 3; 
    } else if (units <= 200) {
        bill = (100 * 3) + ((units - 100) * 5); 
    } else {
        bill = (100 * 3) + (100 * 5) + ((units - 200) * 7); 
    }

   
    printf("Total electricity bill: Rs. %f\n", bill);

    return 0;
}
