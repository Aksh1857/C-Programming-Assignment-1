#include <stdio.h>
int main(void) {
    int limit, cases, w, h;
    scanf("%d%d", &limit, &cases);
    while (cases--) {
        scanf("%d%d", &w, &h);
        if (w < limit || h < limit) puts("UPLOAD ANOTHER");
        else if (w == h) puts("ACCEPTED");
        else puts("CROP IT");
    }
    return 0;
}
