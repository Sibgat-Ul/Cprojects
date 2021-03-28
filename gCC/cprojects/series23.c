#include <stdio.h>

int fact (int x) {
    int res = 1;

    for (int i = 1; i <= x; i++) {
        res *= i;
    }

    printf("%d\n", res);

    return res;
}

int power (float b, int y) {
    float total = 1;

    for (int i = 1; i <= y; i++) {
       total *= b;
    }

    return total;
}

int main() {
	int i = 65;

	printf("%c", (char) i);


    return 0;
}

/*

{

float x, sum,, term = 1;

int n;

for (int i = 1; i <= n; i++ {

    sum += sum + term;
    term *= x/i

}

{
    term = num/denum
    sum += term;
    num *= x;
    den *= i;
}

*/
