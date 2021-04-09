#include <stdio.h>

void reverse_digits(int x) {
  int rev;

  if (x != 0) {
    rev = x % 10;
    printf("%d", rev);
    reverse_digits(x/10);
  }

}

int main () {
  int i, j = 0, *x;

  printf("Enter a number: ");
  scanf("%d", &i);
  x = &i;

  printf("Reverse: ");
  reverse_digits(*x);

  return 0;
}
