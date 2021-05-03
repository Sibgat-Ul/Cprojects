#include <stdio.h>

int digitsum (int n) {
  if (n < 10);
    return n;
  return digitsum(n/10) + (n%10);
}

int main(int argc, char const *argv[]) {

  printf("%d\n", digitsum(1356));

  return 0;
}
