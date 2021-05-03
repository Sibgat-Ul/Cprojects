#include <stdio.h>

int main () {
  int i, j, k = 0, l, n, total;

  scanf("%d", &n);
  char sen[n][1];
  char v[n];
  char c[n];

  for (i = 0; i < n; i++) {
    printf("Char [%d]: ", i);
    scanf("%s", &sen[i][1]);
  }

  printf("vowel: ");
  for (i = 0; i < n; i++) {

    if (
        sen[i][1] == 'a' ||
        sen[i][1] == 'e' ||
        sen[i][1] == 'i' ||
        sen[i][1] == 'o' ||
        sen[i][1] == 'u'
      ) {
      //    v[k] = sen[i][1];
          printf("%c ", sen[i][1]);
        //  k++;
      }
  }

  printf("\nconsonant: ");
  for (i = 0; i < n; i++) {

    if (
        sen[i][1] != 'a' &&
        sen[i][1] != 'e' &&
        sen[i][1] != 'i' &&
        sen[i][1] != 'o' &&
        sen[i][1] != 'u'
      ) {
          printf("%c ", sen[i][1]);
      }
  }

  return 0;
}
