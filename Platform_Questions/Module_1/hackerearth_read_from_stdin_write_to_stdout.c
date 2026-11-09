#include <stdio.h>

int main(void) {
    int number;
    char text[1001];

    if (scanf("%d", &number) != 1) return 0;
    if (scanf("%1000s", text) != 1) return 0;

    printf("%d\n", number * 2);
    printf("%s\n", text);

    return 0;
}