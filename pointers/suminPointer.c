#include <stdio.h>

int main () {
  int i, j, n, total = 0, *tp;

  tp = &total;

  scanf("%d", &n);
  int nums[n];

  for (i = 0; i < n; i++) {
      scanf("%d", (nums + i)); //nums + i == &num[i]
  }

  for (i = 0; i < n; i++) {
      printf("%d ", *(nums + i)); //*(nums + i) == &num[i]
      *tp += *(nums+i);
  }

  printf("\ntotal: %d\n", total);
  printf("\ntotal: %d\n", *tp);

  return 0;
}
