#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    unordered_map<int, int> mp;
    int xor_sum = 0, count = 0;
    mp[0] = 1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        xor_sum ^= a[i];
        if (mp.find(xor_sum ^ k) != mp.end()) {
            count += mp[xor_sum ^ k];
        }
        mp[xor_sum]++;
    }
    cout << count << endl;
}
