#include <stdio.h>

int bubbleSort(int *a, int n) {
  int temp;

  for(int i = 0; i < n; i++) {
      for(int j = 0; j < n-i-1; j++) {

          if( a[j] > a[j+1] ) {
              temp = a[j];
              a[j] = a[j+1];
              a[j+1] = temp;
          }

      }
  }

  return 0;
}

int main () {
  int i, j, n1, n2, total = 0;

  printf("The length of array: ");
  scanf("%d %d", &n1, &n2);

  int arr1[n1][n2];
  int len = n1*n2;

  printf("Input array1: \n");
  for (i = 0; i < n1; i++) {
      for ( j = 0; j < n2; j++) {
      //    printf("array1 [%d][%d]: ", i, j);
          scanf("%d", &arr1[i][j]);
          total += arr1[i][j];
      }
    //  printf("\n");
  }


  printf("Max: %d\nMin: %d, total %d", arr1[0][0], arr1[n1-1][n2-1], total);


  return 0;
}
