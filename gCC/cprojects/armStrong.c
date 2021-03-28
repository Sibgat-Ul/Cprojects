#include <stdio.h>

int cube (int b, int p) {
    int i, res = 1;

    for (i = 1; i <= p; i++) {
        res *= b;
    }

    return res;
}

int main () {
    int n, n1 = 0, n2 = 0, sum = 0, p = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    n1 = n;

    while (n1 > 0) {
        n1 /= 10;
        p++;
    }

    n1 = n;

    while (n1 > 0) {
        n2 = n1 % 10;;

        sum += cube(n2, p);

        n1 /= 10;
    }

    if (n == sum) {
        printf("%d is an armstrong", n);
    } else {
        printf("%d is not an armstrong", n);
    }

    return 0;
}
