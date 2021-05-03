#include <stdio.h>

void m(int n) {
  if (n > 0) {
    m(--n);
    m(n--);
    printf("%d ", n);
  }
}

int main(int argc, char const *argv[]) {
  int a = 5;
  m(a);
  return 0;
}
