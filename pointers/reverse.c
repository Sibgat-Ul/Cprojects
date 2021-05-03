#include <stdio.h>
#include <stdlib.h>

int main () {
  int i, j, len;
  char *arrp, arr[10], temp;
  arrp = arr;

  scanf("%s", arr);

  len = strlen(arr);

  printf("%s %d", arrp, len);

  return 0;
}
