#include <stdio.h>

int sum(int x) {
  if (x > 0) {
    return x + sum(x-1);
  }
}

int main () {
  int x, suma;

  printf("Total: ");
  scanf("%d", &x);

  suma = sum(x);
  printf("%d\n", suma);



  return 0;
}
