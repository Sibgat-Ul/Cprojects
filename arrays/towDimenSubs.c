#include <stdio.h>

int main () {
  int i, j, n, total;

  printf("The length of array: ");
  scanf("%d", &n);

  int arr1[n][n], arr2[n][n];

  printf("array1: \n");
  for (i = 0; i < n; i++) {
    for ( j = 0; j < n; j++) {
      printf("array1 [%d][%d]: ", i, j);
      scanf("%d", &arr1[i][j]);
    }
  }

  printf("array2: \n");
  for (i = 0; i < n; i++) {
    for ( j = 0; j < n; j++) {
      printf("array2 [%d][%d]: ", i, j);
      scanf("%d", &arr2[i][j]);
    }
  }

  printf("total: \n");
  for (i = 0; i < n; i++) {
    for ( j = 0; j < n; j++) {
      total = arr1[i][j] + arr2[i][j];
      printf("%d ", total);
    }
    printf("\n");
  }

  return 0;
}
