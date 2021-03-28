#include <stdio.h>

int main () {
    int a[100], n = 4, c = 0;

    printf("Enter the number of inputs");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if(a[i] == a[j]) {
                c++;
                //printf("%d %d %d\n", a[i], a[j], c);
                a[i] = 0;
                a[j] = 0;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            printf("unique elements are: %d\n", a[i]);
        }
    }

    return 0;
}

