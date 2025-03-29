bool checkPalindrome(int num) {
    if (num < 0) return false; // Negative numbers are not palindromes
    int original = num, reversed = 0;

    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }

    return original == reversed;
}
