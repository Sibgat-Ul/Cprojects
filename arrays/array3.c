#include <stdio.h>

int main () {
    int arr[100], brr[100] = { 0 }, crr[100], n = 0, count = 1, counter = 0, i, j;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                brr[i] = count;
                arr[j] = 0;
            }
        }
        count = 1;
    }


    for (j = 0; j < n; j++) {
      if (arr[j] > 0 && brr[j] > 0) {
        counter++;
        printf("%d %d\n", arr[j], brr[j]);
      }
    }

    printf("Total duplicates %d\n", counter);

    return 0;
}
