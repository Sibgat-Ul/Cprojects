#include <stdio.h>

int main () {
  int i, j, *ip, *jp, total;

  ip = &i;
  jp = &j;

  printf("Enter two numbers: ");
  scanf("%d %d", &i, &j);

  total = *ip + *jp;

  printf("total %d", total);

  return 0;
}
