#include <stdio.h>

int even(int *num, int i) {
  while (i > 0){
    //int ev = *num % 2 == 0 ? printf("even %d\n", *num) : printf("odd %d\n", *num);
    if (*num % 2 == 0)
      printf(" %d", *num);

    i--;
    return even(num + 1, i);
  }
}

int odd(int *num, int i) {
  while (i > 0){
    //int ev = *num % 2 == 0 ? printf("odd %d\n", *num) : printf("odd %d\n", *num);
    if (*num % 2 != 0)
      printf(" %d", *num);

    i--;
    return odd(num + 1, i);
  }
}

int main(int argc, char const *argv[]) {
  int n, i, j;
  scanf("%d", &n);;
  int numArr[n];

  for (i = 0; i < n; i++) {
    scanf("%d", &numArr[i]);
  }

  printf("even :");
  even(numArr, n);

  printf("\nodd :");
  odd(numArr, n);

  return 0;
}
