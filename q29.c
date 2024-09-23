#include<stdio.h>
int main () {
    int yr,month,days;
    //1.jan,2.feb,3.mar,4.apr,5.may,6.jun,7.jul,8.aug,9.sep,10.oct,11.nov,12.dec;
    printf("enter year:");
    scanf("%d", &yr);
    
    printf("enter your month(1-12):");
    scanf("%d", &month);

    switch (month) {
        case 1: 
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        days = 31;
        printf("the number of days are 31");
        break;
    
        case 4:
        case 6:
        case 9:
        case 11:
        days = 30;
        printf("the number of days are 30");
        break;

        case 2:
       { if (yr % 4 == 0)
        printf("the number of days are 29");

        else 
        printf("the number of days are 28");

        break;
       }
       return 0;

    }
}