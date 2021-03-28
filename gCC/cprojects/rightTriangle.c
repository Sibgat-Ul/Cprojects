#include <stdio.h>

int main () {
    int i, j, n = 5;

    for (i = 0; i < n; i++) {
        printf(" ");

        for (j = 0; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
