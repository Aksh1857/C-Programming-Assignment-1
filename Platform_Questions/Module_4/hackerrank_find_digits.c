#include <stdio.h>
int main(void) {
    int t; long long n;
    scanf("%d", &t);
    while (t--) {
        scanf("%lld", &n); long long x = n; int count = 0;
        while (x) { int d = x % 10; if (d && n % d == 0) count++; x /= 10; }
        printf("%d\n", count);
    }
    return 0;
}
