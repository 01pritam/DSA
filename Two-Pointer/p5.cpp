#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int i = 0, maxi = 0;
    
    tree<char, null_type, less<char>, rb_tree_tag, tree_order_statistics_node_update> o_set;

    for (int j = 0; j < n; j++) {
        o_set.insert(s[j]);
        while (*o_set.rbegin() - *o_set.begin() > k) {
            o_set.erase(s[i++]);
        }
        maxi = max(maxi, j - i + 1);
    }

    cout << maxi << endl;
}
