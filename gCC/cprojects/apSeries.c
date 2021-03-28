#include <stdio.h>

int main()
{
    int i, f = 1, n = 10, d = 4, sum = 0;

    //scanf("");

    for (i = 0; i < n; i++) {
        printf("%d\n", f);

        sum += f;
        f += d;
    }

    printf("%d", sum);

	return 0;
}
