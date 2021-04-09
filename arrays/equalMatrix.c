#include <stdio.h>
#include <stdbool.h>

int main () {
  int i, j, k, l, total = 0, row1, row2, col1, col2;
  bool err = true;

  printf("Length of row of array1: ");
  scanf("%d", &row1);

  printf("Length of column of array1: ");
  scanf("%d", &col1);

  int arr1[row1][col1];

  printf("Arr1: \n");
  for (i = 0; i < row1; i++) {
    for (j = 0; j < col1; j++) {
      printf("Arr1 [%d][%d]:", i, j);
      scanf("%d", &arr1[i][j]);
    }
  }

  printf("Length of row of array2: ");
  scanf("%d", &row2);

  printf("Length of column of array2: ");
  scanf("%d", &col2);

  if (row1 == row2 && col1 == col2) {

  int arr2[row2][col2];

  printf("Arr2: \n");
  for (i = 0; i < row2; i++) {
    for (j = 0; j < col2; j++) {
      printf("Arr2 [%d][%d]:", i, j);
      scanf("%d", &arr2[i][j]);
    }
  }

  printf("Arr1: \n");
  for (i = 0; i < row1; i++) {
    for (j = 0; j < col1; j++) {
      printf("%d ", arr1[i][j]);
    }
    printf("\n");
  }

  printf("Arr2: \n");
  for (i = 0; i < row2; i++) {
    for (j = 0; j < col2; j++) {
      printf("%d ", arr2[i][j]);
    }
    printf("\n");
  }

  for (i = 0; i < row1; i++) {
    for (j = 0; j < col1; j++) {
      if (arr1[i][j] != arr2[i][j]) {
        err = true;
        break;
      } else {
        err = false;
      }
    }
  }

  printf("\n");

  if (err == false) {
    printf("equal\n");
  } else {
    printf("not equal\n");
  }

  } else {
      printf("not equal");
  }

  return 0;
}
