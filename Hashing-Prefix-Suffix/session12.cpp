#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }
    for (auto &p : freq) {
        cout << p.first << " " << p.second << endl;
    }
}
