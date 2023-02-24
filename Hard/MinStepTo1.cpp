#include<bits/stdc++.h>
using namespace std;
int minStep(int n) {
    int *dp = new int[n + 1];
    dp[0] = 0;
    dp[1] = 0;
    for (int i = 2; i <= n; i++) {
        int a = INT_MAX, b = INT_MAX, c = INT_MAX;
        a = dp[i - 1];
        if (i%2 == 0) {
            b = dp[i / 2];
        }
        if (i%3 == 0) {
            c = dp[i / 3];
        }
        dp[i] = min(a, min(b, c)) + 1;
    }
    return dp[n];
}
int main() {
    int n;
    cin >> n;
    cout << minStep(n);
}