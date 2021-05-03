#include <stdio.h>

int bubbleSort (int *arr, int n) {
  int i, j, temp;

  for (i = 0; i < n; i++) {
    for (j = 0; j < n-i-1; j++) {
      if (*(arr + j) > *(arr + j + 1)) {
        temp = *(arr + j);
        *(arr + j) = *(arr + j + 1);
        *(arr + j + 1) = temp;
      }
    }
  }

  return 0;
}

int main () {
  int i, j, n1, n2, strt, end, counter = 1, brr[100];

  printf("Starting number (range will be set to (input+n): ");
  scanf("%d", &strt);
  printf("set the range of numbers to check into: ");
  scanf("%d", &n1);

  printf("total numbers to check: ");
  scanf("%d", &n2);

  int arr[n2];

  for (i = 0; i < n1; i++) {
    *(brr + i) = i + strt;
  }

  printf("Input:\n");
  for (i = 0; i < n2; i++) {
    scanf("%d", (arr + i));
  }

  bubbleSort(arr, n2);

  for (i = 0; i < n2; i++) {
    for (j = 0; j < n1; j++) {
      if (*(arr + i) == *(brr + j)) {
        *(brr + j) = 0;
      }
    }
  }

  printf("missings are\n");
  for (j = 0; j < n1; j++) {
    if (*(brr + j) != 0) {
      printf("%d ", *(brr + j));
    }
  }


  return 0;
}
