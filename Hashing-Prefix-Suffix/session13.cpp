#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> mp;
    int max_dist = -1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (mp.find(a[i]) != mp.end()) {
            max_dist = max(max_dist, i - mp[a[i]]);
        }
        mp[a[i]] = i;
    }
    cout << max_dist << endl;
}
