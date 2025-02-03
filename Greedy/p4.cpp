#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int q;
    cin >> q;
    while (q--) {
        int target;
        cin >> target;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += abs(arr[i] - target);
        }
        cout << ans << endl;
    }
}