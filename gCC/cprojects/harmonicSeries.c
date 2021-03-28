#include <stdio.h>

int main () {
    float  num = 1, sum = 0;
    int term = 5, i;

    for (i = 1; i <= term; i++) {
        sum += (num/i);

        printf("%.f/%d \n", num, i);
    }

    printf("%.2f", sum);

    return 0;
}
