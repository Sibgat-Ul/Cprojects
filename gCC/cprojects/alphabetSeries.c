#include <stdio.h>

int main () {
    int i, j, n = 5, spc = 5;

    char letF = 'A';

    for (i = 0; i < n; i++) {

        for (j = 0; j <= i; j++) {
            printf("%c ", j);
        }

        printf("\n");
    }

    return 0;
}
