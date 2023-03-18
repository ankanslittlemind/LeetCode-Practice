// https://leetcode.com/problems/fibonacci-number/
int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    n -= 1;
    int a = 0, b = 1, c;
    while (n--) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}