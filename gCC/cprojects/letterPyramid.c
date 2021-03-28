#include <stdio.h>

int main () {
    int i, j, n = 5, spc = 5;

    char letF = 'a';

    for (i = 0; i < n; i++) {

        for (j = 0; j <= spc; j++) {
            printf(" ");
        }

        for (j = 0; j <= (i/2); j++) {
            printf("%c ", letF++);
        }


        for (j = 0; j < i/2; j++) {
            printf("%c ", letF--);
        }

        letF = 'a';
        spc--;
        printf("\n");
    }

    return 0;
}
