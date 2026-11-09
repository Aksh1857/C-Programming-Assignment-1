#include <stdio.h>
int main(void) {
    int n, grade;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &grade);
        if (grade >= 38 && grade % 5 >= 3) grade += 5 - grade % 5;
        printf("%d\n", grade);
    }
    return 0;
}
