#include <stdio.h>

int power (int b, int p) {
    int res = 1;

    for (int i = 0; i < p; i++) {
        res *= b;
    }

    return res;
}

int main () {
    int m = 0, dec = 0, digits = 3-1, oct = 745, k = 0;


    while (digits >= 0) {
        k = oct / power(10, digits);
        dec += k;

        printf("%d\n", dec);
        dec *= 8;

        oct = oct % power(10, digits);

        digits--;
    }


  return 0;
}
