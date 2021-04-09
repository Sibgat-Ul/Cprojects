#include <stdio.h>
#include <stdlib.h>

int main () {
  int i, j, r, c;

  printf("Row and column\n");
  scanf("%d %d *[^\n]", &r, &c);

  printf("Row and column: ");
  char *arr = (char *)malloc(r * sizeof(char));
  fgets(arr, 100, stdin);

  puts(arr);

  fclose(*arr);
  free (arr);

  return 0;
}
