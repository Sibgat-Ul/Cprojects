#include <stdio.h>

int main () {
  int i, j, row, col;

  printf("The row and column of array: ");
  scanf("%d %d", &row, &col);

  int arr1[row][col], arrT[col][row];

  printf("Input array: \n");
  for (i = 0; i < row; i++) {
      for ( j = 0; j < col; j++) {
          printf("array1 [%d][%d]: ", i, j);
          scanf("%d", &arr1[i][j]);
      }
  }

  for (i = 0; i < row; i++) {
      for ( j = 0; j < col; j++) {
          arrT[j][i] = arr1[i][j];
      }
  }

  printf("transpose: \n");
  for (i = 0; i < col; i++) {
      for ( j = 0; j < row; j++) {
        printf("%d ", arrT[i][j]);
      }
      printf("\n");
  }

  return 0;
}
