#include <stdio.h>

int main () {
  int i, j, n = 20;
  char *str, az[26];
  str = az;

  for (i = 65; i <= 90; i++) {
    *(str + (i-65)) = (char) i;

    printf("%c ", *((str + (i-65))));
  }

  return 0;
}
