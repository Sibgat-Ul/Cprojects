#include <stdio.h>

int main () {
  int i, j, total = 0, a, b, arr1[3][3];

  printf("Input array1 \n");
  for (i = 0; i < 3; i++) {
      for ( j = 0; j < 3; j++) {
          printf("array1 [%d][%d]: ", i, j);
          scanf("%d", &arr1[i][j]);
      }
  }

  printf("array: \n");
  for (i = 0; i < 3; i++) {
      for ( j = 0; j < 3; j++) {
        printf("%d ", arr1[i][j]);
      }
      printf("\n");
  }

  printf("\n");

  for (i = 0; i < 3; i++) {

      printf("%d %d %d\n", i, (i+1)%3, (i+2)%3);
    /*
    a = arr1[1][(i+1)%3]*arr1[2][(i+2)%3];
    b = arr1[1][(i+2)%3]*arr1[2][(i+1)%3];
    total += (arr1[0][i]* a - b );
    */
  }

  printf("Determinant is: %d", total);

  return 0;
}
