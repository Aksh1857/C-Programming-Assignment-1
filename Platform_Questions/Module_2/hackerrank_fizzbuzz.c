#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 15 == 0) puts("FizzBuzz");
        else if (i % 3 == 0) puts("Fizz");
        else if (i % 5 == 0) puts("Buzz");
        else printf("%d\n", i);
    }
    return 0;
}
