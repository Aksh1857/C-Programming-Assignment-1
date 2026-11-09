bool isPalindrome(int x) {
    if (x < 0) return false;
    long long reversed = 0, original = x;
    while (x) { reversed = reversed * 10 + x % 10; x /= 10; }
    return reversed == original;
}
