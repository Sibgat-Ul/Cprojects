#include<stdio.h>
#include<math.h>

int main () {
  int a[6], n;

  scanf("%d", &n);

  for (int i = 0; i < 6; i++) {
    scanf("%d", &a[i]);
  }

  for (int i = 0; i < 6; i++) {
    for (int j = i+1; j < 6; j++) {
      if (((a[i]) + a[j]) == n)
        printf("%d %d\n", i, j);
    }
  }

  return 0;
}
