// https://leetcode.com/problems/palindrome-number/
bool isPalindrome(int x) {
    if (x < 0)
        return false;
    long rev = 0, org = x;

    while (x) {
        rev = rev*10 + x%10;
        x /= 10;
    }
    if (org == rev)
        return true;
    return false;
}