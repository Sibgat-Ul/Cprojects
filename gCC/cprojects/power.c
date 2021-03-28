#include <stdio.h>

int power (int b, int y) {
    int total = 1;

    for (int i = 1; i <= y; i++) {
       total *= b;
    }

    return total;
}

int main() {
    // Write C code here
    int x = 0, n = 0, sum = 0, res;

    printf("The value: ");
    scanf("%d", &x);

    printf("The term: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int odd = ((2*i)-1);

        if(i%2 != 0) {
            int pup = power(x, odd);
            sum += pup;
            printf("%d\n", pup);
        } else if (i%2 == 0) {
            int pup = power(x, odd);
            sum -= pup;
            printf("%d\n", -pup);
        }
    }

    printf("The sum is %d", sum);

    return 0;
}
