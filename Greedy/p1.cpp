#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> b(n);
    for (int i = 0; i < n; i++) cin >> b[i];

    sort(b.rbegin(), b.rend()); 
    int ans = 0;
    for (int i = 0; i < k; i++) {
        ans += b[i];
    }
    cout << ans << endl;
}