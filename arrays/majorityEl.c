#include <stdio.h>

int main () {
  int i, j, n, counter = 1, sum[100] = { 0 };

  scanf("%d", &n);
  int arr[n];

  for (i = 0; i < n; i++) {
    scanf("%d", (arr + i)); // arr+i = &arr[i]
    if (*(arr + i) <= 0) {
      printf("please input numbers between 1-100\n");
      break;
    }
  }

  for (i = 0; i < n; i++) {
    for (j = i+1; j < n; j++) {
        if (*(arr+i) == *(arr+j)) {
          counter++;
          sum[i] = counter;
          *(arr+j) = 0;
          /*
          if (counter >= (n/2) && arr[i] > 0) {
            printf("Majority %d \n", arr[i]);
          }
          */
        }
    }
    counter = 1;
  }

  for (i = 0; i < n; i++) {
      if (sum[i] >= (n/2) && sum[i] > 0 && arr[i] > 0) {
        printf("Majority is %d\n", arr[i], sum[i]);
        break;
      } else {
        printf("No majority");
        break;
      }
  }

  return 0;
}
