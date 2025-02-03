#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n;
    vector<int> a(n), dp(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    dp[0] = a[0];
    for (int i = 1; i < n; i++) dp[i] = dp[i-1] + a[i];
    cin >> q;
    while (q--) {
        int i;
        cin >> i;
        cout << dp[i-1] << endl;
    }
}