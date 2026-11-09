#include <stdio.h>

int main() {
    int n;
    // Read the input integer
    scanf("%d", &n);

    int is_prime = 1;

    // Check divisibility from 2 up to n/2
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            is_prime = 0; // Found a factor, so it's not prime
            break;
        }
    }

    // Print 1 for prime, 0 for not prime, followed by a newline
    printf("%d\n", is_prime);

    return 0;
}