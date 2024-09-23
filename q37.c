#include<stdio.h>

int main () {
    char summer,winter,autumn,spring;
    int month;

    printf("enter month (1-12):");
    scanf("%d", &month);

    switch (month) {

   case 1: //JANUARY
   case 2: //FEBRUARY
   case 12: // DECEMBER
   
   printf("the season is winter");
   break;

   case 3: //MARCH
   case 4: //APRIL
   case 5: //MAY
   
   printf("the season is spring");
   break;

   case 6: //JUNE
   case 7: //JULY
   
   printf("the season is summer");
   break;

   case 8: //AUGUST
   case 9: //SEPTEMBER
   case 10: //OCTOBER
   case 11: //NOVEMBER
   
   printf("the season is autumn");
break;
    }

return 0;
}