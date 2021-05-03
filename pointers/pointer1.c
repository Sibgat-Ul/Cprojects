#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
  int n = 60, *p;
  char c = 'a', str[80] = "hello world", *cp, *sp;

  p = &n;
  cp = &c;
  sp = str;

  printf("p is %d\n", *p);
  printf("cp is %c\n", *cp);
  printf("sp is %s\n", sp);

  printf("Mutations\n");

  *p = 100;
  *cp = 'b';
  sp = "no more same shit";

  printf("n is %d\n", n);
  printf("c is %c\n", c);
  printf("str is %s\n", str);

  return 0;
}
