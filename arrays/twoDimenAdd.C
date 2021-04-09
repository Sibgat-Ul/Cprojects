#include <stdio.h>

int main () {
  int n, i, j, total;

  printf("Length of array: ");
  scanf("%d", &n);

  int arr1[n][n], arr2[n][n];

  printf("array 1: \n");
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      printf("array [%d][%d]: ", i, j);
      scanf("%d", &arr1[i][j]);
    }
  }

  printf("array2: \n");
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      printf("array [%d][%d]: ", i, j);
      scanf("%d", &arr2[i][j]);
    }
  }

  printf("array 1: \n");
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      printf("%d ", arr1[i][j]);
    }
    printf("\n");
  }

  printf("array 2: \n");
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      printf("%d ", arr2[i][j]);
    }
    printf("\n");
  }

  printf("addition of 2: \n");
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      total = arr1[i][j] + arr2[i][j];
      printf("%d ", total);
    }
    printf("\n");
  }

  return 0;
}
