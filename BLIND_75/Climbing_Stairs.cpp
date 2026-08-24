#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 3;

    // Create a dp array initialized with -1
    vector<int> dp(n + 1, -1);

    // Base cases
    dp[0] = 1;
    dp[1] = 1;

    // Fill dp array using bottom-up dynamic programming
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    // Print the nth Fibonacci number
    cout << dp[n];
    return 0;
}
