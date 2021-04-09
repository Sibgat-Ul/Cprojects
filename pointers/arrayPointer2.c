#include <stdio.h>

int main () {
  int i, j, n;

  scanf("%d", &n);

  int arr[n];
  int *ptr = arr;

  for (i = 0; i < n; i++) {
    scanf("%d", ptr+i);   //&data[i] == data + i
  }

  for (i = 0; i < n; i++) {
    printf("%d", *(ptr+i)); //data[0] == *(data + i)
  }


  return 0;
}
