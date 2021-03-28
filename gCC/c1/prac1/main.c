#include <stdio.h>

void bubbleSort (int c[], int n) {
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n-i-1; j++) {

            if (c[j] < c[j+1]) {
                int sw = c[j];
                c[j] = c[j+1];
                c[j+1] = sw;
            }

        }

    }

}

int main () {
    int a[100], b[100], c[100], n = 3;

    printf("Enter a value (except zero): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter the numbers 1st set: ");
        scanf("%d", &a[i]);

        printf("Enter the numbers 2st set: ");
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < n; i++) {
        c[i] = a[i];
        c[i+3] = b[i];
    }

    bubbleSort(c, 2*n);

     for (int i = 0; i < 2*n; i++) {
        printf("%d ", c[i]);
    }
    return 0;
}


/*

int main () {
    int n = 5, i = 0, j = 0, spc = 5;


    for (i = 0; i < n; i++) {

        for (j = spc; j >= 1; j--) {
            printf(" ");
        }

        for ( j = 1; j <= i+1; j++) {
            printf("%d ", j);
        }

        spc--;
        printf("\n");
    }

    /*
        *
       * *
      * * *

        1
       1 2
      1 2 3

    return 0;
}



int main () {
    int n = 6, i = 0, j = 0;

    for (i = 0; i <= n; i++) {

        for (j = 1; j <= n-i; j++) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

         for (j = i-1; j >= 1; j--) {
            printf("%d", j);
        }


        printf("\n");
    }

    /*
          1
         121
        12321

          *
         ***
        *****

    return 0;
}


*/
