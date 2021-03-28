#include <stdio.h>

int main () {
    int i, j, arr[100], brr[100] = { 0 }, n, freq = 1;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[i] == arr [j]) {
                freq++;
                brr[i] = freq;
                arr[j] = 0;
                printf("%d %d %d\n", arr[i], arr[j], freq);

            }   // printf("%d %d\n", arr[i], 1);
        }
        freq = 1;
    }


    for (i = 0; i < n; i++) {
        if (brr[i] == 0) {
            brr[i] = 1;
        }

        if (arr[i] != 0) {
            printf("HERE HERE HERE HERE: ");
            printf("%d %d\n", arr[i], brr[i]);
        }

    }

    return 0;
}
