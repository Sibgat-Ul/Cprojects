#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int len(char *s) {
    int i = 0, leng = 0;

    while (s[i]) {
        leng++;
        i++;
    }

    return leng;
}

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




/*


int main () {
    int n1 , n2, sum, count = 0, rem1, rem2;

    scanf("%d %d", &n1, &n2);

    while ( n1!= 0 || n2!=0) {

        rem1 = n1 % 10;
        rem2 = n2 % 10;

        //printf("%d %d\n", rem1, rem2);

        sum = rem1 + rem2 + count;

        count += sum/10;

        n1 /= 10;
        n2 /= 10;
    }

    printf("the carry is %d", count);

    return 0;
}

int main () {
    int i, n, x, num = 1;
    float sum = 0;

    printf("enter a number and nth number: ");
    scanf("%d %d", &n, &x);

    for (i = 1; i <= n; i++) {
        num *= x;
        printf("%d/%d\n", num,i);
    }

    printf("sum: %f", sum);

    return 0;
}


int main()

{
    int num1 = 9555, num2 = 555, carry = 0, count = 0, total = 0;

    /*
    scanf("%d", &num1);
    scanf(" %d", &num2);


    total = 5 + 5;

    carry = total / 10;

    count += carry;

    total = 5 + 5;

    carry = total / 10;

    count += carry;

    total = 5 + 5;

    carry = total / 10;

    count += carry;

    printf("%d", count);

    return 0;
}
*/
