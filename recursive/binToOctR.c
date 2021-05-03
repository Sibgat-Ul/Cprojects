#include <stdio.h>
#include <math.h>

int dec(int num, int i) {
  while (num > 0) {
    return (num%10 * pow(2, i)) + dec(num/10, i+1);
  }
}

int main() {
    int num, res;

    printf("enter a number binary: ");
    scanf("%d", &num);

    res = dec(num, 0);
    printf("octal : %o", res);

    return 0;
}
