#include <stdio.h>

int bin(int num) {
  while (num > 0) {
    return num%2 + bin(num/2)*10;
  }
}

int main() {
    int num, res;

    printf("enter a number: ");
    scanf("%d", &num);

    res = bin(num);
    printf("binary : %d", res);

    return 0;
}
