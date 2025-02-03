#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, target;
    cin >> n >> target;
    vector<int> a(n);
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (mp.find(target - a[i]) != mp.end()) {
            cout << mp[target - a[i]] << " " << i << endl;
            return 0;
        }
        mp[a[i]] = i;
    }
}
