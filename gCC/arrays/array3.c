#include <stdio.h>

int main () {
    int arr[100], brr[100], crr[100], n = 0, count = 1, i, j;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if ( arr[i] == arr[j] ) {
                count++;
                printf("Duplicate items are: %d\n", arr[i]);
            }
        }
    }

    return 0;
}
