#include <stdio.h>

int main () {
  int i, j, n, total = 0;

  printf("The length of array: ");
  scanf("%d", &n);

  int arr1[n][n], arr2[n][n];

  printf("Input array1: \n");
  for (i = 0; i < n; i++) {
      for ( j = 0; j < n; j++) {
          printf("array1 [%d][%d]: ", i, j);
          scanf("%d", &arr1[i][j]);
      }
  }

  printf("array: \n");
  for (i = 0; i < n; i++) {
      for ( j = 0; j < n; j++) {
        printf("%d   ", arr1[i][j]);
      }
      printf("\n");
  }

  for (i = 0; i < n; i++) {
      for ( j = 0; j < n; j++) {
        if ((i + j) == (n-1)) {
          total += arr1[i][j];
        }
      }
  }

  printf("total: %d", total);


  return 0;
}
