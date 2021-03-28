#include <stdio.h>
#include <string.h>

int main () {
    char *s;
    int f[10] = {0};
    s = malloc(1024 * sizeof(char));

    printf("Enter a string: ");
    scanf("%s", s);

    for (int i = 0; i < strlen(s); i++) {

        switch (s[i]) {

            case '0':
                f[0]++;
                break;

            case '1':
                f[1]++;
                break;

            case '2':
                f[2]++;
                break;

            case '3':
                f[3]++;
                break;

            case '4':
                f[4]++;
                break;

            case '5':
                f[5]++;
                break;

            case '6':
                f[6]++;
                break;

            case '7':
                f[7]++;
                break;

            case '8':
                f[8]++;
                break;

            case '9':
                f[9]++;
                break;

        }

    }

    for (int i = 0; i < 10; i++) {

        printf("%d ", f[i]);

    }

    return 0;
}
