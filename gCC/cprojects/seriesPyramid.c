#include <stdio.h>

int main()
{
    int i, j, n, spc, r;

    scanf("%d", &n);

    spc = n-1;

    for (i = 1; i <= n; i++) {

        for (j = 1; j <= spc; j++) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        for (j = i-1; j >= 1; j--) {
            printf("%d", j);
        }

        spc--;
        printf("\n");
    }

    return 0;
}
