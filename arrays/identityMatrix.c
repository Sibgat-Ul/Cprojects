#include <stdio.h>

int main () {
  int i, j, totalr = 0, totall = 0, row1, col1;

  printf("Input should be square matrix.\n");

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

  printf("Arr1: \n");
  for (i = 0; i < row1; i++) {
    for (j = 0; j < col1; j++) {
      printf("%d ", arr1[i][j]);
    }
    printf("\n");
  }

  for (i = 0; i < row1; i++) {
    for (j = 0; j < col1; j++) {
      if ((i == j)) {
        totalr += arr1[i][j];
      }
    }
  }

  for (i = 0; i < row1; i++) {
    for (j = 0; j < col1; j++) {
      if ((i + j) == (row1 - 1)) {
        totall += arr1[i][j];
      }
    }
  }

  if (totalr == row1 && totalr == col1) {
    printf("Identity matrix.");
  }
  else if (totall == row1 && totall == col1) {
    printf("Identity matrix.");
  }
  else {
    printf("Not an identity matrix.");
  }

  return 0;
}

/*

left/main
1 0 0     11 12 13      11 0 0
0 1 0     21 22 23      0 22 0
0 0 1     31 32 33      0 0 33

right/main
0 0 1     11 12 13      00 01 02
0 1 0     21 22 23      10 11 12
1 0 0     31 32 33      20 21 22


*/
