#include <stdio.h>

int main() {
    int num, ognum, rem, res;

    printf("Armstrong numbers between 1 and 1000 are:\n");
    for (num = 1; num <= 1000; num++) {
        ognum = num;
        res = 0;

        while (ognum != 0) {
            rem= ognum % 10;
            res += rem * rem * rem;
            ognum /= 10;
        }

      
        if (res == num) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}
