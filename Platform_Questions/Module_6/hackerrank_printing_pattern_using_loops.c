#include <stdio.h>
int main(void) {
    int n; scanf("%d", &n);
    int size = 2*n-1;
    for (int r=0; r<size; r++) {
        for (int c=0; c<size; c++) {
            int top=r, left=c, bottom=size-1-r, right=size-1-c;
            int layer=top; if(left<layer)layer=left; if(bottom<layer)layer=bottom; if(right<layer)layer=right;
            if(c) putchar(' ');
            printf("%d", n-layer);
        }
        putchar('\n');
    }
    return 0;
}
