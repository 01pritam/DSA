#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    vector<vector<int>>dp(n, vector<int>(2));
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    dp[0][0] = a[0];
    dp[0][1] = b[0];
    for (int i = 1; i < n; i++) {
        dp[i][0] = max(dp[i-1][0], b[i-1] + a[i]);
        dp[i][1] = max(dp[i-1][1], a[i-1] + b[i]);
    }
    cout << max(dp[n-1][0], dp[n-1][1]) << endl;
}