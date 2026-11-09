#include <stdio.h>
int main(void) {
    int n; unsigned long long result = 1;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) result *= (unsigned)i;
    printf("%llu\n", result);
    return 0;
}
