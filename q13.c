#include <stdio.h>

int main() {
    int age;
    int passed;
    int eligibility;

   
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Have you passed the driving test? (1 for Yes, 0 for No): ");
    scanf("%d", &passed);

    
    eligibility = (age >= 18) && passed;

    if (eligibility) {
        printf("You are eligible for a driving license.\n");
    } else {
        printf("You are not eligible for a driving license.\n");
    }

    return 0;
}
