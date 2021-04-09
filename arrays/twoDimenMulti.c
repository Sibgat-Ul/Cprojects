#include <stdio.h>

int main () {
  int i, j, k, l, total = 0, row1, row2, col1, col2;

  printf("The number of column of array2 must be equal to the number of row of array1 and vice versa.\n");

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

  if (row1 == col2 && col1 == row2) {

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

    int res[row1][col2];

    for (i = 0; i < row1; i++) {
      for (j = 0; j < col2; j++) {
        for (k = 0; k < col1; k++) {
          total += arr1[i][k] * arr2[k][j];
          printf("%d * %d = %d    ", arr1[i][k], arr2[k][j], total);
        }
        res[i][j] = total;
        total = 0;
      }
      printf("\n");
    }

    printf("Multiplied: \n");
    for (i = 0; i < row1; i++) {
      for (j = 0; j < col2; j++) {
        printf("%d ", res[i][j]);
      }
      printf("\n");
    }

  } else {
      printf("Invalid.");
  }

  return 0;
}

/*

1 2     7 8 9
3 4
5 6     10 11 12


11 12   11 12 13
21 22
31 32   21 22 23


ik ik   kj kj kj
ik ik
ik ik   kj kj kj

*/
