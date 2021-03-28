#include <stdio.h>
#include <string.h>

int main () {
    char s[100];
    fgets (s, 100, stdin);

    char *token = strtok(s, " ");

    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
}

/*
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1)
*/
