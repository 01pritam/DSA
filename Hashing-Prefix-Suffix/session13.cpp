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

//Q2

#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    unordered_set<char> ans(s.begin(), s.end());
    cout << ans.size() << endl;
}


//Q3

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<string> strs(n);
    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }
    unordered_map<char, int> mp;
    for (char c : strs[0]) {
        mp[c]++;
    }
    for (int i = 1; i < n; i++) {
        unordered_map<char, int> temp;
        for (char c : strs[i]) {
            if (mp[c] > 0) {
                temp[c]++;
            }
        }
        mp = temp;
    }
    for (auto &p : mp) {
        cout << p.first << " ";
    }
    cout << endl;
}
