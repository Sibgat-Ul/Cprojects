#include <stdio.h>

int main() {
	int i;

    scanf("%d", &i);

    if ( i >= 0 && i <= 9) {
        printf("is a digit");
    } else {
        printf("is not a digit");
    }

    return 0;
}
