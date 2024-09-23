#include<stdio.h>

int main() {
    float dis,amnt,final,disamnt;

    printf("enter your amount:");
    scanf("%f", &amnt);

    if(amnt < 150) {
        dis = 0;
    }

    else if (amnt >= 150 && amnt < 450){
    dis = 10;
    }

    else if (amnt >= 450 && amnt < 850) {
        dis = 20;
    }
    else if (amnt >= 850) {
        dis = 25;
    }

    disamnt = (amnt * dis) / 100;
    final = amnt - disamnt;
    
    printf("Discount Percentage: %.2f%%\n", dis);
    return 0;

}