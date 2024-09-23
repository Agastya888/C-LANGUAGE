#include <stdio.h>

int main() {
    int choice;
    float temp, res;

    
    printf("1. Convert Celsius to Fahrenheit\n");
    printf("2. Convert Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            
    printf("Enter temperature in Celsius: ");
    scanf("%f", &temp);
    res = (temp * 9 / 5) + 32;
    printf("%.2f Celsius is equal to %.2f Fahrenheit.\n", temp, res);
    break;
       
        case 2:
           
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        res = (temp - 32) * 5 / 9;
        printf("%.2f Fahrenheit is equal to %.2f Celsius.\n", temp, res);
        break;
        
        default:
            printf("Invalid choice. Please enter 1 or 2.\n");
            break;
    }

    return 0;
}
