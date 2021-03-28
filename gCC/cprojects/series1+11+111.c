#include <stdio.h>

int power (int b, int p) {
    int res = 1, i;

    for (i = 1; i <= p; i++) {
        res *= b;
    }

    return res;
}

int main() {
	int i, j = 1, n = 5, sum = 0, x = 1;

	for (i = 1; i <= n; i++) {
        printf("%d\n", j);

        sum += j;
        j += x * power(10, i);
	}

	printf("%d", sum);

    return 0;
}
