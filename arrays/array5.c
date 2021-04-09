#include <stdio.h>

int bubbleSort (int arr[], int n) {
  int temp, j, i;

  for (i = 0; i < n; i++) {
    for (j = 0; j < n-i-1; j++) {

      if (arr[j] < arr[j+1]) {
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }

    }
  }

  return 0;
}

int main() {
  int n, arr[100], i;

  scanf("%d\n", &n);

  for (i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
  }

  bubbleSort(arr, n);

  printf("Maximum is %d\nMinimum is %d", arr[0], arr[n-1]);

  return 0;
}
