#include <stdio.h>

int main () {
  int i, j, counter = 0, row, col;

  printf("Enter row and column: ");
  scanf("%d %d", &row, &col);

  int arr[row][col];

  printf("Input values\n");
  for (i = 0; i < row; i++) {
    for (j = 0; j < col; j++) {
      printf("arr[%d][%d]: ", i, j);
      scanf("%d", &arr[i][j]);
      if (arr[i][j] == 0) {
        counter++;
      }
    }
  }

  printf("\nArray: \n");
  for (i = 0; i < row; i++) {
    for (j = 0; j < col; j++) {
      printf("%d  ", arr[i][j]);
    }
    printf("\n");
  }

  if (counter > ((row*col)/2)) {
		printf ("Is a sparse matrix. \n\n");
	} else {
    printf ("Not a sparse matrix. \n\n");
  }

  printf("Counter is %d\n", counter);

  return 0;
}
