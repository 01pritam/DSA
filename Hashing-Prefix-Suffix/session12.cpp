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

//Q2

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

//Q3


#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n), pref(n + 1, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        pref[i + 1] = pref[i] + a[i];
    }
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l - 1] << endl;
    }
}
