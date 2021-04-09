#include <stdio.h>

int sum_natural(int x) {
  int total = 0;
  if (x > 0) {
    return x + sum_natural(x-1);
  }
}

int main () {
  int x, sum;

  printf("Total: ");
  scanf("%d", &x);

  sum = sum_natural(x);
  printf("%d\n", sum);



  return 0;
}
