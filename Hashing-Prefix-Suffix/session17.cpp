#include <bits/stdc++.h>
using namespace std;
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    if (s1.size() != s2.size()) {
        cout << "NO" << endl;
        return 0;
    }
    unordered_map<char, int> mp;
    for (char c : s1) {
        mp[c]++;
    }
    for (char c : s2) {
        if (mp[c]-- == 0) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}
