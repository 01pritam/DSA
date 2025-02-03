#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    vector<int> dp(x+1, INT_MAX);
    dp[1] = 0;
    for (int i = 2; i <= x; i++) {
        dp[i] = min(dp[i-1], dp[i-2]);
        if (i % 7 == 0) dp[i] = min(dp[i], dp[i/7]);
        dp[i] += 1;
    }
    cout << dp[x] << endl;
}