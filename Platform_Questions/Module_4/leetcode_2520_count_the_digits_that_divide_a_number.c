int countDigits(int num) {
    int count = 0, x = num;
    while (x) { int d = x % 10; if (d && num % d == 0) count++; x /= 10; }
    return count;
}
