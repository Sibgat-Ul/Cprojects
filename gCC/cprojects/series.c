#include <stdio.h>

int main () {
    float sum = 0, fnum = 3, rati = 2;
    int i = 0, term = 5;

    printf("first number, term, ratio: ");
    scanf("%f %d %f", &fnum, &term, &rati);

    sum = fnum;

    //printf("%.2f", sum);

    for (i = 1; i < term; i++) {

        fnum = fnum*rati;

        sum += fnum;

        //printf("%.2f\n", fnum);
    }

    printf("%.2f", sum);


    return 0;
}
