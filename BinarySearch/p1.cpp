#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, target;
    cin >> n >> target;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    auto first = lower_bound(a.begin(), a.end(), target);
    auto last = upper_bound(a.begin(), a.end(), target);
    
    if (first == a.end() || *first != target) cout << -1 << " " << -1 << endl;
    else cout << distance(a.begin(), first) << " " << distance(a.begin(), last) - 1 << endl;
}