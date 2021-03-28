#include <stdio.h>

int bubbleSort (int arr[], int l) {
    int i, j, sw;

    for (i = 0; i < l; i++) {
        for (j = 0; j < l-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                sw = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = sw;
            }
        }
    }

    return 0;
}

int main () {
    int arr[100], brr[100], crr[100], i, j, n, l;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("array 1: ");
        scanf("%d", &brr[i]);

        printf("array 2: ");
        scanf("%d", &crr[i]);
    }

    for (i = 0; i < n; i++) {
        arr[i] = brr[i];
        arr[i+n] = crr[i];
    }

    l = n*2;

    bubbleSort(arr, l);

    for (i = 0; i < l; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
