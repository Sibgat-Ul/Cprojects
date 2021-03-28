#include <stdio.h>
#include <string.h>

/*
int len(char *s) {
    int i = 0, leng = 0;

    while (s[i]) {
        leng++;
        i++;
    }

    return leng;
}

*/

int main () {
    char s[110];
    int i, n;

    scanf("%s", &s);

    n = len(s);

    for (i = n; i >= 0; i--) {
        printf("%c", s[i]);
    }

    return 0;
}


