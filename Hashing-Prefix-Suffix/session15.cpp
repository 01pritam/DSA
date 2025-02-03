#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    unordered_map<int, int> mp;
    int count = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (mp.find(a[i] - k) != mp.end()) {
            count += mp[a[i] - k];
        }
        if (mp.find(a[i] + k) != mp.end()) {
            count += mp[a[i] + k];
        }
        mp[a[i]]++;
    }
    cout << count << endl;
}
