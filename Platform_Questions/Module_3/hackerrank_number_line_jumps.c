#include <stdio.h>
int main(void) {
    long long x1, v1, x2, v2;
    scanf("%lld%lld%lld%lld", &x1, &v1, &x2, &v2);
    if (x1 < x2 && v1 > v2 && (x2 - x1) % (v1 - v2) == 0) puts("YES");
    else puts("NO");
    return 0;
}
