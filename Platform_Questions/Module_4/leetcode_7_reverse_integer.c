int reverse(int x) {
    long result = 0;
    while (x) {
        result = result * 10 + x % 10;
        if (result > 2147483647L || result < -2147483648L) return 0;
        x /= 10;
    }
    return (int)result;
}
