#include <stdio.h>
int main(void) {
    int a, b;
    const char *word[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) puts(word[i]);
        else puts(i % 2 == 0 ? "even" : "odd");
    }
    return 0;
}
