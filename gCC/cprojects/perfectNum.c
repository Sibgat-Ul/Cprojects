#include <stdio.h>

int main() {
	int n, i, sum = 0, d;

	scanf("%d", &n);

	for (i = 1; i < n; i++) {
        d = n % i;

        if ( d == 0) {
            printf("%d\n", i);
            sum += i;
        }
	}

    if ( sum == n ) {
        printf("%d is perfect", sum);
    } else {
        printf("%d is not perfect", sum);
    }

	return 0;
}
