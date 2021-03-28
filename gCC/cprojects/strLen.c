#include <stdio.h>

int main () {
    char s[100];
    int i = 0, len = 0;

    scanf("%s", &s);

    while (s[i]) {
        len++;
        i++;
    }

    printf("%d is the length of %s", len, s);

    return 0;
}
