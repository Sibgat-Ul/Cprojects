#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int permu(char *s, int start, int n) {
  int i, j;
  char temp;

  for (i = start; i < n-1; i++) {
    for (j = i+1; j < n; j++) {
      temp = s[i]; //*(s+i) == s[i]
      s[i] = s[j];
      s[j] = temp;
      //Recursive
      permu(s, i+1, n);
      //Backtracking and swapping the charaters again
      temp = s[i]; //*(s+i) == s[i]
      s[i] = s[j];
      s[j] = temp;
    }
  }

  printf("%s\n", s);

  return 0;
}

int main() {
  char s[10];
  int n;

  scanf("%s", &s);

  n = strlen(s);

  permu(s, 0, n);

  return 0;
}
